#include<iostream>

using namespace std;

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