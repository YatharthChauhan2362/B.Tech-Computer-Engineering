clc;
close all;
clear;
img = imread("myrectangle.png");
img2=rgb2gray(img);
imshow(img2);
%(28,43) (76,18) -> (139,58) (187,)  (28,19) (78,42)
for i=17:45
    for j=28:78
        img2(i+10,j+60)=img2(i,j);
    end
end
figure;
imshow(img2);