/*
name = Sahil Sanghvi
Roll No. = 51
SE-IT sem 3
2023-24
*/

#include<stdio.h>
void main()
{
    /*dynamic input of array*/
    int n;
    printf("enter the number of elements you want in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*printing unique elements*/
    int temp;
    printf("unique elements are:");
    for(int i=0; i<n; i++)
    {
        temp =0;
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                temp++;
            }
        }
        if(temp==1)
        {
            printf("%d\t", arr[i]);
        }
    }
}
