#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;


}




void bubbleSort(int arr[], int number)
{
    int i,j,temp=0;
    for (i=0;i<number-1;++i){
        for (j=0;j<number-1-i;++j){
            if(arr[j]>arr[j+1]){
               swap(&arr[j],&arr[j+1]);
            }
        }
    }


}

int main()
{
    int i;
    int a[10] = {3, 1, 11, 5, 8, 2, 0, 9, 13, 81};
    printf("=========input arrary============\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    bubbleSort(a, 10);

    printf("==========sort array============\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
