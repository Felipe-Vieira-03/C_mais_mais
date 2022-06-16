#include <iostream>
#include <locale>

using namespace std;
bool calcular(int valor){
	int divisores;
	for (int i=1;i<=valor;i++){
		if (valor%i == 0){
			divisores++;
		}
	}
	if (divisores ==2){
		return true;
	}else{
		return false;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor;
	
	cout<<"Insira o valor, inteiro e positivo, que quer utilizar no programa"<<endl;
	cin>>valor;
	
	if (calcular(valor)==true){
		cout<<"O número "<<valor<<" é primo"<<endl;
	}else{
		cout<<"O número "<<valor<<" não é primo"<<endl;
	}	
}
