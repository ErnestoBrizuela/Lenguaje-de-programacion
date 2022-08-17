#include <iostream>

using namespace std;

extern void preguntas(int opcion);

void menu()
{
	
	int opcion = 0;
	
	while(true)
	{
		system("cls");
		
		cout << "****";
		cout << "MENU";
		cout << "****";
		cout << endl;
		cout << endl;
		cout << endl;
		
		cout << "1 - Jugar" << endl;
		cout << "2 - Ver Top Jugadores" << endl;
		cout << "0 - Salir" << endl;
		
		cout << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		
		if (opcion == 0)
		{
			break;
		}
		else
		{
			preguntas(opcion);
		}
	
		
	}

}
