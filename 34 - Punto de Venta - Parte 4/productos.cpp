#include <iostream>

using namespace std;


void productos(int opcion)
{
	system("cls");
	
	int opcionProducto = 0;
	
	switch(opcion)
	{
		case 1:
		{
			cout << "BEBIDAS CALIENTES" << endl;
			cout << "*****************" << endl;
			cout << "1 - Capuccino" << endl;
			cout << "2 - Expresso" << endl;
			cout << endl;
			
			cout << "Ingrese una opcion: ";
			cin >> opcionProducto;		

			switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 Capuccino - L.40.00", 1, 40);
					break;
				case 2:
					agregarProducto("1 Expresso - L.30.00", 1, 30);	
				default:
					{
					cout << "Opcion no valida";
					return;
					break;
					}
			
			cout << endl;
			cout << "Producto agregado" << endl;
			system("pause");

			}
			

			
			break;
			

		}
		case 2:
		{
			cout << "BEBIDAS FRIAS" << endl;
			cout << "*************" << endl;			
			cout << "1 - Te Frio" << endl;
			cout << "2 - Granita" << endl;
			cout << endl;
			
			cout << "Ingrese una opcion: ";
			cin >> opcionProducto;		

			switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 Te Frio - L.50.00", 1, 50);
					break;
				case 2:
					agregarProducto("1 Granita - L.40.00", 1, 40);	
				default:
					{
					cout << "Opcion no valida";
					return;
					break;
					}
			
			cout << endl;
			cout << "Producto agregado" << endl;
			system("pause");

			}
			break;	
		}
		case 3:
		{
			cout << "REPOSTERIA" << endl;
			cout << "**********" << endl;			
			cout << "1 - Dona" << endl;
			cout << "2 - Galleta Rellena" << endl;
			cout << endl;
			
			cout << "Ingrese una opcion: ";
			cin >> opcionProducto;		

			switch(opcionProducto)
			{
				case 1:
					agregarProducto("1 Dona - L.25.00", 1, 25);
					break;
				case 2:
					agregarProducto("1 Galleta Rellena - L.30.00", 1, 30);	
				default:
					{
					cout << "Opcion no valida";
					return;
					break;
					}
			
			cout << endl;
			cout << "Producto agregado" << endl;
			system("pause");

			}						
			break;
		}
		default:
			break;
	}
	
	
	
	
	
	
	
	
}
