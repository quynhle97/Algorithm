#include "main.h"

void selectionSort(int a[], int N) {
    int posmin;
    for (int i=0; i<N; i++) {
        posmin = i;
        for (int j=i; j<N; j++) {
            if (a[j] > a[posmin]) posmin = j;
        }
        swap(&a[posmin], &a[i]);
    }
}
