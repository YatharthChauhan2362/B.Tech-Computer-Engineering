cf = imread("peppers.png");
imshow(cf)
for a = 1:size(cf)
    for b = 128:size(cf)
            cf(a,b) = cf(a,b) - 100;
    end
end
imshow(cf)