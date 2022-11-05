// Creado por Maribel Jaramillo
//Indice Masa Corporal
#include<iostream>
using namespace std;
int main()
	{
		float imc_MEJQ,peso_MEJQ,altura_MEJQ;
		cout<<"Ingrese el peso (Kg) : "; cin>>peso_MEJQ;
		cout<<"Ingrese la altura (metros) : "; cin>>altura_MEJQ;
		imc_MEJQ=peso_MEJQ/(altura_MEJQ*altura_MEJQ);
		if(imc_MEJQ<18.5){
			cout<<"Usted tiene bajo peso"<<endl;
		}
		if (imc_MEJQ>=18.5 && imc_MEJQ<24.9){
			cout<<"Usted tiene peso normal"<<endl;
		}
		if(imc_MEJQ>=25 && imc_MEJQ<26.9){
			cout<<"Usted tiene sobrepeso grado I "<<endl;
		}
		if (imc_MEJQ>50){
			cout<<"Usted tiene obesidad tipo iv (extrema)  "<<endl;
		}
		return 0;
	}
