#include<iostream>

using namespace std;

//commands are left to be executed after the recursive call

void fun(int i){

	if(i>0){
	
	fun(i-1);
	cout<<i<<endl;

	}

}


int main(){

	int x=10;
	fun(x);

}