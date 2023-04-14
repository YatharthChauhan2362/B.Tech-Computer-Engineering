clc;
clear;

img = imread("cameraman.tif");
figure;
imshow(img);
s=size(img);
%img1=size(img);
%m1=min(min(img));
%m2=max(max(img));
for x=2 : s-1
    for y=2 : s-1
    a=0;
        for a=x-1 : x+1
            for b=y-1 : y+1
            a=a+img(a,b);
            end
        end
           img2(x,y)=floor(a/9);
    end
end

figure;
imshow(img2);
