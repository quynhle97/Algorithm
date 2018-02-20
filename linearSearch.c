void linearSearch (int a[], int N, int x) {
	int i=0;
	while (a[i] != x && i<N) i++;
	if (i==N) return 0;
	else return 1;
}