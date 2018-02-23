#include <stdio.h>

void swap(int *a, int *b);
void xuatmang(int a[], int N);
void shellSort1(int a[], int N);
void shellSort2(int a[], int N);
void shellSort3(int a[], int N, int h[], int k);

int main() {
    int a[] = {23,45,71,1010,21,21,1,2,103,57};
    int N = sizeof (a)/sizeof (a[0]);
    shellSort1(a, N);
    xuatmang(a, N);

    int h[] = {6,4,2,1};
    shellSort3(a,N,h,4);
    xuatmang(a,N);
    return 0;
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

// shell sort ket hop bubble sort
// a la mang can sap xep
// N la so luong phan tu trong mang a

void shellSort1(int a[], int N) {
    int gap;
    int i, j;
    for (gap = N/2; gap>0; gap/=2) {
        for (i=gap; i<N; i++) {
            for (j=i-gap; j>=0 && a[j]>a[j+gap]; j-=gap) {
                swap(&a[j], &a[j+gap]);
                //xuatmang(a, N);
            }
        }
    }
}

// shell sort ket hop insertion sort voi khoang gap theo N
// a la mang can sap xep
// N la so luong phan tu trong mang a
void shellSort2(int a[], int N) {
    int x, j;
    for (int gap=N/2; gap>0; gap/=2) {
        for (int i=gap; i<N; i++) {
            x = a[i];
            j = i-gap;
            while ((x<a[j]) && (j>=0)) {
                a[j+gap] = a[j];
                j = j - gap;

            }
            a[j+gap] = x;
            //xuatmang(a, N);
        }
    }
}

// shell sort ket hop insertion sort voi khoang gap tu chon
// a la mang can sap xep
// N la so luong phan tu trong mang a
// h la mang luu cac gia tri khoang cach gap/interval
// k la so luong phan tu cua mang h
void shellSort3(int a[], int N, int h[], int k) {
    int x,j, gap;
    for (int step=0; step<k; step++) {
        gap = h[step];
        for (int i=gap; i<N; i++) {
            x=a[i];
            j=i-gap;
            while ((x<a[j]) && (j>=0)) {
                a[j+gap] = a[j];
                j=j-gap;
            }
            a[j+gap] = x;
            //xuatmang(a, N);
        }
    }
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
