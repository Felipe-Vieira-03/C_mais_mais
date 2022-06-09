#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale (LC_ALL,"Portuguese");
	int n;
	int vetor[n],aux;
	
	cout<<"Insira a quantidade de termos desejada"<<endl;
	cin>>n;
	
	for(int i=0; i < n; i++){
		vetor[i]=0;
	}
	
	for (int i = 0; i<n;i++){
		cout<<"Insira o "<<i+1<<"º do vetor"<<endl;
		cin>>vetor[i];
	}	
	for(int i = 0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (vetor[i]>vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	cout<<endl;
	for (int i=0;i<n;i++){
		cout<< vetor[i]<<endl;
	}
	cout<<endl;
} 
