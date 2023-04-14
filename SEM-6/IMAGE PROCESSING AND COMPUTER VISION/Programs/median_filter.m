clc;
clear all;
close all;
img = imread('cameraman.tif');
imshow(img);
j_img=imnoise(img,'salt & pepper');
imshow(j_img);
[row col]=size(img);
temp=zeros(row+2,col+2);
for i=1:row
    for j=1:col
        temp(i+1,j+1)=j_img(i,j);
    end
end   

b=zeros(3,3);
for i=1:row
    for j=1:col
        for k=1:3
            for l=1:3
                b(k,l)=temp(i+k-1,j+l-1);  
            end
          
        end
         temp(i,j)=median(median(b));
    end
    
end
figure;
imshow(temp,[]);
