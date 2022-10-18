import numpy as np

# creating two 2D arrays
arr1 = np.arange(1, 10).reshape(3, 3)
arr2 = np.arange(10, 19).reshape(3, 3)
print(arr1)
print("\n", arr2)

# concating operations (axis 1 for column, 0 for row)
np.concatenate((arr1, arr2), axis=1)

print("\n20DCE019 - Yatharth Chauhan")
