#include "Persona.h"
#include "Partido.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Entrenador.h"

using namespace std;

int Menu();


int main(){

	int opcion = 0;
	
	while(opcion != 4){
		opcion = Menu();

		switch(opcion){
			case 1:{

				
				break;
			}
			case 2:{
				break;

			}
			case 3:{
				break;
			}
			case 4:{
				cout << endl << "Saliendo..." << endl;
				break;
			}
			default:{
				cout << endl << "Valor no valido!"
			}
		}
	}
	







}

int Menu(){
	int opcion = 0;

	cout << "================== Menu ======================" << endl
	<<  "1. Agregar Equipo." << endl << 
		"2. Generar Partido." << endl <<
		"3. Empezar Simulacion." << endl << 
		"4. Salir." << endl;
	cout << endl;

	cin >> opcion;

	return opcion;
}