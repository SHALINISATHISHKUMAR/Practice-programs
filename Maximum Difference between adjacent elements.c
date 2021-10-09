#include <stdio.h>
int main()
{
   int a[10],i,n,max=0,Diff;
   printf("Size the list:");
   scanf("%d",&n);
   printf("Enter elements in the list:\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   { 
    Diff=a[i]-a[i+1];
    if(Diff>max)
     max=Diff;
   }
   printf("Maximum difference b/w two elements:%d ",max);

    return 0;
}

