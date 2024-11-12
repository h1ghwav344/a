void selectionSort(int *a, int as)
{
        if (as == 1)
                return;
        
        int buffer;
        int j;
        int min;
        int mini;

        for (int i = 0; i < (as - 1); i++) {
                buffer = a[i]; 
                j = i + 1;
                min = a[j];
                mini = j;
                while (j < as) {
                        if (a[j] < min) {
                                min = a[j];
                                mini = j;
                        }
                        j++;
                }
                a[i] = min;
                a[mini] = buffer;
        }
}


void main()
{
        int a[] = {5,2,1,9,1,8};
        int as = sizeof(a) / sizeof(int);

        selectionSort(a,as);
}
