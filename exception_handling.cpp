//program to show exception handling
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two numbers as input"<<endl;
	cin>>a>>b;
	int x=(a-b);
	try{
		if(x!=0){
			cout<<"result::"<<a/x;
		}
		else{
			throw(x);
		}
	}
	catch(int i){
		cout<<"division by zero";
	}
	cout<<"\n next statement executes";
	return 0;
}
