#include <iostream>
#include <locale>
using namespace std;
int main (){
	setlocale(LC_ALL, "portuguese");
	int ferraduras, cavalos;
	cout<<"Quantos cavalos tem no haras?"<<endl;
	cin>>cavalos;
	ferraduras = cavalos*4;
	cout<<"A quantidade de ferraduras para equipar todos os cavalos são: "<<ferraduras<<endl;
	
}
