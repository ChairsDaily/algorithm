/* mbinary
#########################################################################
# File : quickSort.c
# Author: mbinary
# Mail: zhuheqin1@gmail.com
# Blog: https://mbinary.xyz
# Github: https://github.com/mbinary
# Created Time: 2019-04-16  09:41
# Description:
#########################################################################
*/
int partition(int *arr, int i, int j)
{
    int pivot = arr[j], p = i, q = j;

    while (p < q) {
        while (p < q && arr[p] <= pivot)++p;

        if (p < q)arr[q--] = arr[p];

        while (p < q && arr[q] > pivot)--q;

        if (p < q)arr[p++] = arr[q];
    }

    arr[p] = pivot;
    return p;
}
void quickSort(int *arr, int i, int j)
{
    if (i < j) {
        int p = partition(arr, i, j);
        quickSort(arr, i, p - 1);
        quickSort(arr, p + 1, j);
    }
}
