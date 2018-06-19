#include<stdio.h>
#include<math.h>
#define e 0.001
#define max 20
#define f(x) (x*x*x+x*x-3*x-3)
int main()
{
	float x3,x1,x2,f1,f2;
	int count=0;
	printf("enter two numbers as a guess value");
	scanf("%f%f",&x1,&x2);
	begin:
		f1=f(x1);
	f2=f(x2);
	x3=x2-((f2*(x2-x1))/(f2-f1));
	
if(fabs((x3-x2)/x3)<=e)
{
	
	
		printf("no of itertion is:%d\t\n",count);
		
	printf("the root is:%f",x3);
	}
	else
	{
		
		x1=x2;
	
		x2=x3;

		count++;
		
		
		
		goto begin;
		
	}
	
	


	
	
	return 0;
	
}

