#include <stdio.h>

void swap(int *a, int *b);
void xuatmang(int a[], int N);
void bubbleSort(int a[], int N);

int main() {
    int a[] = {23,45,71,1010,21,21,1,2,103,57};
    int N = sizeof (a)/sizeof (a[0]);
    bubbleSort(a, N);

    xuatmang(a,N);
    return 0;
}


void bubbleSort(int a[], int N) {
    for (int i=0; i<N-1; i++) {
        for (int j=0; j<N-i-1; j++) {
            if (a[j]>a[j+1]) swap(&a[j], &a[j+1]);
        }
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
