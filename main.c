#include "main.h"

int main() {
    int a[] = {100, 1, 34, 121, 345, 2134, 12, 67, 94, 212, 90, 105};
    int N = sizeof (a)/sizeof (a[0]);

    // Bubble sort
    //bubbleSort1(a, N);
    //xuatmang(a, N);

    // Interchange sort
    //interchangeSort(a, N);
    //xuatmang(a, N);

    // Shaker sort
    //shakerSort(a, N);
    //xuatmang(a, N);

    // Insertion sort
    //insertionSort(a, N);
    //xuatmang(a, N);

    // Selection sort
    //selectionSort(a, N);
    //xuatmang(a, N);

    // Improved selection sort
    //selectionSort_improve(a,N);
    //xuatmang(a, N);

    // Radix sort
    radixSort(a, N);
    xuatmang(a, N);

    // Quick sort
    quickSort(a, 0, N-1);
    xuatmang(a, N);

    // Shell sort
    int h[] = {4,3,2,1};
    int k = sizeof (h)/sizeof (h[0]);
    shellSort3(a, N, h, k);
    xuatmang(a, N);

    // Binary search
    int x = 100, tmp;
    if ((tmp = binarySearch(a, N, x)) != -1)
        printf("Tim thay %d trong mang a o vi tri %d\n", x, tmp);
    else printf("Khong tim thay\n");

    return 0;
}
