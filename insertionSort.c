#include <stdio.h>

void insertionSort(int a[], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] >= a[i]) {
                int tmp = a[i];
                int n = 0;
                while (n < (i-j+1)) {
                    a[i-n] = a[i-n-1];
                    n++;
                }
                a[j] = tmp;
                break;
            }
        }
    }
}
