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
	cout<<"Indique um n�mero para saber se ele � perfeito"<<endl;
	cin>>n;

	if (perfeito(n)==true){
		cout<<"O n�mero "<<n<<" � perfeito!!!"<<endl;
	}else{
		cout<<"O n�mero "<<n<< " n�o � perfeito!!!"<<endl;
	}
}
