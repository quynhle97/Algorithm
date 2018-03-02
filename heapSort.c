# include "main.h"

// Ham heap: tao cay nhi phan tu mang da cho
// Node cha luon lon hon 2 not con
void heap(int a[], int N, int tmp) {
	int max = tmp;
	int left = 2*max + 1;
	int right = 2*max + 2;

	// Kiem tra xem nut cha da lon hon 2 nut con hay khong! Neu khong thi thay doi cha voi con
	if (left < N && a[left] > a[max])
		max = left;

	if (right < N && a[right] > a[max])
		max = right;

	// Tien hanh swap sau khi kiem tra xong
	if (max != tmp) {
		swap(&a[max], &a[tmp]);
		// Tiep tuc thay doi du lieu neu cha khong lon hon con
		heap(a, N, max);
	}
}

void heapSort(int a[], int N) {
    // Sap xep mang theo cau truc heap voi N phan tu
    for (int j=N/2-1; j>=0; j--)
		heap(a, N, j);

    //*  Bien i vua la vi tri cua phan tu "cuoi cung" trong mang
    //** Bien i vua la so phan tu con lai de tao heap tiep theo
    int i = N-1;
    while (i>0) {
        // Sau khi heap xong thi swap gia tri lon nhat o vi tri 0 voi gia tri o vi tri cuoi mang, loai gia tri do khoi cay heap
        swap(&a[i], &a[0]); // *
        // Sau khi swap xong, so phan tu o cay heap giam di 1 (N-1, N-2, ..., 0)
        heap(a, i, 0);      // **
        i--;
	}

}
