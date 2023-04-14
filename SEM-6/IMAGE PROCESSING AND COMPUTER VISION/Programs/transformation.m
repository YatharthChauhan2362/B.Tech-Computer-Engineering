clc;
clear all;
img = imread('blackbox.png');
img=rgb2gray(img);
figure;
x0=100
y0=100

for i=88:155
    for j=110:205
        x1=i+x0;
        y1=j+y0;
        img(x1,y1)=img(i,j);
    end
end
imshow(img);