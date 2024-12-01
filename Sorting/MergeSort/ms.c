void _merge(int *arr, int start, int mid, int end)
{
        int llen = mid - start + 1;
        int rlen = end - mid;
        int ltemp[llen]; 
        int rtemp[rlen];
        for (int i = 0; i < llen; i++)
                ltemp[i] = arr[start + i];
        for (int j = 0; j < rlen; j++) 
                rtemp[j] = arr[mid+j+1];
        int li = 0; 
        int ri = 0; 
        int oi = start; 
        while ((li < llen) && (ri < rlen)) {
                if (ltemp[li] <= rtemp[ri]) {
                        arr[oi] = ltemp[li];
                        li++;
                } else {
                        arr[oi] = rtemp[ri];
                        ri++;
                }
                oi++;
        }
        while (li < llen) {
                arr[oi] = ltemp[li];
                li++;
                oi++;
        }
        while (ri < rlen) {
                arr[oi] = rtemp[ri];
                ri++;
                oi++;
        }
}

void mergeSort(int *arr, int start, int end)
{
        if (start >= end)
               return;
        int mid = (start + end) / 2 ;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        _merge(arr,start,mid,end);
}
