clc;
clear all;
img=imread('cameraman.tif')
imshow(img);
[row col]=size(img)
for i=1:row
    for j=1:col
        img(i,j) = (50*log(double(1+img(i,j))));
    end
end

figure;
imshow(img);

•	clc clears the Command Window.
•	clear all clears all variables from the workspace.
•	img=imread('cameraman.tif') reads in the image "cameraman.tif" and stores it in the variable img.
•	imshow(img) displays the image img in a new figure window.
•	[row col]=size(img) retrieves the size of img into variables row and col.
•	The nested for loops iterate over each pixel in the image (i for rows and j for columns), and apply the following transformation: img(i,j) = (50*log(double(1+img(i,j)))).
•	double(1+img(i,j)) converts the pixel value to a double-precision number and adds 1 to it.
•	log() calculates the natural logarithm of the resulting number.
•	50*log(double(1+img(i,j))) scales the result by a factor of 50.
•	The transformed value is then assigned back to the pixel location in img.
•	figure creates a new figure window.
•	imshow(img) displays the transformed image in the new figure window.

