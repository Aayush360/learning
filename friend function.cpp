#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		int get(int x)
		{
		 a=x;
		}
		void disp(void)
		{
			cout<<"the first number is:"<<a<<endl;
		}
		friend void add(A ob1,B ob2);
};
class B{
	int b;
	public:
		int get(int y)
		{
			b=y;
		}
		void disp(){
			cout<<"the second number is:::"<<b<<endl;
		}
		friend void add(A ob1,B ob2);
};
void add(A ob1, B ob2) //friend function definition
{
	cout<<"the sum of two number is::"<<ob1.a+ob2.b<<endl;
}
int main(){
	A a;
	B b;
	
	a.get(100);
	b.get(200);
	a.disp();
	b.disp();
	add(a,b);
	
	return 0;
}
