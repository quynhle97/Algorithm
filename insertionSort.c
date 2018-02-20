#include <stdio.h>

void swap(int *x, int *y);
void xuatmang(int a[], int n);

int main()
{
    int a[] = {3, 1, 9, 7, 2, 109, 7, 2, 10, 4};
    int len = sizeof(a)/sizeof(int);

    for (int i = 0; i < len; i++) {
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
    xuatmang(a, len);
    return 0;
}

void swap(int *x, int *y) {
    int c;
    c = *x;
    *x = *y;
    *y = c;
}

void xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
