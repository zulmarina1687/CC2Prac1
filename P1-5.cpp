#include <iostream>
using namespace std;

int tam(char A[]){
  int i=0;
  while(A[i]!='\0'){i++;}
  return i;
}

int tamp(char *A){
  int i=0;
  while(*(A+i)!='\0'){i++;}
  return i;
}

/*int tamp(char *A){
  int i=0;
  char *p1=&A[0], *p2;
  do{
    if(A[i]=='\0') p2=&A[i]; 
  }while(A[i++]!='\0');
  return p2-p1;
}*/

int main(){
  char cadena[100] ={"Ciencias de la Computacion II 2018"};
  cout<<cadena<<endl;
	cout<<tam(cadena)<<endl;
	cout<<tamp(cadena)<<endl;
	return 0;
}