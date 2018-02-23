#include <stdio.h>

void swap(int *a, int *b);
void xuatmang(int a[], int N);
void shakerSort (int a[], int N);

int main() {
    int a[] = {90,323,34,1,23,123,234,11,0,10};
    int N = sizeof (a)/sizeof (a[0]);

    shakerSort(a,N);
    xuatmang(a, N);
    return 0;
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

// k dong vai tro la bien tam, luu giu gia tri cua lan swap cuoi cung sau vong for, roi thay gia tri left, right cho cac lan tiep theo
// Bien left va right la 2 cot moc de danh dau vi tri tiep theo de sap xep [left..right]

void shakerSort (int a[], int N) {
    int left = 0, right = N-1;
    int k = N-1;
    while (left<right) {
        for (int j=right; j>left; j--) {
            if (a[j]<a[j-1]) {
                swap(&a[j], &a[j-1]);
                k = j;
                //xuatmang(a, N);
                printf("%d\n\n",k);
            }

        }
        left = k;
        for (int j=left; j<right; j++) {
            if (a[j]>a[j+1]) {
                swap(&a[j], &a[j+1]);
                k = j;
                //xuatmang(a, N);
                printf("%d\n\n",k);
            }

        }
        right = k;
    }
}

// Khac bubbleSort o cho la bubbleSort khong nhan dien day da co thu tu hay co thu tu tung phan
// Con shakerSort thi biet va gioi han lai khoang can sap xep

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
