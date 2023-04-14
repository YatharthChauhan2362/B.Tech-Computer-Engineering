clc;
clear all;
close all;
Img = imread('yc.jpg');
J = imnoise(Img, 'salt & pepper', 0.05);
%imshow(J);

fs = 3;
P = padarray(J, [fs-1 fs-1]);

rmimg = zeros(size(J));

for i = 1:size(J,1)

    for j = 1:size(J,2)
       
        neighborhood = P(i:i+fs-1, j:j+fs-1);
    
        mv = median(neighborhood(:));
      
        rmimg(i,j) = mv;
    end
end

imshow(rmimg);