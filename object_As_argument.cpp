//passing object as function argument
#include<iostream>
using namespace std;
class time{
	int h,m;
	public:
		void gettime(int x,int y);
		void disptime();
		void sum(time,time);
};
void time::gettime(int x,int y){
			h=x;
			m=y;
			}
void time::disptime(){
	
			cout<<"\n\thours="<<h;
			cout<<"\tmin="<<m;
		    }
void time::sum(time t1,time t2){
	m=t1.m+t2.m;
	h=m/60;
	m=m%60;
	h=h+t1.h+t2.h;
}
int main(){
	time t1,t2,t3;
	t1.gettime(3,50);
	t2.gettime(4,20);
	t3.sum(t1,t2);
	t1.disptime();
	t2.disptime();
	t3.disptime();
	return 0;
}

		
