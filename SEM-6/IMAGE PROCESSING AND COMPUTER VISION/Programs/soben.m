img = imread('cameraman.tif');

sobel_img = edge(img, 'Sobel');

subplot(1, 2, 1), imshow(img), title('Original Image');
subplot(1, 2, 2), imshow(sobel_img), title('Sobel Filtered Image');

