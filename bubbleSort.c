void bubbleSort1(int a[], int N) {
	for (int i=0; i<N-1; i++) {
		for (int j=0; j<N-i-1; j++) {
			if (a[j]>a[j+1]) swap(&a[j], &a[j+1]);
		}
	}
}

void bubbleSort2(int a[], int N) {
	for (int i=0; i<N; i++) {
		for (int j=N-1; j>i; j--) {
			if (a[j]<a[j-1]) swap(&a[j], &a[j-1]);
		}
	}
}

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}