#include<iostream>
int main()
{
	int a[6]={3,5,4,7,6,8},i,j,k,small;
	for(i=0;i<6;i++)
	{
		for(j=0;j<(6-i);j++)
		{
			small=a[0];
			if(a[j]>a[j+1])
			{
				
				small=a[j+1];
				a[j+1]=a[j];
				a[j]=small;
			}
		}
		
	}
	std::cout<<"the number in ascending order is:"<<"\n";
	for(j=0;j<6;j++)
	{
		std::cout<<a[j]<<"\t";
	}
	
}
