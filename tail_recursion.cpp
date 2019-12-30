#include<iostream>

using namespace std;

// no command are left to be executed after the recursive call

void fun(int i){

	if(i>0){
	
	cout<<i<<endl;
	fun(i-1);

	}

}


int main(){

	int x=10;
	fun(x);

}