// Practica8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{//arreglos que se usarnel libro es 
	string libro[5];
	string autor[5];
	string fecha[5];
	//ciclo para que el usuario ingrese sus libros
	for (int i = 0; i < 5; i++)
	{

		cout << "Escribe el nombre del libro" << endl;
		if ( i==0)
		{
			cin.ignore();
		}
		getline(cin, libro[i]);
		cout << "Escribe el nombre del autor" << endl;
		getline(cin,autor[i]);
		cout << "Escribe la fecha de publicacion" << endl;
		getline(cin,fecha[i]);
		cout<<""<<endl;
	}
	//ciclo que imprime los datos que ingreso el usuario
	for (int i = 0; i < 5; i++)
	{
		cout << "El libro es " << libro[i] << endl;
		cout << "El autor es " << autor[i] << endl;
		cout << "La fecha de publicacion es " << fecha[i] << endl;

	}
}

