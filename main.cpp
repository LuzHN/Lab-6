#include "Persona.h"
#include "Partido.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Entrenador.h"
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

vector<Equipo*> equipos;
Vector<Partido*> partidos;

int Menu();


int main(){

	int opcion = 0;
	
	while(opcion != 4){
		opcion = Menu();

		switch(opcion){
			case 1:{

				cout << endl << "Ingrese nombre de equipo: ";
				string nombreEquipo = "";
				cin >> nombreEquipo;

				cout << endl << "Ingrse nombre de entrenador: ";
				string nombreEntrenador = "";
				cin >> nombreEntrenador;

				cout << endl << "Ingrese apellido de entrenador: ";
				string apellidoentrenador = "";
				cin >> apellidoentrenador;

				cout << endl << "Ingrese sobre nombre de entrenador: ";
				string sobrenombreentrenador = "";
				cin >> sobrenombreentrenador;

				cout << endl << "Ingrese nivel del entrenador: ";
				int nivelentrenador = 0;
				cin >> nivelentrenador;

				if(nivelentrenador > 10 || nivelentrenador < 0){
					cout << endl << "Nivel de entrenador invalido";
				}else{
					cout << endl << "Ingrese tactica de entrenador";
					string tactica = "";
					cin >> tactica;

					Entrenador* entrenador = new Entrenador(nombreEntrenador, apellidoentrenador, 
						sobrenombreentrenador, nivelentrenador, tactica);

					equipos.push_back(  new Equipo( nombreEquipo, entrenador) );

					int nivelDefensa=nivelentrenador;
					int nivelOfensa=nivelentrenador+(nivelentrenador*1.10);

					for (int i = 0; i < 11; ++i){
						cout << endl << "Ingrese nombre del jugador: ";
						string nombreJug = "";
						cin >>nombreJug;

						cout << endl << "Ingrese apellido del jugador: ";
						string apellidoJug = "";
						cin >> apellidoJug;

						cout << endl << "Ingrese sobre nombre del jugador: ";
						string sobrenombrejugador = "";
						cin >> sobrenombrejugador;

						cout << endl << "Ingrese nivel del jugador: ";
						int nivelJugador = 0;
						cin >> nivelJugador;

						while(nivelJugador > 10 || nivelJugador < 0){
							cout << endl << endl << "Nivel invalido, ingreselo de nuevo: ";
							cin >> nivelJugador;
						}

						cout << endl << "Ingrese posicion del jugador: ";
						string posicionJugador = "";
						cin >> posicionJugador;

						Jugador* jug = new Jugador(nombreJug, apellidoJug, sobrenombrejugador, nivelJugador, posicionJugador);

						equipos.at(equipos.size() - 1) -> addJugador(jug);

						nivelDefensa+=nivelJugador;
						nivelOfensa+=nivelJugador;

						
					}
					equipos.at(equipos.size()-1)->setNivelDefensa(nivelDefensa);
					equipos.at(equipos.size()-1)->setNivelOfensa(nivelOfensa);

					equipos.at(equipos.size()-1)->setGoles(0);
				}			





				break;
			}
			case 2:{

				int cantidad=equipos.size();

				if (cantidad==4){
					cout<< endl << "Ingrese posicion del equipo 1 para este partido: "<<endl;
					int posicionEquipo1=0;

					for (int i = 0; i < equipos.size(); ++i){
						cout<<endl<<"Equipo #"<<i<<endl<<equipos.at(i)->toString;
					}
					cin>>posicionEquipo1;

					cout<< endl << "Ingrese posicion del equipo 2 para este partido: "<<endl;
					int posicionEquipo2=0;
					for (int i = 0; i < equipos.size(); ++i){
						if (i==posicionEquipo1){
							
						}else{
							cout<<endl<<"Equipo #"<<i<<endl<<equipos.at(i)->toString;
						}	
					}

					cin >> posicionEquipo2;
					if (posicionEquipo2 == posicionEquipo1){
						cout << endl << "No puede pelear contra el mismo equipo";
					} else{
						srand((unsigned)time(NULL));
						int r = (rand() % 2+0);
						if (r==1){
							Partido* part=new Partido( equipos.at(posicionEquipo1),equipos.at(posicionEquipo2),0,true);
							partidos.push_back(part);

						}else if (r==0){
							Partido* part=new Partido( equipos.at(posicionEquipo1),equipos.at(posicionEquipo2),0,false);
							partidos.push_back(part);
						} else {
							cout<<"No se pudo agregar el partido correctamente"<<endl;
						}
						
					}

						
				}else{
					cout<<"Ocupa agregar mas equipos"<<endl;
				}

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
				cout << endl << "Valor no valido!";
			}
		}
	}
	







}

int Menu(){
	int opcion = 0;

	cout << "================== Menu ======================" << endl
	<<  "1. Agregar Equipos." << endl << 
		"2. Generar Partido." << endl <<
		"3. Empezar Simulacion." << endl << 
		"4. Salir." << endl;
	cout << endl;

	cin >> opcion;

	return opcion;
}