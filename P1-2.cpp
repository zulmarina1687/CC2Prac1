#include <iostream>
using namespace std;

int suma_rec(int A[], int t){
	if (t==0){return 0;}
	return A[t-1] + suma_rec(A,--t);
}

int suma_iter(int A[], int t){
	int suma=0, i=0;
	while(i<t){
		suma+=A[i];
		i++;
	}
	return suma;
}

int main(){
	int A[8]={1,2,3,4,5,6,7,8};
	cout<<"Sumatoria recursiva ="<<suma_rec(A,8)<<endl;
	cout<<"Sumatoria iterativa ="<<suma_iter(A,8)<<endl;
	return 0;
}