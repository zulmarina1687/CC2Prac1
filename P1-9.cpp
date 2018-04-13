#include <iostream>
using namespace std;

int tam(char A[]){
  int i=0;
  while(A[i]!='\0'){i++;}
  return i;
}
bool esPalindromo(char A[]){
    int t = tam(A);
    for(int i = 0; i < t/2; i++)
        if(A[i] != A[t-i-1]) 
            return false;
    return true;   
}
int main(){
    char cadena[100]={""};
    cout << "Ingresa la cadena: "; cin>>cadena;
    esPalindromo(cadena) ? 
        cout<<"Es palindromo \n":cerr<<"No es palindromo \n"; 
    return 0;    
}