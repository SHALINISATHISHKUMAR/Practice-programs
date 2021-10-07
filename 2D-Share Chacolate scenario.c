#include <stdio.h>
int main()
{
    int n,j,i;
    printf("enter no.of test cases:");
    scanf("%d",&n);
    int a[n][2];
    for(i=0;i<n;i++) 
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
       int c=1,t1=0;
       while(a[i][0]>=c)
       {
           a[i][0]=a[i][0]-c;
           c=c+2;
           t1++;
       }
       int b=2,t2=0;
       while(a[i][1]>=b)
       {
           a[i][1]=a[i][1]-b;
           b=b+2;
           t2++;
       }
       if(t1>t2)
       printf("Limak\n");
       else
       printf("Bob\n");
    }
    return 0;
}
