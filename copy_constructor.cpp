//program showing copy constructor
#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		test(int x,int y);
		test(const test &t);
		void disp();
};
test::test(int x,int y){
	a=x;
	b=y;
}
test::test(const test &t){
	a=t.a;
	b=t.b;
}
void test::disp(){
	cout<<"\nvalue of a is::"<<a;
	cout<<"\nvalue of b is::"<<b;
}
int main(){
	test t1(100,200);
	test t2(t1);
	test t3=t2;
	cout<<"\n t1 object\\n";
	t1.disp();
	cout<<"\n t2 object";
	t2.disp();
	cout<<"\n t3 object\n";
	t3.disp();
	return 0;
}
