#include<stdio.h>
#include<time.h>
void selection_sort(int arr[],int size)
{
    int i,j,min_index;
    for(i=0;i<size;i++)
    {
        min_index=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
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
    selection_sort(arr,size);
    end=clock();
    printf("sorted array is");
    
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    double timetaken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("timetaken is %f seconds : ",timetaken);
    return 0;
}
