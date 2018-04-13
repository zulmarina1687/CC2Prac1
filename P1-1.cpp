#include <iostream>
using namespace std;

void swapval(int i, int j){
	int z;
	z=i;
	i=j;
	j=z;
}

void swapref(int &i, int &j){
	int z;
	z=i;
	i=j;
	j=z;
}

int main(){
	int a=2, b=3;
	swapval(a,b);
	cout<<"Valor a="<<a<<" b="<<b<<endl;
	swapref(a,b);
	cout<<"Referencia a="<<a<<" b="<<b<<endl;
	return 0;
}