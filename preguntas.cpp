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
		cout << "1. ¿Cuál es el país más poblado del mundo?" << endl;
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
		
		cout << "2. ¿Cuál es la capital de España?" << endl;
		cout << "a) Londres" << endl;
		cout << "b) Madrid" << endl;	
		cout << "c) París" << endl;
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
		
		cout << "3. ¿Qué día se celebra la independencia de Estados Unidos?" << endl;
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
			
		cout << "4. ¿Qué país quedó cómo campeón del mundo en el Mundial de 2014?" << endl;
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
		
		cout << "5. ¿Cuál es el gas qué más abunda en la Tierra?" << endl;
		cout << "a) Oxígeno" << endl;
		cout << "b) Nitrogeno" << endl;	
		cout << "c) Helio" << endl;
		cout << "d) Neón" << endl;
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
		
		cout << "6. ¿Cuál es el océano más grande del mundo?" << endl;
		cout << "a) Océano Atlántico" << endl;
		cout << "b) Océano Pacífico" << endl;	
		cout << "c) Océano Índico" << endl;
		cout << "d) Océano Ártico" << endl;
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
			
		cout << "7. ¿En qué ciudad se encuentra la Torre Eiffel?" << endl;
		cout << "a) Marsella" << endl;
		cout << "b) Barcelona" << endl;	
		cout << "c) París" << endl;
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
			
		cout << "8. ¿Qué equipo de Europa ganó la UEFA Champions League en 2015?" << endl;
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
		
		cout << "9. ¿Cuántos días tiene 1 año?" << endl;
		cout << "a) 365 Días" << endl;
		cout << "b) 360 Días" << endl;	
		cout << "c) 350 Días" << endl;
		cout << "d) 366 Días" << endl;
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
			
		cout << "10. ¿Cuál es el idioma más hablado en el mundo?" << endl;
		cout << "a) Español" << endl;
		cout << "b) Francés" << endl;	
		cout << "c) Inglés" << endl;
		cout << "d) Mandarín" << endl;
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


