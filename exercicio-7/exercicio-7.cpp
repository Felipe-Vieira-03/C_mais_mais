#include  <iostream>
#include <locale>
using namespace std;
int main(){
  int n, v1 = 0, v2 = 1, prox_v;
  setlocale(LC_ALL,"Portuguese");
  cout<<"Digite o  termo da sequência  de Fibonacci que deseja que seja exibido"<<endl;
  cin>>n;
  cout<<"=======SEQUÊNCIA======="<<endl;
  
  for(int i = 1; i <= n; i++){
  	prox_v = v1+v2;
  	v1 = v2;
  	v2=prox_v;
  	cout<<v1<<" | ";
  }
}


