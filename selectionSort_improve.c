#include <stdio.h>

void swap(int *a, int *b);
void xuatmang(int a[], int N);
void selectionSort(int a[], int N);

int main() {
    int a[] = {23,45,71,1010,21,21,1,2,103,57};
    int N = sizeof (a)/sizeof (a[0]);
    selectionSort(a, N);

    xuatmang(a,N);
    return 0;
}


void selectionSort(int a[], int N) {
    int posmin, posmax;
    for (int i=0; i<N/2; i++) {
        posmin = i;
        posmax = i;
        for (int j=i; j<N-i; j++) {
            if (a[j] < a[posmin]) posmin = j;
            if (a[j] > a[posmax]) posmax = j;
        }
        swap(&a[posmin], &a[i]);
        //xuatmang(a, N);
        swap(&a[posmax], &a[N-1-i]);
        //xuatmang(a, N);
    }
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
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
