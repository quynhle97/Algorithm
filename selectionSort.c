#include "main.h"

void selectionSort(int a[], int N) {
    int pos;
    for (int i=0; i<N; i++) {
        pos = i;
        for (int j=i; j<N; j++) {
            if (a[j] > a[pos]) pos = j;
        }
        swap(&a[pos], &a[i]);
    }
}
