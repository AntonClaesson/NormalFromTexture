img = imread('leafes.jpg');
normal = normalFromTexture(img, 1);
imshowpair(img, normal, 'montage');
