#include <iostream>
using namespace std;

int tam(char *A){
  int i=0;
  while(*(A+i)!='\0'){i++;}
  return i;
}
void concatenarA(char A[], char B[]){
    int b=tam(B), i=0;
    char *p=&B[b];
    while(A[i]!='\0'){
      *(p++)=A[i];
      i++;
    }
  *p='\0';
}
void concatenarP(char *A, char *B){
  int a=tam(A),b=tam(B);
  char *p1=&B[b];
  char *p2=&A[a];
  for(char *i=&A[0];i<p2;i++){
    *(p1++)=*i;
  }
  *p1='\0';
}

int main(){
  char s[100] ={"Ciencias de la Computacion"};
  char t[100] ={"Arquitectura de computadores - "};
  cout<<"Arrays"<<endl;
  concatenarA(s, t);
  cout<<t<<endl;

  char s1[100] ={"Desarrollo Basado en Plataformas"};
  char t1[100] ={"Computer Sciencie - "};
	cout<<"Punteros"<<endl;
  concatenarP(&s1[0],&t1[0]);
  cout<<t1<<endl;
	return 0;
}