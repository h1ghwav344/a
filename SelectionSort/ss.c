void selectionSort(int *a)
{
        int arrlen = sizeof(a) / sizeof(a[0]);
        if (arrlen <= 1)
                return;

        int buffer;
        int j;
        int min;
        int minIndex;

        for (int i = 0; i < (arrlen - 1); i++) {
                buffer = a[i]; 
                j = i + 1;
                min = a[j];
                minIndex = j;
                while (j < arrlen) {
                        if (a[j] < min) {
                                min = a[j];
                                minIndex = j;
                        }
                        j++;
                }
                a[i] = min;
                a[minIndex] = buffer;
        }
}
