#include <iostream>
#include <iomanip>
using namespace std;

int tam(char A[]){
  int i=0;
  while(A[i]!='\0'){i++;}
  return i;
}
float potencia(float x, int y){
  float a=1;
  for(int i=1;i<=y;i++)
    a*=x;
  return a;
}
bool EsEntero(char *cad, int *var){
  int t=tam(cad),x,res=0;
  for(int i=0,j=t-1; i < t; i++,j--){
    x=cad[i]-'0';
    if(x<0 || x>9){
      if(i==0 && x==-3) continue;
      return false;
    }
    res+=x*potencia(10,j);
  }
  *var=res;
  return true;
}
bool EsDecimal(char *cad, float *var){
  int t=tam(cad),x,k=0;
  float res=0;
  bool tpunto=false;
  for(int i=0;i<t;i++){
    if(cad[i]=='.'){
      k=i;
      break;
    }   
  }
  for(int i=0,j=t-1;i<t;i++,j--){
    x=cad[i]-'0';
    if(x<0 || x>9){
      if(i==0 && x==-3) continue;
      if(x==-2 && !tpunto){
        tpunto=true;
        continue;
      }
      return false;
    }
    if(tpunto){
      if(cad[i]!='.'){
      res+=x/potencia(10,i-k);
      }
    }else{
      res+=x*potencia(10,k-i-1);
    }  
  }
  *var=res;
  return true;
}

int main(){
  char cadena[10]={""};
  int x;
  float y;
  setprecision(9);
  cout << "Ingresa un numero o decimal: "; cin>>cadena;
  if (EsEntero(cadena,&x)){
    cout<<"Es Entero: "<<x<<endl;
  }
  else if(EsDecimal(cadena,&y)){
    cout<<"Es Decimal: "<<y<<endl;
  }
  else{
    cout<<"No es un numero \n"; 
  }
  return 0;
}