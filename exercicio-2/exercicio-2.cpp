#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	float total, guardar,pao,broa;
		cout<<"Quantas vendas de pãozinhos foram efetuadas no dia?"<<endl;
		cin>>pao;
		cout<<"Quantas vendas de broas foram efetuadas no dia?"<<endl;
		cin>>broa;
	broa = broa*1.50;
	pao = pao*0.12;
	total = broa+pao;
		cout<<"O total vendido no dia foi "<<total<<endl;
		cout<<"Valor que deve ser guardado na poupança: "<<total*0.10<<endl;
	
}
