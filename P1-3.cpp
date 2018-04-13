#include <iostream>
using namespace std;

void insertionSort(int A[], int tam){
  int j, temp;
  for (int i=0;i<tam;i++){
    j = i;
    while (j > 0 && A[j-1] > A[j]){
     	temp=A[j];
     	A[j]=A[j-1];
     	A[j-1]=temp;
     	j--;
    }
  }
}


void merge(int a[],int size, int low, int mid, int high){
  int temp[size];
  for(int i=low;i<=high;i++){
    temp[i]=a[i];
  }
  int i=low;
  int j=mid+1;
  int k=low;
  while (i <= mid && j <= high){
    if(temp[i] <= temp[j]){
      a[k] = temp[i];
      ++i;
    }else {
      a[k] = temp[j];
      ++j;
    }
    ++k;
  }
  while (i <= mid){
    a[k] = temp[i];
    ++k;
    ++i;
  }
}
void mergeSort(int A[], int size, int low, int high){
  int mid = 0;
  if (low < high){
    int middle = (low + high) / 2;
    mergeSort(A, size, low, middle);
    mergeSort(A, size, middle+1, high);
    merge(A, size, low, middle, high);
  }
}


void quickSort(int A[], int left, int right){
  int i = left, j = right, tmp;
  bool end = false;
  int pivot = A[(left + right) / 2];
  do{
    while (A[i]<pivot) i++;
    while (A[j]>pivot) j--;
    if(i<=j){
      tmp=A[i]; A[i]=A[j]; A[j]=tmp;
      i++; j--;
    }
  }while(i<=j);
    if (left<j)
      quickSort(A,left,j);
    if (i<right)
      quickSort(A,i,right);
}

void mostrar(int A[], int tam){
	for (int i=0;i<tam;i++)
		cout<<A[i]<<" ";
}

int main(){
	int A[8]={10,2,15,4,12,1,9,8};
  int B[8]={10,2,15,4,12,1,9,8};
  int C[8]={10,2,15,4,12,1,9,8};
  cout<<"============="<<endl;
  cout<<"InsertionSort "<<endl;
  mostrar(A,8);
  cout<<endl<<endl;
  insertionSort(A,8);
	mostrar(A,8);
  cout<<endl;
  cout<<"============="<<endl;
  cout<<"MergeSort "<<endl;
  mostrar(B,8);
  cout<<endl<<endl;
  mergeSort(B,7,0,7);
  mostrar(B,8);
  cout<<endl;
  cout<<"============="<<endl;
  cout<<"QuickSort "<<endl;
  mostrar(C,8);
  cout<<endl<<endl;
  quickSort(C,0,7);
  mostrar(C,8);
	cout<<endl;
	return 0;
}
