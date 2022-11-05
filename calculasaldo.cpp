// Calcula Saldo
// Creado por Maribel Jaramillo
#include <iostream>
using namespace std;
int main ()
{
	float x_MEJQ,s=0;
	int i_MEJQ=0,l;
	cout<<"Ingrese cantidad de egresos (l): ";cin>>l;
	cout<<"Ingrese saldo inicial (s): ";cin>>s;
	
	do{
	cout<<"Ingrese egreso(x): ";cin>>x_MEJQ;
	i_MEJQ=i_MEJQ+1;
	s=s+x_MEJQ;

	}while(i_MEJQ<l);
	cout<<"El saldo final es: "<<s<<endl;
	return 0;
}
