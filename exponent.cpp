#include<iostream>

using namespace std;


int exp(int n,int p){

if(p==1){
	return n;
}
else{
	return exp(n,p-1)*n;
}

}


int main(){

	int num,pow;
	cin>>num>>pow;
	cout<<exp(num,pow);

}