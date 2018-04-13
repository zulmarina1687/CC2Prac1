#include <iostream>
using namespace std;

int tam(char *A){
  int i=0;
  while(*(A+i)!='\0'){i++;}
  return i;
}
void intercambioA(char cad[], int t){
  char temp;
  for(int i=0;i<t/2;i++){
    temp=cad[i];
    cad[i]=cad[t-i-1];
    cad[t-i-1]=temp;
  }
}

void intercambioP(char *cad){
  char *temp=cad,inter;
  while(*temp)
    temp++;
  temp--;
  while(temp>cad){
    inter=*cad;
    *cad=*temp;
    *temp=inter;
    temp--;
    cad++;
  }
}

int main(){
  char s[100] ={"Ciencias de la Computacion"};
  int a=tam(s);
  cout<<"Arrays"<<endl;
  intercambioA(s,a);
  cout<<s<<endl;

  char s1[100] ={"Desarrollo Basado en Plataformas"};
  a=tam(s1);
	cout<<"Punteros"<<endl;
  intercambioP(&s1[0]);
  cout<<s1<<endl;
	return 0;
}