/*
		Prop�sito: Calculo de Factura con Descuento
		
		Autor: Ernesto Brizuela
		Fecha: 08/06/2022
		Hora: 10:00 am
*/
 
 #include <iostream>
 #include <cmath>
 #include <iomanip>
 
 using namespace std;
 
 int main()
 {
	 setlocale(LC_CTYPE, "Spanish");
	 cout << setprecision(10);
	 
	 double subtotal = 0, total = 0, calculoDescuento = 0, calculoImpuesto = 0;
	 int descuento = 0;
	 char estaExenta;
	 
	 cout << "Ingrese el subtotal de la factura: ";
	 cin >> subtotal;
	 
	 cout << "Ingrese el descuento (0, 10, 15, 20): ";
	 cin >> descuento;
	 
	 cout << "�La factura est� exenta? S o N: ";
	 cin >> estaExenta;
	 
	 if(estaExenta == 'S'|| estaExenta == 's')
	 {
	  calculoDescuento = (subtotal * descuento) / 100;
	  total = subtotal - calculoDescuento;
	 }
	 else
	 {	  
	  calculoDescuento = (subtotal * descuento) / 100;
	  calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	  total = subtotal - calculoDescuento + calculoImpuesto;	 
	 }
	 
	 cout << "El total a pagar es: " << total;

	 return 0;
	 
 }

