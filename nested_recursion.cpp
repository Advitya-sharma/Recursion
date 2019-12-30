#include<iostream>

using namespace std;

//function is passes as a paremeter to other functionsS
int fun(int i){

	if(i>0){
	
	cout<<i<<endl;
	return fun(fun(i-1));

	}
return 0;
}


int main(){

	int x=10;
	fun(x);

}