#include <stdio.h>
int main()
{
    int n1,n2,a,j,arr[50],c,n=0;
    printf("enter number range:");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++)
    {
        a=i,j=0;
        while(a>0)
        {
            arr[j++]=a%10;
            a=a/10;
        }
        c=0;
        for(int t=0;t<j;t++)
        {
            for(int k=t+1;k<j;k++)
            {
                if(arr[t]==arr[k])
                    c++;
            }
        }
        if(c==0)
        n=n+1;
    }
        printf("%d",n);
}
