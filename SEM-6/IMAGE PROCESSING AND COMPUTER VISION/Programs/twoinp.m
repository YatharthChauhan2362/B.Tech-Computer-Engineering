clc;
clear;
close all;
img = imread("cameraman.tif");
imshow(img);
Tr=input("Enter Th1: ");
Tr2=input("Enter Th2: ");
for i=1:size(img)
    for j=1:size(img)
        if img(i,j)>Tr && img(i,j)<=Tr2
            img(i,j)=+50;
    
        end
    end
end
imshow(img);
figure;