//making tic tac toe
#include<iostream>
#include<conio.h>
using namespace std;
char mat[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
void draw(){
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void input(){
	int a;
	cout<<"enter the number";
	cin>>a;
	if(a==1)
	 mat[0][0]=player;
	else if(a==2)
	mat[0][1]=player;
	else if(a==3)
	mat[0][2]=player;
	else if(a==4)
	mat[1][0]=player;
	else if(a==5)
	mat[1][1]=player;
	else if(a==6)
	mat[1][2]=player;
	else if(a==7)
	mat[2][0]=player;
	else if(a==8)
	mat[2][1]=player;
	else if(a==9)
	mat[2][2]=player;
}
void toggleplayer(){
	if(player=='X'){
		player='0';
	}
	else{
		player='X';
	}
}
char check(){
	if (mat[0][0]=='X'&& mat[0][1]='X'&& mat[0][2]='X'){
		return 'X';
	}
	if (mat1][0]=='X'&& mat[1][1]='X'&& mat[1][2]='X'){
		return 'X';
	}
	if (mat[2][0]=='X'&& mat[2][1]='X'&& mat[2][2]='X'){
		return 'X';
	}
	if (mat[0][0]=='X'&& mat[1][0]='X'&& mat[2][0]='X'){
		return 'X';
	}
	if (mat[0][1]=='X'&& mat[1][1]='X'&& mat[2][1]='X'){
		return 'X';
	}
	if (mat[0][2]=='X'&& mat[1][2]='X'&& mat[2][2]='X'){
		return 'X';
	}
	if (mat[0][0]=='X'&& mat[1][1]='X'&& mat[2][2]='X'){
		return 'X';
	}
	if (mat[2][0]=='X'&& mat[1][1]='X'&& mat[0][2]='X'){
		return 'X';
	}
	//for player 2
	if (mat[0][0]=='0'&& mat[0][1]='0'&& mat[0][2]='0'){
		return '0';
	}
	if (mat1][0]=='0'&& mat[1][1]='0'&& mat[1][2]='0'){
		return '0';
	}
	if (mat[2][0]=='0'&& mat[2][1]='0'&& mat[2][2]='0'){
		return '0';
	}
	if (mat[0][0]=='0'&& mat[1][0]='0'&& mat[2][0]='0'){
		return '0';
	}
	if (mat[0][1]=='0'&& mat[1][1]='0'&& mat[2][1]='0'){
		return '0';
	}
	if (mat[0][2]=='0'&& mat[1][2]='0'&& mat[2][2]='0'){
		return '0';
	}
	if (mat[0][0]=='0'&& mat[1][1]='0'&& mat[2][2]='0'){
		return '0';
	}
	if (mat[2][0]=='0'&& mat[1][1]='0'&& mat[0][2]='0'){
		return '0';
	
}
int main(){
	draw();
	while(1){
		input();
		draw();
		toggleplayer();
		
	}
	return 0;
}
