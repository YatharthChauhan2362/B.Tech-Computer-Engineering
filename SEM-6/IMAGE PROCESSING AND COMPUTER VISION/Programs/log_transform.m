clc;
clear all;
img=imread('cameraman.tif')
imshow(img);
[row col]=size(img)
for i=1:row
    for j=1:col
        img(i,j) = (50*log(double(1+img(i,j))));
    end
end

figure;
imshow(img);

