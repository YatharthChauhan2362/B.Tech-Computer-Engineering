clc;
close all;
clear;

img = imread("cameraman.tif");
imshow(img);
figure;
imhist(img);
a=imhist(img);
pmf=a/65536;
sum=0;
for i =1:size(pmf)
    sum=sum+pmf(i);
    pmf(i)=sum;
end
maxval=max(img);
maxv = max(maxval);
ans1 = pmf* double(maxv);

for i=1:size(img)
    for j=1:size(img)
        img(i,j)=ans1(img(i,j)+1);
    end
end
figure;
imshow(img);
figure;
imhist(img);