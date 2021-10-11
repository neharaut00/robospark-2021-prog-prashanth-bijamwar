import cv2
import numpy as np

img = cv2.imread(r"reference/morphology.jpg")

kernel = np.ones((5, 5), np.uint8)

img_erosion = cv2.erode(img, kernel, iterations=1)
img_dilation = cv2.dilate(img_erosion, kernel, iterations=1)

cv2.imwrite("morphology-eroded.jpg", img_erosion)
cv2.imwrite("morphology-dilated.jpg", img_dilation)