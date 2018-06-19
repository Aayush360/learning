#include<iostream>
int main()
{
	int a[7],b[7],c[7],i,j,sum,carry=0;
std::cout<< "enter a no to add\n";
for(i=0;i<7;i++){
std::cout<<"enter"<<i+1<<"digit of first number";

std::cin>>a[i];
	
}
for(i=0;i<7;i++){ 
std::cout<<"enter"<<i+1<<"digit of second number";
	std::cin>>b[i];
}
for(i=6;i>=0;i--){
	if(i!=0)
	{
	sum=a[i]+b[i]+carry;
	c[i]=sum%10;
	}
	else{
		c[i]=a[i]+b[i]+carry;
	}
	
	carry=sum/10;
}
for(i=0;i<7;i++)
{
 std::cout<<c[i];
}


}
