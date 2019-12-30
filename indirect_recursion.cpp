#include<iostream>

using namespace std;

//function calls other function 

void funB(int i);
void funA(int i){

	if(i>0){
	
	cout<<i<<endl;
	funB(i-1);

	}

}

void funB(int i){

	if(i>0){
		cout<<i<<endl;
		funA(i-2);
	}	

}


int main(){

	int x=10;
	funA(x);

}