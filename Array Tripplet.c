#include <stdio.h>
int main()
{
  int a[10],i,n,j,k; 
  printf("size of array:");
  scanf("%d",&n);
  printf("enter array elements:");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]); 
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++) 
     {
         for(k=0;k<n;k++)
         if((a[i]+a[j])==a[k])
            printf("tripplet value is:%d",a[k]);
      } 
  }
  return 0;
}

