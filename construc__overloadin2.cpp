//program to show constructor overloading
#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test();
		test(int x);
		test(int x, int y);
		void display();
};
test::test(){
	a=0;
	b=0;
}
test::test(int x){
	a=x;
	b=x;
}
test::test(int x,int y){
	a=x;
	b=y;
}
void test::display(){
	cout<<"\nvalue of a="<<a;
	cout<<"\nvalue of b="<<b;
}
int main(){
	test t1;
	test t2(100);
	test t3(100,200);
	t1.display();
	t2.display();
	t3.display();
	return 0;
}
