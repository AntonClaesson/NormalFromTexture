function N=normalFromTexture(img, strength) %#codegen
    %img: The texture, which is represented as a mxnx3 matrix of type uint8
    %strength: A double between [0,1] affecting the strength of the blue channel in the normal map 
    %N: The resulting normal map, represented as a mxnx3 matrix of type uint8
    
    %Convert to gray
    A = double(rgb2gray(img));
   
    %compute derivatives
    hx = fspecial('sobel');
    hy = hx';
    Gx = imfilter(A,hx);
    Gy = imfilter(A,hy);
    
    %Define and compute normal map
    [n, m, channels] = size(img);
    N = zeros(n, m, channels,'double');

    N(:,:,1) = -Gx(:,:)./sqrt(Gx(:,:).^2 + Gy(:,:).^2 + 1);
    N(:,:,2) = -Gy(:,:)./sqrt(Gx(:,:).^2 + Gy(:,:).^2 + 1);
    N(:,:,3) = 1*strength;

    %Normalize channels to [0,1]
    N(:,:,1:2) = (N(:,:,1:2) + 1)/2;
    %N(:,:,1:2) = (N(:,:,1:2) - min(min(N(:,:,1:2))))./(max(max(N(:,:,1:2)))-min(min(N(:,:,1:2))));

    %Convert to uint8
    N = im2uint8(N);
end