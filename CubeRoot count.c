#include <stdio.h>
#include <math.h>
int main()
{
    int n,cr,c=0;
    printf("enter no:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        cr=round(pow(arr[i], 1.0/3.0));
        if(cr*cr*cr == arr[i])
        c++;
    }
    printf("%d",c);
    return 0;
}
