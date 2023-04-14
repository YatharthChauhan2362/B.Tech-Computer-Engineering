clc;
clear all;
img = imread('cameraman.tif');
imshow(img);
[row, col] = size(img);
gamma=0.5;

for i=1:row
    for j=1:col
        img(i,j) = 1*(double(img(i,j)^(1/gamma)));
    end
end

figure;
imshow(img);

for i=1:row
    for j=1:col
        img1 (i,j) = 1*(double(img(i,j)^(gamma)));
    end
end

figure;
imshow(img1);