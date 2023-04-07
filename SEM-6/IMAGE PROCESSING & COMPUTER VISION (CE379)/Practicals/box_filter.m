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

1.	The first line "close all;" closes all open figures in the MATLAB workspace.
2.	The second line reads in an image called "cameraman.tif" using the imread function and assigns it to a variable "img".
3.	The third line displays the image using the imshow function.
4.	The fourth line gets the size of the image using the size function and assigns the number of rows to "row" and the number of columns to "col".
5.	The fifth line creates a new matrix called "temp" that is initialized with all elements set to zero and has a size of (row+2) x (col+2).
6.	The sixth to eighth lines copy the image "img" to the matrix "temp" starting from the (2,2) position (because "temp" has 2 extra rows and columns compared to "img"). This is done by looping over all rows and columns of "img" and copying the corresponding values to "temp".
7.	The ninth line creates a new matrix "b" with all elements set to zero and a size of 3x3. This matrix will be used for filtering the image.
8.	The tenth to fifteenth lines loop over all pixels of the image by iterating over all rows and columns of "img". For each pixel, a 3x3 submatrix of "temp" centered at that pixel is extracted by using two nested loops (for k and l) and the submatrix is assigned to the matrix "b". The submatrix is extracted by taking the current pixel as the center of the submatrix and using indices relative to the current pixel (i+k-1, j+l-1).
9.	At the end of the code, matrix "b" will contain a 3x3 submatrix of "temp" centered at each pixel of the original image "img". This can be used for various image processing tasks, such as filtering, convolution, and edge detection.

