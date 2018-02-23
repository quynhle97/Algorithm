#include <stdio.h>

int linearSearch (int a[], int N, int x);

int main() {
    int a[] = {23,45,71,1010,21,1,2,103,57};
    int N = sizeof (a)/sizeof (a[0]);
    int x = 21, pos;

    if ((pos = linearSearch(a, N, x)) != -1)
        printf("Co %d trong mang o vi tri %d\n", x, pos);
    else printf("Khong tim thay\n");

    return 0;
}

int linearSearch (int a[], int N, int x) {
    int i=0;
    while (a[i] != x && i<N) i++;
    if (i==N) return -1;
    else return i;
}
