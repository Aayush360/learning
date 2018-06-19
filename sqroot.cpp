#include<iostream>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,first,second,third,pos,neg;
	begin:
	std::cout<<"enter the value of coeff a,b and c";
	std::cin>>a>>b>>c;
	if(a==0)
	{
		std::cout<<"the root doesn't exist";
	}
	
	else
	{
		first=sqrt((b*b)-4*a*c);
		if (first<0)
		{
			std::cout<<"the root is imaginary number\t";
			goto begin;
		}
		else{
			root1=((-b+first)/(2*a));
		root2=((-b-first)/(2*a));

		}
				
		
	}
	
	std::cout<<"first root is"<<"\t"<<root1;
	std::cout<<"\n";
	std::cout<<"second root is"<<"\t"<<root2;
	
}
