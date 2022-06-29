/*
		Propósito: 14. Menú
		
		Autor: Ernesto Brizuela
		Fecha: 29/06/2022
		Hora: 12:00 PM
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
	 	
	 	if(opcion == 1){
	 		system("cls");
	 		cout << "Estas en el menu de cafe y granitas" << endl;
	 		system("pause");
		 }
	 	
	 	if(opcion ==2){
	 		system("cls");
	 		cout << "Estas en el menu de reposteria" << endl;
	 		system("pause");
		 }
		 
		 if(opcion == 0){
		 	break;
		 }	 		
		 }
		 
	 	
	 
	 
	 

	 return 0;
	 
 }

