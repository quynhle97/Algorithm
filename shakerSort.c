void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

// Bien k la mot bien rat thu vi
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
                xuatmang(a, N);
                printf("%d\n\n",k);
            }

        }
        left = k;
        for (int j=left; j<right; j++) {
            if (a[j]>a[j+1]) {
                swap(&a[j], &a[j+1]);
                k = j;
                xuatmang(a, N);
                printf("%d\n\n",k);
            }

        }
        right = k;
    }
}

// Khac bubbleSort o cho la bubbleSort khong nhan dien day da co thu tu hay co thu tu tung phan
// Con shakerSort thi biet va gioi han lai khoang can sap xep