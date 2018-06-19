#include<iostream>
using namespace std;
class A{
	private: int feet,inch;
    public:
    	A(){
    		cout<<"default constructor";
		}
	A(int a,int b){
		feet=a;
		inch=b;
		cout<<"feet and inch is:"<<feet<<endl<<inch;
	}
	A(int f){
		feet=0;
		cout<<"parameterized constructor called"<<endl;
		
	}
	void display(){
		cout<<" feet to inch is::"<<feet*12;
	}
};
int main(){
	A a();
	A a1(10,20);
	//A a2(3);
	a1.display();
	//a2.display();
	return 0;
	
}
