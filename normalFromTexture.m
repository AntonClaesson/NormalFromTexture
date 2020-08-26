function N=normalFromTexture(img, strength)
    %img: mxnx3 matrix
    %strength: float[0,1]
    
    %Convert to gray and compute derivatives
    A = double(rgb2gray(img));
    [Gx,Gy] = imgradientxy(A,'sobel');
    
    %Define and compute normal map
    [n, m, channels] = size(img);
    N = zeros(n, m, channels,'double');

    N(:,:,1) = -Gx(:,:)./sqrt(Gx(:,:).^2 + Gy(:,:).^2 + 1);
    N(:,:,2) = -Gy(:,:)./sqrt(Gx(:,:).^2 + Gy(:,:).^2 + 1);
    N(:,:,3) = 1*strength;

    %Normalize channels to [0,1]
    N(:,:,1:2) = (N(:,:,1:2) - min(min(N(:,:,1:2))))./(max(max(N(:,:,1:2)))-min(min(N(:,:,1:2))));

    %Convert to uint8
    N = im2uint8(N);
end