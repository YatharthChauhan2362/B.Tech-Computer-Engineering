close all;
img=imread('cameraman.tif');
imshow(img);
[row, col]=size(img);
temp = zeros(row+2,col+2);
for i=1:row
    for j=1:col
        temp(i+1,j+1)=img(i,j);
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
end
end

