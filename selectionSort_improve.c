#include "main.h"

void selectionSort_improve(int a[], int N) {
    int posmin, posmax;
    for (int i=0; i<N/2; i++) {
        posmin = i;
        posmax = i;
        for (int j=i; j<N-i; j++) {
            if (a[j] < a[posmin]) posmin = j;
            if (a[j] > a[posmax]) posmax = j;
        }
        swap(&a[posmin], &a[i]);
        swap(&a[posmax], &a[N-1-i]);
    }
}
