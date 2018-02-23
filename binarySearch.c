#include <stdio.h>

int binarySearch(int a[], int N, int x);

int main() {
    int a[] = {23,45,71,1010,21,21,1,2,103,57};
    int N = sizeof (a)/sizeof (a[0]);
    int x = 21;

    if (binarySearch(a, N, x) != -1)
        printf("Co %d trong mang\n", x);
    else printf("Khong tim thay\n");

    return 0;
}

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
    return -1;
}
