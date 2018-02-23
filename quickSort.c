#include <stdio.h>

void swap(int *a, int *b);
void xuatmang(int a[], int N);
void quickSort(int a[], int left, int right);

int main() {
    int a[] = {23, 45, 71, 11, 1, 92, 190, 11, 0, 23, 2};
    int N = sizeof (a)/sizeof (a[0]);
    quickSort(a, 0, N-1);
    xuatmang(a, N);
    return 0;
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void quickSort(int a[], int left, int right) {
    int mid = a[(left+right)/2];
    int i=left, j=right;
    do {
    while (a[i]<mid) i++;
    while (a[j]>mid) j--;
    if (i<=j) {
        swap(&a[i], &a[j]);
        i++;
        j--;
    }
    } while (i<j);
    if (left<j) quickSort(a,left,j);
    if (i<right) quickSort(a,i, right);
}

void xuatmang(int a[], int N) {
    printf("-");
    for (int i=0; i<N; i++) {
        printf("%6d",i);
    }
    printf("\n ");
    for (int i=0; i<N; i++) {
        printf("%6d", a[i]);
    }
    printf("\n");
}
