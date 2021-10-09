#include <stdio.h>
void main ()
{
        int i,j,a[100],n,t,k;
        printf("N:"); 
        scanf("%d",&n);
        printf("K:");
        scanf("%d",&k);
        printf("enter elements:");
        for(i=0;i<n;++i)
	        scanf("%d",&a[i]);
        for(i=0;i<n;++i) 
        {
            for(j=i+1;j<n;++j)
            {
                if (a[i]<a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                 }
            }
        }
        printf("Kth smallest:%d",a[k-1]);
}
