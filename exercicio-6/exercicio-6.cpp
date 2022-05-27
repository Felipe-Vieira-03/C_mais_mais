#include <iostream>
#include <locale>
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	float peso;
	cout<<"Insira a sua idade: "<<endl;
	cin>>idade;
	cout<<"Insira o seu peso: "<<endl;
	cin>>peso;
	if (idade >=12 and peso>=60){
		cout<<"Você deve tomar 1000mg, correspondente a 40 gotas"<<endl;
	}else if(idade>=12 and peso<60){
		cout<<"Você deve tomar 875mg, correspondente a 35 gotas"<<endl;
	}else if (idade<12){
		if(peso<9 and peso>5){
			cout<<"Você deve tomar 125 mg, correspondente a 5 gotas"<<endl;
		}else if(peso<16 and peso>9.1){
			cout<<"Você deve tomar 250mg, correspondente a 10 gotas"<<endl;			
		}else if (peso>24 and peso<16.1){
			cout<<"Você deve tomar 350mg, correspondente a 15 gotas"<<endl;
		}else if(peso>30 and peso<24.1){
			cout<<"Você deve tomar 500mg, correspondente a 20 gotas"<<endl;
		}else{
			cout<<"Voce deve tomar 750mg, correspondente a 30 gotas"<<endl;
		}
	}
}

