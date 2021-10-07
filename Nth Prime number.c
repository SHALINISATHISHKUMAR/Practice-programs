#include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("enter no:");
    scanf("%d",&n);
    int count=1; 
    for(j=2;j>count&&count<=n;j++)
    {
        int a=0;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                a++;
                break;
            }
        }
        if(a==0)
        {
        m=j;
        count++;
        }
    }
    printf("%d",m);
    return 0;
}
