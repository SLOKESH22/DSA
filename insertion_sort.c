#include<stdio.h>
#include<time.h>
void insertion_sort(int arr[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;  
        }
        arr[j+1]=key;
    }
}
int main()
{
    int size,i;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array");
    for(i=0;i<size;i++)
    {
        printf("element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("before sort");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    clock_t start,end;
    start=clock();
    insertion_sort(arr,size);
    end=clock();
    printf("sorted array is");5
    
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    double timetaken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("timetaken is %f seconds : ", timetaken);
    return 0;
}
