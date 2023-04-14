clc;
close all;
clear;

img = imread("cameraman.tif");
for i=1:size(img)
    for j=1:size(img)
        img(i,j)=255-img(i,j);
    end
end
imshow(img);