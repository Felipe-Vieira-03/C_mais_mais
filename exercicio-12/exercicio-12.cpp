#include <iostream>
#include <locale>

using namespace std;
int main (){
	setlocale (LC_ALL,"Portuguese");
	int m1[4][4],m2[4][4],m3[4][4];

	//inserção de dados na primeira matriz
	cout<<"~~~~~~~~~~~~~~INICIO DA MATRIZ 1~~~~~~~~~~~~~~"<<endl;
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){	
		cout<<"Insira um valor para a posição na linha "<<i<<" e na coluna "<<j<<" na matriz 1"<<endl;
		cin>>m1[i][j];
		cout<<endl;
		}
	}

	//inserção de dados na segunda matriz
	cout<<"~~~~~~~~~~~~~~INICIO DA MATRIZ 2~~~~~~~~~~~~~~"<<endl;
	for (int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		cout<<"Insira um valor para a posição na linha "<<i<<" e na coluna "<<j<<" na matriz 2"<<endl;
		cin>>m2[i][j];
		cout<<endl;
		}
	}
	
	cout<<"~~~~~~~~~~~~~~RESULTADO -----> MATRIZ 3~~~~~~~~~~~~~~"<<endl;	
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++)
		if (m1[i][j]>m2[i][j]){
			m3[i][j]=m1[i][j];
		}else{
			m3[i][j]= m2[i][j];
			cout<<"O valor da posição na linha "<<i<<" e na coluna "<<j<<" é: "<<m3[i][j]<<endl;
		}
	}
}
