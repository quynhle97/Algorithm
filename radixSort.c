void radixSort(int a[], int N) {
    int max=a[0]; // Bien giu gia tri lon nhat cua mang
    int i; // Bien chay trong moi vong lap for
    int exp = 1;// Bien co so, dung de cat toi chu so hang can lay. Vi du hang don vi thi giu nguyen nen exp = 1
                // Hang chuc thi cat bo hang don vi nen exp = 10. Lay gia tri can cat /exp%10 se lay duoc chu so can lay
    int b[N];   // Mang tam, luu gia tri cua mang moi

    // Tim gia tri lon nhat cua mang can sap xep

    for (i=1; i<N; i++)
        if (a[i]>max)
            max = a[i];

    while (max/exp>0) {
        int bucket[10] = {0};

        // for (1) : xac dinh so con so co trong moi bucket
        for (i=0; i<N; i++)
            bucket[(a[i]/exp)%10]++;

        // for (2) : xac dinh vi tri cuoi cung cua so trong bucket do
        // vi du: bucket[0] = 1 chua so 10; bucket[1] = 3 chua so 11, 121;... thi vi tri cua so 121 la 3, va 11 la 2;
        for (i=1; i<10; i++)
            bucket[i]+=bucket[i-1];

        // tao mang moi sau moi lan sap xep
        for (i=N-1; i>=0; i--)
            b[--bucket[(a[i]/exp)%10]] = a[i];

        // luu lai vao mang ban dau
        for (i=0; i<N; i++)
            a[i] = b[i];

        exp*=10;
    }

}