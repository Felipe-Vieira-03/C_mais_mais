#include <iostream>
#include <locale>
using namespace std;
 
float volumeEsfera(float raio){
	float volumeEsfera;
	volumeEsfera = (4*3.1415*(raio*raio*raio))/3;
	return volumeEsfera;
}
 
int main(){
	setlocale(LC_ALL,"Portuguese");
	float raio;
	float volume;
		cout<<"Insira o valor do raio da esfera que quer calcular o volume!!"<<endl;
 		cin>>raio;
 
 		volume = volumeEsfera(raio);
 		cout<<"=============================================================="<<endl;
 		cout<<"O volume da esfera com o raio de "<<raio<<" é "<<volume<<endl;
 		
 }
