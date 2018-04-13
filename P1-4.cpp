#include <iostream>
using namespace std;

void multiplicar(int m1[2][2],int m2[2][2],int m3[2][2],int tam){
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            for(int z=0;z<2;z++){
                m3[i][j] =m3[i][j]+m1[i][z]*m2[z][j];
            }
        }
    }
}
void mostrar(int M[2][2], int tam){
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
    int m1[2][2]={{2,0},{1,3}};
    int m2[2][2]={{-1,-1},{5,6}};
    int m3[2][2]={{0,0},{0,0}};
    cout<<"Matriz 1"<<endl;
    mostrar(m1,2);
    cout<<"Matriz 2"<<endl;;
    mostrar(m2,2);
    cout<<"La multiplicacion de la matriz es:"<<endl;
    multiplicar(m1,m2,m3,2);
    mostrar(m3,2);
}
