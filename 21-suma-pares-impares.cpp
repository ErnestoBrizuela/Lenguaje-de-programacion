/*
		Propósito: Suma de Pares e Impares
		
		Autor: Ernesto Brizuela
		Fecha: 22/06/2022
		Hora: 9:00 AM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main()
 {
	 setlocale(LC_CTYPE, "Spanish");
	 cout << setprecision(10);
	 
	 int pares = 0, impares = 0, total = 0;
	 
	 for(int i = 1; i <= 10; i++)
	 {
	 	if(i%2 == 0)
	 	{
	 		pares = pares + i;
		}
		else
		{
			impares = impares + i;
		}
		cout << i << " ";
	 }
	 
	 cout << endl;
	 total = pares + impares;
	 cout << "El total de pares es: " << pares << endl;
	 cout << "El total de impares es: " << impares << endl;
	 cout << "El total es: " << total;

	 return 0;
	 
 }

