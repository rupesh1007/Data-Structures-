#include <stdio.h>

int main()
{

	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int n,i,f,x=0,s,p;
	   scanf("%d",&n);
	   scanf("%d",&f);
	   int a[f];
	   for(i=0;i<f;i++)
	   {
	       scanf("%d",&a[i]);
	       x=x+a[i];
	   }
	   s=n*(n+1)/2;
	   s=s-x;
	   scanf("%d",&p);
	   if(n%2==0)
            n=n/2;
       else
            n=(n+1)/2;
        double res=(double)s*(n-p)/n;
        printf("%.4lf\n",res);
	}
            
	return 0;
}
