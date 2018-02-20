int binarySearch(int a[], int N, int x) {
    int mid;
    int left = 0, right = N-1;
    do {
        mid = (left + right)/2;
        if (a[mid] == x) return 1;
        else {
            if (a[mid]<x) left = mid + 1;
            else right = mid - 1;
        }
    } while (left <= right);
    return 0;
}

