//program to generate prime numbers between any two given numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,flag=0,i,j;
	cout<<"enter two numbers range";
	cin>>a>>b;
	for(i=a;i<b;i++)//numbers that needs to get checked
	{
		for(j=2;j<a;j++)//works as a divisor
		{
			if((i%j)!=0)
			{
				flag=1;//keeps track to numbers that is prime
				
			}else{
				flag=0;
				break;//if the numbers is not prime it breaks the loop
			}
	
		}
		if(flag==1){
		cout<<i<<endl;//if the value of flag is 1 for all the numbers it has checked,, shows prime
	}
	}
	return 0;
	
	
	
}
