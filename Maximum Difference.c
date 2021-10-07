#include <stdio.h>
int main()
{
   int a[10],i,j,n,max=0,Diff;
   printf("No of days:");
   scanf("%d",&n);
   printf("Enter elements :\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<(n-1);i++)
   {
       for(j=i+1;j<n;j++)
        { 
          Diff=a[j]-a[i];
          if(Diff>max)
           max=Diff;
        }
   }
   printf("maximum profit is %d ",max);

    return 0;
}
