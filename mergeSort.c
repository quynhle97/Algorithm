// ham "merge" : hop nhat cac mang con va luu vao lai mang chinh
// ham "mergeSort" : phan chia mang thanh cac mang con, 'sap xep' (la so sanh roi chon ra phan tu thich hop) va hop nhat cac mang con do vao mang chinh

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        // Bien m: bien luu vi tri chinh giua cua mang, de phan chia mang thanh 2 phan
        int m = (l + r)/2;
        // xu ly tren tung mang con do
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);

        // hop nhat nhung mang con do lai
        merge(a, l, r, m);
    }
}

void merge(int a[], int l, int r, int m) {
   // Bien "lup" : so phan ben mang con ben trai
   int lup = m - l + 1;
   // Bien "rup" : so phan ben mang con ben phai
   int rup = r - m;

   int left[lup], right[rup];

   for (int i=0; i<lup; i++)
       left[i] = a[l+i];

   for (int i=0; i<rup; i++)
       right[i] = a[m+1+i];

   int k=l; // Bien k: bien vi tri de luu gia tri trong mang a, k = left chu k khong phai = 0;
   int i=0, j=0;
   // Luu vao mang chinh
   // khi 2 ben mang con con gia tri thi tiep tuc so sanh va luu gia tri vao mang a
   while (i<lup && j<rup) {
       if (left[i] < right[j]) {
           a[k] = left[i];
           i++;
       } else {
           a[k] = right[j];
           j++;
       }
       k++;
   }

   // doc gia tri con lai cua mang con ma con phan tu
   
   while (i<lup) {
       a[k] = left[i];
       i++;
       k++;
   }

   while (j<rup) {
       a[k] = right[j];
       j++;
       k++;
   }
}