#include <iostream>


using namespace std;

void preguntas(int opcion)
{
	system("cls");
	
	setlocale(LC_CTYPE, "Spanish");
	
	char nombre;
	char respuesta;
	int total;
	int puntos = 0;
	
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	
	cout << endl;
	cout << endl;
	cout << "*** PREGUNTAS ***";
	cout << endl;
	cout << endl;
	
	switch(opcion)
	{
		case 1:
		{
		for(int i = 0; i < 1; i++)
		{
		cout << "1. �Cu�l es el pa�s m�s poblado del mundo?" << endl;
		cout << "a) China" << endl;
		cout << "b) India" << endl;	
		cout << "c) Estados Unidos" << endl;
		cout << "d) Brasil" << endl;
		cin >> respuesta;
	
		if(respuesta = 'a')
		{
			cout << "Respuesta Correcta" << endl;
			puntos++;
		}
		else
		{
			cout << "Respuesta Incorrecta" << endl;
		}
		
		cout << "2. �Cu�l es la capital de Espa�a?" << endl;
		cout << "a) Londres" << endl;
		cout << "b) Madrid" << endl;	
		cout << "c) Par�s" << endl;
		cout << "d) Lisboa" << endl;
		cin >> respuesta;
	
			if(respuesta = 'b')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
		
		cout << "3. �Qu� d�a se celebra la independencia de Estados Unidos?" << endl;
		cout << "a) 15 de Septiembre" << endl;
		cout << "b) 6 de Julio" << endl;	
		cout << "c) 4 de Julio" << endl;
		cout << "d) 16 de Junio" << endl;
		cin >> respuesta;
	
			if(respuesta = 'c')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
			
		cout << "4. �Qu� pa�s qued� c�mo campe�n del mundo en el Mundial de 2014?" << endl;
		cout << "a) Alemania" << endl;
		cout << "b) Argentina" << endl;	
		cout << "c) Brasil" << endl;
		cout << "d) Uruguay" << endl;
		cin >> respuesta;
	
			if(respuesta = 'a')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
		
		cout << "5. �Cu�l es el gas qu� m�s abunda en la Tierra?" << endl;
		cout << "a) Ox�geno" << endl;
		cout << "b) Nitrogeno" << endl;	
		cout << "c) Helio" << endl;
		cout << "d) Ne�n" << endl;
		cin >> respuesta;
	
			if(respuesta = 'a')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}			
		
		cout << "6. �Cu�l es el oc�ano m�s grande del mundo?" << endl;
		cout << "a) Oc�ano Atl�ntico" << endl;
		cout << "b) Oc�ano Pac�fico" << endl;	
		cout << "c) Oc�ano �ndico" << endl;
		cout << "d) Oc�ano �rtico" << endl;
		cin >> respuesta;
	
			if(respuesta = 'b')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
			
		cout << "7. �En qu� ciudad se encuentra la Torre Eiffel?" << endl;
		cout << "a) Marsella" << endl;
		cout << "b) Barcelona" << endl;	
		cout << "c) Par�s" << endl;
		cout << "d) Bruselas" << endl;
		cin >> respuesta;
	
			if(respuesta = 'c')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
			
		cout << "8. �Qu� equipo de Europa gan� la UEFA Champions League en 2015?" << endl;
		cout << "a) Real Madrid" << endl;
		cout << "b) Paris Saint-Germain" << endl;	
		cout << "c) Juventus" << endl;
		cout << "d) Barcelona" << endl;
		cin >> respuesta;
	
			if(respuesta = 'd')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
		
		cout << "9. �Cu�ntos d�as tiene 1 a�o?" << endl;
		cout << "a) 365 D�as" << endl;
		cout << "b) 360 D�as" << endl;	
		cout << "c) 350 D�as" << endl;
		cout << "d) 366 D�as" << endl;
		cin >> respuesta;
	
			if(respuesta = 'a')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}
			
		cout << "10. �Cu�l es el idioma m�s hablado en el mundo?" << endl;
		cout << "a) Espa�ol" << endl;
		cout << "b) Franc�s" << endl;	
		cout << "c) Ingl�s" << endl;
		cout << "d) Mandar�n" << endl;
		cin >> respuesta;
	
			if(respuesta = 'c')
			{
				cout << "Respuesta Correcta" << endl;
				puntos++;
			}
			else
			{
				cout << "Respuesta Incorrecta" << endl;
			}									
				
		}
		
		cout << "Usted obtuvo " << puntos << " puntos.";
		
		break;
		}
	
	}	
	
}


