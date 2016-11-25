#include "Persona.h"
#include "Partido.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Entrenador.h"

using namespace std;

int Menu();


int main(){

	int opcion = Menu();





}

int Menu(){
	int opcion = 0;

	cout << "================== Menu ======================" << endl
	<<  "1. Agregar Equipo." << endl << 
		"2. Generar Partido." << endl <<
		"3. Empezar Simulacion." << endl << 
		"4. Salir." << endl;

	cin >> opcion;

	return opcion;
}