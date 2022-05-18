#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int total, p,m,g;
		cout<<"Quantas camisetas pequenas foram vendidas?"<<endl;
		cin>>p;
		cout<<"Quantas camisetas médias foram vendidas?"<<endl;
		cin>>m;
		cout<<"Quantas camisetas grandes foram vendidas?"<<endl;
		cin>>g;
	p = p*10;
	m = m*12; 
	g = g*15;
	
	total =p+m+g;
		cout<<"Valores arrecadados separadamente: "<<p<<" R$ com camisetas pequenas, "<<m<<" R$ com camisetas médias e "<<g<<" R$ com camisetas grandes"<<endl;
		cout<<"O total arrecadado com a venda foi "<<total<<"R$"<<endl;	
}
