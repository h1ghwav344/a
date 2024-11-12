void insertionSort(int *a, int as)
{
        int buffer;
        int j;
        if (as == 1)
                return;
        for (int i = 1; i < as; i++) {
                buffer = a[i];
                j = i;
                while ((j > 0) && (buffer < a[j-1])) {
                        j--;
                        a[j+1] = a[j];
                }
                a[j] = buffer;
        }
}

void main() 
{
	int a[] = {8,5,4,9,2,0,7,1,3,6};
	int sa  = sizeof(a) / sizeof(a[0]);
	insertionSort(a,sa);
}
