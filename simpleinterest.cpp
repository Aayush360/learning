#include<iostream>
int main()
{
	int p,t,r;
	float in;
	std::cout<<"enter the principal, rate and time";
	std::cin>>p>>t>>r;
	in=(p*t*r)/100;
	std::cout<<"the interest for given data is:"<<"\t"<<in;
	return 0;
}
