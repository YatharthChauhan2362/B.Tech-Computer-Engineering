clc;
close all;
clear;

img = imread("cameraman.tif");
%imshow(img);
%imhist(img);
imax=int32(max(max(img)));
imin=int32(min(min(img)));
disp(imin);
disp(int32(((200 - imin)/(253-7))*256))
for i=1:size(img)
    for j=1:size(img)
         g(i,j)=int32(((img(i,j) - 7)/(253-7))*256);
    end
end
imshow(g);
figure;
imhist(g);

