#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v,soma1,soma2,acumulador;
	
	cout<<"Insira a quantidade de valores que os vetores ir�o ter"<<endl;
	cin>>v;
	
	int a[v], b[v], c[v], d[v],e[v],cont=1;
	
	for (int i=0;i<v;i++){
		cout<<"Insira o "<<i+1<<"� n�mero do vetor A"<<endl;
		cin>>a[i];
		soma1 = soma1 +a[i];
		
	}
	cout<<endl;
	cout<<"A soma dos valores do vetor A �: "<<soma1<<endl;
	
	for (int i=0;i<v;i++){
		cout<<"Insira o "<<i+1<<"� n�mero do vetor B"<<endl;
		cin>>b[i];
		soma2 = soma2+b[i];
	
	}
	cout<<endl;
	cout<<"A soma dos valores do vetor B �: "<<soma2<<endl;
	for (int i=0;i<v;i++){
		c[i] = a[i]+b[i];
		}
	for (int i=0;i<v;i++){
		d[i]= a[i]-b[i];
	}
	for (int i=0;i<v;i++){
		e[i]= a[i]*b[i];
		acumulador=acumulador+(a[i]*b[i]);
	}
	cout<<"A soma das listas �: "<<endl;
	for (int i=0;i<v;i++){
		cout<<"|"<<c[i]<<"|"<<endl;
	}
	cout<<"A subtra��o das listas �: "<<endl;
	for (int i=0;i<v;i++){
	cout<<"|"<<d[i]<<"|"<<endl;
	}
	cout<<"O produto escalar das listas �: "<<endl;
	cout<<"|"<<acumulador<<"|"<<endl;
	
}
