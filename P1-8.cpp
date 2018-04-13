#include <iostream>
using namespace std;

int tam(char *A){
  int i=0;
  while(*(A+i)!='\0'){i++;}
  return i;
}
void intercambioA(char A[], int t){
  char temp;
  for(int i=0;i<t/2;i++){
    temp=A[i];
    A[i]=A[t-i-1];
    A[t-i-1]=temp;
  }
}
void intercambioP(char *A, int t){
  char *temp;
  char *B=&A[t-1];
  for(int i=0;i<t/2;i++){

    //*(C1++)=*(C2--);
    //*(C2--)=*(C1++);
    *(temp++)=*(A++);
    *(A++)=*(B--);
    *(B--)=*(temp++);
    //*(A++)=*(B++);*/
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
  intercambioP(&s1[0],a);
  cout<<s1<<endl;
	return 0;
}