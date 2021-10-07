#include <stdio.h>
int main()
{
    int n;
    printf("enter no.of test case:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    int x,y=0;
    printf("enter value x:");
    scanf("%d",&x);
    if(x%10==0)
    printf("0\n");
    else if(x>10)
    { 
    while(x>=10)
    {
        if(x%10==0)
        break;
        else
        { 
            x=x*2;
            y++;
        }
    }
    printf("%d\n",y);
    }
    else
    printf("-1\n");
    
}
    return 0;
}

