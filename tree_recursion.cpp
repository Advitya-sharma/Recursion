#include<iostream>

using namespace std;

//function caling itself more than once

void fun(int i){

	if(i>0){
	
	cout<<i<<endl;
	fun(i-1);
	fun(i-1);

	}

}


int main(){

	int x=5;
	fun(x);

}