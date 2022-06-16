#include <iostream>
#include <locale>

using namespace std;
bool perfeito(int n){ 

	int valor = 1, soma = 0;
	while (valor<n){
		if (n%valor ==0){
			soma +=valor;
		}
		valor++;
	}
	if (soma == n){
		return true;
	}else{
		return false;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,resposta;
	cout<<"Indique um número para saber se ele é perfeito"<<endl;
	cin>>n;

	if (perfeito(n)==true){
		cout<<"O número "<<n<<" é perfeito!!!"<<endl;
	}else{
		cout<<"O número "<<n<< " não é perfeito!!!"<<endl;
	}
}
