//program to find number of unique and repeated numbers in an array.

#include<stdio.h>
void main()
{
    int i, j , uni=0, rep=0, svalue=1 , size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<=size-1;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&arr[i]);
    }

    for(i=0;i<=size-1;i++)
    {
        for(j=i+1;j<=size-1;j++)
        {
            if(arr[i]==arr[j] && j!=i+1)
            {
                arr[i+svalue]=arr[j]+arr[i+svalue];
                arr[j]= arr[i+svalue] -arr[j];
                arr[i+svalue]= arr[i+svalue] -arr[j];
                svalue++;
            }
        }
        svalue=1;
    }
    for(i=0;i<=size-1;i++)
        printf("%d  ",arr[i]);

    for(i=0;i<=size-1;i++)
    {
        if(arr[i]==arr[i-1])
            continue;
        if(arr[i]==arr[i+1])
        {
            rep++;
        } else uni++;

    }
    printf("\nTotal Unique number are : %d\n",uni);
    printf("Total Repeating number are : %d",rep);
}
