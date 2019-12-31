#include<iostream>

using namespace std;


double taylor(double x,double n){

static double p=1,f=1;
double r=0;
if(n==0){
	return 1;
}
else{

	r=taylor(x,n-1);
	p=p*x;
	f=f*n;
	return r+p/f;
}

}


int main(){

	double num=15,x=4;
	cin>>x>>num;
	printf("%lf ",taylor(x,num));

}