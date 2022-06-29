/*
		Propósito: 8. Factura con descuento
		
		Autor: Ernesto Brizuela
		Fecha: 29/06/2022
		Hora: 11:00 AM
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main(int argc, char const *argv[])
 {
	 //Datos de entrada
	 double subtotal = 0;
	 double total = 0;
	 double impuesto = 0.15;
	 int descuento = 0;
	 double calculoDescuento = 0;
	 double calculoImpuesto = 0;
	 
	 cout << "Ingrese el subtotal de la factura: ";
	 cin >> subtotal;
	 
	 cout << "Ingrese el descuento (0, 10, 15, 20): ";
	 cin >> descuento;
	 
	 //Proceso
	 calculoDescuento = (subtotal * descuento) / 100;
	 calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	 total = subtotal - calculoDescuento + calculoImpuesto;
	 
	 //Salida
	 
	 cout << endl;
	 cout << "Total a pagar es: " << total;
	 

	 
	 
	 

	 return 0;
	 
 }

