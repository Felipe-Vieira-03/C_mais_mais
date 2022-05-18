#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int prato,sobremesa,bebida,cal,totalcal;
	string nprato, nbebida,nsobremesa;
	cout<<"========PRATO SALGADO========"<<endl;
	cout<<"1 - Vegetariano"<<endl;
	cout<<"2 - Peixe"<<endl;
	cout<<"3 - Frango"<<endl;
	cout<<"4 - Carne"<<endl;
	cin>>prato;
	if (prato==1){
		cal = 180;
		prato=cal;
		nprato="Vegetariano";
	}else if(prato==2){
		cal=230;
		prato=cal;
		nprato="Peixe";
	}else if(prato==3){
		cal=250;
		prato=cal;
		nprato="Frango";
	}else{
		cal=350;
		prato=cal;
		nprato="Carne";
	}
	cout<<"========SOBREMESA========"<<endl;
	cout<<"1 - Abacaxi"<<endl;
	cout<<"2 - Sorvete Diet"<<endl;
	cout<<"3 - Mousse Diet"<<endl;
	cout<<"4 - Mousse Chocolate"<<endl;
	cin>>sobremesa;
	
	if (sobremesa==1){
		cal = 75;
		sobremesa=cal;
		nsobremesa="Abacaxi";
	}else if(sobremesa==2){
		cal=110;
		sobremesa=cal;
		nsobremesa="Sorvete Diet";
	}else if(sobremesa==3){
		cal=170;
		sobremesa=cal;
		nsobremesa="Mousse Diet";
	}else{
		cal=200;
		sobremesa=cal;
		nsobremesa="Mousse Chocolate";
	}
	cout<<"========BEBIDA========"<<endl;
	cout<<"1 - Chá"<<endl;
	cout<<"2 - Suco de Laranja"<<endl;
	cout<<"3 - Suco de Melão"<<endl;
	cout<<"4 - Refrigerante Diet"<<endl;
	cin>>bebida;
	
	if (bebida==1){
		cal = 20;
		bebida=cal;
		nbebida="Chá";
	}else if(bebida==2){
		cal=70;
		bebida=cal;
		nbebida="Suco de Laranja";
	}else if(bebida==3){
		cal=100;
		bebida=cal;
		nbebida="Suco de Melão";
	}else{
		cal=65;
		bebida=cal;
		nbebida="Refrigerante Diet";
	}
	totalcal = bebida+prato+sobremesa;
	cout<<"O total de calorias consumidas vai ser: "<<totalcal<<endl;
	cout<<"Os pratos escolhidos foram: "<<nprato<<", "<<nsobremesa<<" e "<<nbebida<<endl;
	
}
