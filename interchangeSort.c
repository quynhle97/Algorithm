#include "main.h" 

void interchangeSort(int a[], int N) {
    for (int i=0; i<N-1; i++)
        for (int j=i+1; j<N; j++)
            if (a[i]>a[j]) swap(&a[i], &a[j]);
}
