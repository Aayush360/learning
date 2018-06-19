#include<stdio.h>
int main()
{
	int i,j=2,n;
	int flag=0;
	
		
	
	printf("enter the num to check:");
	scanf("%d",&n);
//top:
//	for(n=100;n<=500;n++)
//	{
//		here:
//		while(j<=(n/2))
//		{
//			if((n%j)==0){
//				
//				flag=1;
//			}
//			if(flag==1)
//			{
//				
//				goto top;
//			}
//			else{
//				j++;
//				goto here;
//			}
//			
//		printf("%d\n",n);	
//		}
//		
//		
//	}
//	
//}
here:
while(n<=500)
{
	for(j=2;j<=(n-1);j++)

{top:
	if((n%j)==0){
		flag=1;
	}


	if(flag==1){
		
		n++;
		goto here;
		
	
	}
	else{
		j++;
		goto top;
	
		
	}
	
}


}
printf(" %d ",n);

}

