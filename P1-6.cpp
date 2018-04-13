#include <iostream>
#include <string.h>
using namespace std;
int tamp(char *A){
  int i=0;
  while(*(A+i)!='\0'){i++;}
  return i;
}
void copiarA(char A[], char B[]){
    int i=0;
    while(B[i]!='\0'){
      *(A++)=B[i];
      i++;
    }
  *A='\0';
}
void copiarP(char *A, char *B){
  int tb=tam(B);
  for(int i=0;i<tb;i++){
    *(A++)=*(B++);
  }
  *A='\0';
}
int main(){
  char s[100] ={"Ciencias de la Computacion"};
  char t[100] ={"Arquitectura de computadores - "};
  cout<<"Arrays"<<endl;
  copiarA(s, t);
  cout<<s<<endl;
  char s1[100] ={"Desarrollo Basado en Plataformas"};
  char t1[100] ={"Computer Sciencie - "};
  cout<<"Punteros"<<endl;
  copiarP(&s1[0],&t1[0]);
  cout<<s1<<endl;
	return 0;
}