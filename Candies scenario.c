#include <stdio.h>

int main()
{
    int n,i;
    printf("no.of available candies N:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    int k;
    printf("required candies K:");
    scanf("%d",&k);
    if(k==0||k>n)
    {
        printf("invalid input\n");
        printf("no.of candies left:%d\n",n);
    }
    else if(k<=n)
    {
        printf("no.of candies sold:%d\n",k);
        n=n-k;
        printf("no.of candies available:%d\n",n);
    }
    }
    return 0;
}
