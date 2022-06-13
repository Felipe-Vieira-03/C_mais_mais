#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale (LC_ALL,"Portuguese");
	int matriz [4] [4],maior,maior_c,maior_l;
	
	for (int i=0;i<4;i++){
		cout<<"Insira o valor da "<<i+1<<"º coluna"<<endl;
		cin>>matriz[0][i];
	}
	for (int i=0;i<4;i++){
		cout<<"Insira o valor da "<<i+1<<"º linha"<<endl;
		cin>>matriz[i][0];
	}
	cout<<"========================="<<endl;
	  for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
		cout<<matriz[i][j]<<endl;
           if(matriz[i][j]>maior){
            maior=matriz[i][j];
            maior_c=j;
            maior_l=i;
           }
        }
    }

	cout<<"O maior número da matriz está na coluna "<<maior_c<<" e a na linha "<<maior_l<<endl;
	


}
