#include  <iostream>
#include <locale>
using namespace std;
int main(){
  double termo, v1 = 0, v2 = 1, prox_v = 0;
  setlocale(LC_ALL,"Portuguese");
  cout<<"Digite o  termo da sequência  de Fibonacci que deseja que seja exibido"<<endl;
  cin>>termo;
  cout<<"=======SEQUÊNCIA======="<<endl;
  
  cout<<prox_v<<" | ";
  for(int i = 0; i <= termo-2; i++){
  	prox_v = v1+v2;
  	v1 = v2;
  	v2=prox_v;
  	cout<<v1<<" | ";
  }
}


