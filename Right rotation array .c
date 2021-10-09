#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter no.of element:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        int last;
        last=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=last;
    }
    printf("after rotation:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}

