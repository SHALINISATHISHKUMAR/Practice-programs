#include<stdio.h>
int main()
{
	int n,arr[20][2],a,b,i,j,k,N,x=0,y=0,c;
	printf("no.of test cases:");
	scanf("%d",&N);
	for(k=0;k<N;k++)
	{
	printf("cost: ");
	scanf("%d %d",&a,&b);
	printf("no.of participants:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<2;j++)
	    {
	        scanf("%d",&arr[i][j]);
	    }
	}
	for(i=0;i<n;i++)
	{
	 if(arr[i][0]==1)
	   x++;
	}
	for(i=0;i<n;i++)
	{
	    if(arr[i][1]==1)
	    y++;
	}
    if(a>b)
    { 
        if(x>y)
        {
        c=a*y + b*x; 
        printf("cost:%d\n",c);
        }
        else
        {
         c=a*x + b*y;
         printf("cost:%d\n",c);
        }
    }
    else
    { 
         if(x>y)
         {
             c=a*x + b*y;
             printf("cost:%d\n",c);
             
         }
         else
         {
             c=a*y + b*x;
             printf("cost:%d\n",c);
         }
    }
	}
    return 0;
}
