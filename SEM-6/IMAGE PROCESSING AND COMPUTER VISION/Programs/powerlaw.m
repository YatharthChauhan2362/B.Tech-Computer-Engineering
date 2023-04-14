clc;
clear all;

img = imread('cameraman.tif');


r = double(img);

G = 0.6;

S = C * (r .^G);
T = 255/(C * (255 .^G));

O = uint8(T * S);
figure;
imshow(O);
