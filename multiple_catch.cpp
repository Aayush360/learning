//multiple catch statements
#include<iostream>
using namespace std;
void fun(int x){
	try{
	
	if(x>0){
		throw x;
	}
	else{
		throw 'X';
	}
	}
	catch(int no){
		cout<<"caught an integer::"<<no;
	}
	catch (char ch){
		cout<<"caught a character::"<<ch;
	}
}
int main(){
	cout<<"\n multiple catch statement\n";
	fun(10);
	fun(-3);
	return 0;
}

