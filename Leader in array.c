#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
    int leader=a[n-1];
    printf("%d ", leader);
    for(i=n-2;i>=0;i--)
    {
        if(leader<a[i])
        {
           printf("%d ",a[i]);
           leader=a[i];
        }
    } 
    return 0;
}
