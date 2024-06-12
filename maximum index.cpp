int maxIndexDiff(int a[], int n) 
{
    if (n == 0) return 0;

    // Create arrays to store the left minimums and right maximums
    int leftMin[n], rightMax[n];

    // Initialize leftMin array
    leftMin[0] = a[0];
    for (int i = 1; i < n; ++i)
        leftMin[i] = min(a[i], leftMin[i-1]);

    // Initialize rightMax array
    rightMax[n-1] = a[n-1];
    for (int j = n-2; j >= 0; --j)
        rightMax[j] = max(a[j], rightMax[j+1]);

    // Traverse both arrays to find the maximum index difference
    int i = 0, j = 0, maxDiff = -1;
    while (j < n && i < n) {
        if (leftMin[i] <= rightMax[j]) {
            maxDiff = max(maxDiff, j - i);
            j++;
        } else {
            i++;
        }
    }

    return maxDiff;
}
