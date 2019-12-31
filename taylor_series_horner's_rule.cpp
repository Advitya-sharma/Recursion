#include<iostream>

using namespace std;


double taylor(double x,double n){

static double s=1;
if(n==0){
	return s;
}
else{

	s = 1+x/n*s;
	return taylor(x,n-1);
}

}


int main(){

	double num,x;
	cin>>x>>num;
	printf("%lf ",taylor(x,num));

}