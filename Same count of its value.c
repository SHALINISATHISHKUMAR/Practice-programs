#include <stdio.h>
int main()
{
   int i,j,l=0,v,t,n,k;
   printf("Size the list:");
   scanf("%d",&n);
   int a[n],arr[50];
   printf("Enter elements in the list:\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       int c=0;
       for(j=0;j<n;j++)
       {
           if(a[i]==a[j])
           {
               c++;
           }
       }
       if(a[i]==c)
       arr[l++]=c;
   }
   for(i=0;i<l;i++)
   {
       for(k=i+1;k<l;k++)
       {
           if(arr[i]==arr[k])
           arr[k]=-1;
       }
   }
   for(i=0;i<l;i++)
   {
     if(arr[i]!=-1)
     printf("%d",arr[i]);
   }
  return 0;
}
