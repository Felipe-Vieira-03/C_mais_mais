#include <iostream>
#include <locale>
using namespace std;

int main (){
	setlocale(LC_ALL,"Portuguese");
	double num_quad,valor,cont,soma,acum=0;
	cout<<"Indique o número de casas do tabuleiro que deseja calcular (1 até 64)"<<endl;
	cin>>valor;
	
	cout<<"A quantidade de grãos é: "<<endl;
	for (double num_quad=1;num_quad>=1 && cont<valor;num_quad=num_quad+num_quad){
		cont++;
		cout<<num_quad<<endl;
		acum=acum+num_quad;
		soma=acum;
	}
	cout<<"A soma dos grãos de trigo é: "<<soma<<endl;
}
