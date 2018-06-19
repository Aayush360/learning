#include<stdio.h>
#include<math.h>
#define E 0.00001
#define max 20
#define f(x) (x*x*x+x*x-3*x-3)
int main()
{
	float x3,x1,x2;
	int count=0;
	printf("enter two numbers as a guess value");
	scanf("%f%f",&x1,&x2);
	begin:
	x3=x2-((f(x2)*(x2-x1))/(f(x2)-f(x1));
while((fabs((x3-x2))/x3)<e||(x3-x2))/x3)=e)
{
	if(f(x3)==0)
	{
		printf("no of itertion is:%d\t\n",count);
		count++;
	printf("the root is:%f"x3);
	}
	else
	{
		x1=x2;
		f(x1)=f(x2);
		x2=x3;
		f(x2)=f(x3);
		goto begin:
		
	}
	
	
}

	
	
	return 0;
	
}

