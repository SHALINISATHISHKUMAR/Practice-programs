#include <stdio.h>
int main()
{
    int n1,n2,i,j;
    printf("enter no from:");
    scanf("%d",&n1);
    printf("enter no to:");
    scanf("%d",&n2); 
    for(j=n1;j<=n2;j++)
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
    printf("%d\n",j);
    }
    return 0;
}
