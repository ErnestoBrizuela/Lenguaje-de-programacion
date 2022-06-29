/*
		Propósito:
		
		Autor:
		Fecha:
		Hora:
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(int argc, char** argv)
 {
 	 int opcion = 0;
	 while(true){
	 	system("cls");
	 	cout << "****" << endl;
	 	cout << "MENU" << endl;
	 	cout << "****" << endl;
	 	
	 	cout << endl;
	 	cout << "1 - Cafe y Granitas" << endl;
	 	cout << "2 - Reposteria" << endl;
	 	cout << "0 - Salir" << endl;
	 	
	 	cout << "Ingrese una opcion del menú: ";
	 	cin >> opcion;
	 	
	 	switch(opcion)
		 {
		 	case 1:
	 		{
	 		system("cls");
	 		cout << "Estas en el menu de cafe y granitas" << endl;
	 		system("pause");
			}
			case 2:
			{
			system("cls");
	 		cout << "Estas en el menu de reposteria" << endl;
	 		system("pause");		  		
			}
		default:
		 	{
		 	cout << "Ingrese una opcion valida (0, 1, 2)" << endl;	
			system("pause");
			break;
			}
			
			
		 


				
		 }
	 
	 }

	 return 0;
	 
 }

