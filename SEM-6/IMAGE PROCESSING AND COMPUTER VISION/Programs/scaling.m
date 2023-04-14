clc;
close all;
clear;
img = imread("ipcv.png");
img2=rgb2gray(img);
imshow(img2);
x=113-72;
y=203-133;
fac=2.5;
x1=int64(x*fac);
y1=int64(y*fac);
%(28,43) (76,18) -> (139,58) (187,)  (28,19) (78,42)
for i=x1:113
    for j=y1:203
        img2(i,j)=0;
    end
end
figure;
imshow(img2);