#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 20
#define E 0.0001
#define f(x) (x*x-4*x-10)

int main()
{
	float x0,x1,x2;
	int count=0;
	begin:
	printf("enter two guess numbers");
	scanf("%f %f",&x1,&x2);
	if((f(x1)*f(x2))>0)
	{
		printf("the exist no root change the guess value");
		goto begin;
	}
	else{
		top:
		x0=(x1+x2)/2;
		if(fabs(f(x0))<E)
		{
			printf("the root is value %f",x0);
			printf("no of iteration is: %d",count);
		}
		else{
			
		if (f(x0)>0){
			x2=x0;
			count++;
			
		}
		else if(f(x0)<0){
			x1=x0;
			count++;
			
		
		}
		if(count<MAX){
			goto top;
		}
		else{
			printf("the root doesnt converge");
		}
	}
}
	return 0;
}
