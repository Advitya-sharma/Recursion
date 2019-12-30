#include<iostream>

using namespace std;


int sum(int i){

if(i==0){
	return 0;
}
else{
	return sum(i-1)+i;
}

}


int main(){

	int x;
	cin>>x;
	cout<<sum(x);

}