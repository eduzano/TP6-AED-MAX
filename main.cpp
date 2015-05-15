/*
n pertenece a los naturales
Pre condicion:
n pertenece {x / x>=0}
*/

#include <iostream>

using namespace std;

int main()
{
	int n, numero[10];
	int max=0, min;
	bool s=false;
	
	for(int i=0 ; i<10 ; i++)
	{
		cout<<"Ingrese valor entero y positivo: \n";
		do
		{
			cin>>n;
			if(n>=0)
			{
				numero[i]=n;
				s=true;
			}
			else
			    cout<<"Valor fuera de rango \n";
		}while(s!=true);
	}
	min=numero[0];
	for(int j=0 ; j<10 ; j++)
	{
		if(numero[j]>max)
			max=numero[j];
		else if(numero[j]<min)
			min=numero[j];
	}
	cout<<"El mayor numero ingresado: "<<max<<endl;
	cout<<"El menor numero ingresado: "<<min<<endl;
	
}
