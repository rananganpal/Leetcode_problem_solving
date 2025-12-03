void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1; // Pointer for the last element in the valid part of nums1
    int j = n - 1; // Pointer for the last element in nums2
    int k = nums1Size - 1; // Pointer for the last position in nums1

    // Merge in reverse order
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // If there are remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
         for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    }
}