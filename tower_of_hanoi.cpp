#include<iostream>

using namespace std;

void TOH(int num,char a,char b, char c){
	if(num>0){
		TOH(num-1,a,c,b);
		cout<<"from "<<a<<" to "<<c<<endl;
		TOH(num-1,b,a,c);
	}
}


int main(){

	int num=3;
	char a='A',b='B',c='C';

	TOH(num,a,b,c);

}