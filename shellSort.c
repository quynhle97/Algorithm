#include "main.h"

void shellSort1(int a[], int N) {
    int gap, i, j;
    for (gap = N/2; gap>0; gap/=2) {
        for (i=gap; i<N; i++) {
            for (j=i-gap; j>=0 && a[j]>a[j+gap]; j-=gap) {
                swap(&a[j], &a[j+gap]);
                //xuatmang(a, N);
            }
        }
    }
}

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
