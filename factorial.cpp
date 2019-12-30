#include<iostream>

using namespace std;


int factoril(int i){

if(i==1){
	return 1;
}
else{
	return factoril(i-1)*i;
}

}


int main(){

	int x;
	cin>>x;
	cout<<factoril(x);

}