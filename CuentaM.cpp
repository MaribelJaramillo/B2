// Creado por Maribel Jaramillo
//Cuenta Moneda
#include <iostream>
using namespace std;
int main ()
{
	float x_MEJQ,s=0,s1=0,s5=0;
	int i=0,l_MEJQ,i1=0,i5=0;
	cout<<"Ingrese el valor de l: ";cin>>l_MEJQ;
	do{

	cout<<"Ingrese el valor de x: ";cin>>x_MEJQ;
	i=i+1;
	s=s+x_MEJQ;
	if(x_MEJQ==1){
		i1=i1+1;
		s1=s1+x_MEJQ;
	}else{

		i5=i5+1;
		s5=s5+x_MEJQ;
	}

	}while(i<l_MEJQ);
	cout<<"La cantidad de monedas es: "<<i<<endl;
	cout<<"El valor es: "<<s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<i1<<endl;
	cout<<"El valor es: "<<s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<i5<<endl;
	cout<<"La cantidad de moneda es: "<<s5<<endl;
	return 0;
}
