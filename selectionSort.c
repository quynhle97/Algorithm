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

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}