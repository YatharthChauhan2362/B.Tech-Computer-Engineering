clc;
close all;
clear;

img = imread("cameraman.tif");
imshow(img);
figure;
imhist(img);
figure;

img2=imadjust(img);
imshow(img2);
figure;
imhist(img2);
