void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void quickSort(int a[], int left, int right) {
    int mid = a[(left+right)/2];
    int i=left, j=right;
    do {
    while (a[i]<mid) i++;
    while (a[j]>mid) j--;
    if (i<=j) {
        swap(&a[i], &a[j]);
        i++;
        j--;
    }
    } while (i<j);
    if (left<j) quickSort(a,left,j);
    if (i<right) quickSort(a,i, right);
}