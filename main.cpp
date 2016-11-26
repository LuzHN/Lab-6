#include "Persona.h"
#include "Partido.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Entrenador.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <fstream>
#include <algorithm>

using namespace std;

vector<Equipo*> equipos;
vector<Partido*> partidos;

vector<int> golesdetodos;

int Menu();


int main(){

	int opcion = 0;
	
	while(opcion != 5){
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

				while(nivelentrenador > 10 || nivelentrenador < 0){
					cout << endl << endl << "Nivel invalido, ingreselo de nuevo: ";
					cin >> nivelentrenador;
				}
				cout << endl << "Ingrese tactica de entrenador: ";
				string tactica = "";
				cin >> tactica;

				Entrenador* entrenador = new Entrenador(nombreEntrenador, apellidoentrenador, 
					sobrenombreentrenador, nivelentrenador, tactica);

				equipos.push_back(  new Equipo( nombreEquipo, entrenador) );

				int nivelDefensa=nivelentrenador;
				int nivelOfensa=nivelentrenador+(nivelentrenador*1.10);

				for (int i = 0; i < 1; ++i){
					cout << endl << "Ingrese nombre del jugador " << i <<": ";
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
						

				break;
			}
			case 2:{

				int cantidad=equipos.size();

				if (cantidad==4){
					cout<< endl << "Ingrese posicion del equipo 1 para este partido: "<<endl;
					int posicionEquipo1=0;

					for (int i = 0; i < equipos.size(); ++i){
						cout<<endl<<"Equipo #"<<i<<endl<<equipos.at(i)->toString();
					}
					cin>>posicionEquipo1;

					cout<< endl << "Ingrese posicion del equipo 2 para este partido: "<<endl;
					int posicionEquipo2=0;
					for (int i = 0; i < equipos.size(); ++i){
						if (i==posicionEquipo1){
							
						}else{
							cout<<endl<<"Equipo #"<<i<<endl<<equipos.at(i)->toString();
						}	
					}

					cin >> posicionEquipo2;
					if (posicionEquipo2 == posicionEquipo1){
						cout << endl << "No puede pelear contra el mismo equipo";
					} else{
						srand((unsigned)time(NULL));
						int r = (rand() % 2+0);
						if (r==1){
							Partido* part=new Partido( equipos.at(posicionEquipo1),equipos.at(posicionEquipo2),0, equipos.at(posicionEquipo1));
							partidos.push_back(part);
							cout << endl << "Se ha agregado el partido correctamente";

						}else if (r==0){
							Partido* part=new Partido( equipos.at(posicionEquipo1),equipos.at(posicionEquipo2),0,equipos.at(posicionEquipo2));
							partidos.push_back(part);
							cout << endl << "Se ha agregado el partido correctamente";
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

				int cantidadequipos = equipos.size();

				if(cantidadequipos == 4){

					srand((unsigned)time(NULL));
					int posicionequipo1 = 0;
					int posicionequipo2 = 0;
					posicionequipo1 = (rand() % cantidadequipos + 0);
					posicionequipo2 = (rand() % cantidadequipos + 0);

					cout << endl << "Pos equipo1 :" << posicionequipo1 << endl;
					cout << endl << "Pos equipo2 :" << posicionequipo2 << endl;


					while(posicionequipo1 == posicionequipo2){
						posicionequipo2 = (rand() % cantidadequipos + 0);
					}


					int r = (rand() % 2+0);
					if (r==1){
						Partido* part=new Partido( equipos.at(posicionequipo1),equipos.at(posicionequipo2),0, equipos.at(posicionequipo1));
						partidos.push_back(part);

						cout << endl << "Se ha agregado el partido correctamente";

					}else if (r==0){
						Partido* part=new Partido( equipos.at(posicionequipo1),equipos.at(posicionequipo2),0, equipos.at(posicionequipo2));
						partidos.push_back(part);

						cout << endl << "Se ha agregado el partido correctamente";
					} else {
						cout<<"No se pudo agregar el partido correctamente"<<endl;
					}

				} else{
					cout << endl << "Faltan mas equipos.";
				}
				
				break;
			}
			case 4:{

				stringstream ss;

				srand((unsigned)time(NULL));

				for (int i = 0; i < partidos.size(); ++i)
				{

					for (int j = 0; j < 5; ++j)
					{
						Equipo* eq1 = partidos.at(i) -> getEquipo1();
						string nomeq1 = eq1 -> getNombreEquipo();
						int OfensaEquipo1 = eq1 -> getNivelOfensa();
						int DefensaEquipo1 = eq1 -> getNivelDefensa();

						Equipo* eq2 = partidos.at(i) -> getEquipo2();
						string nomeq2 = eq2 -> getNombreEquipo();
						int OfensaEquipo2 = eq2 -> getNivelOfensa();
						int DefensaEquipo2 = eq2 -> getNivelDefensa();

						int random1 = (rand() % 10+1);
						int random2 = (rand() % 10+1);

						OfensaEquipo1 = OfensaEquipo1 * random1;
						DefensaEquipo1 = DefensaEquipo1 * random1;

						OfensaEquipo2 = OfensaEquipo2 * random2;
						DefensaEquipo2 = DefensaEquipo2 * random2;

						Equipo* local = partidos.at(i) -> getLocal();

						string nombreEqLocal = local -> getNombreEquipo();

						if(nombreEqLocal == eq1 -> getNombreEquipo()){
							OfensaEquipo1 = OfensaEquipo1 - (OfensaEquipo1 * 0.10);
							DefensaEquipo1 = DefensaEquipo1 - (DefensaEquipo1 * 0.10);

							

						} 
						if(nombreEqLocal == eq2 -> getNombreEquipo()){
							OfensaEquipo2 = OfensaEquipo2 - (OfensaEquipo2 * 0.10);
							DefensaEquipo2 = DefensaEquipo2 - (DefensaEquipo2 * 0.10);
						}

						if(OfensaEquipo1 > DefensaEquipo2){
							int GolesEq1 = partidos.at(i) -> getEquipo1() -> getGoles();
							GolesEq1++;
							partidos.at(i) -> getEquipo1() -> setGoles(GolesEq1);

							for (int k = 0; k < equipos.size(); ++k)
							{
								if(equipos.at(k) -> getNombreEquipo().compare(nomeq1)){
									equipos.at(k) -> setGoles(GolesEq1);
								}
							}

						}
						if(OfensaEquipo2 > DefensaEquipo1){
							int GolesEq2 = partidos.at(i) -> getEquipo2() -> getGoles();
							GolesEq2++;
							partidos.at(i) -> getEquipo2() -> setGoles(GolesEq2);

							for (int k = 0; k < equipos.size(); ++k)
							{
								if(equipos.at(k) -> getNombreEquipo().compare(nomeq2)){
									equipos.at(k) -> setGoles(GolesEq2);
								}
							}
						}
						
					}




					ss << endl << endl << "====Datos del Partido " << i << " =============" << endl << partidos.at(i) -> toString();
				} //fin for grande

				ofstream myfile;
				myfile.open("Reporte de Partidos.txt");

				myfile << ss.str();
				myfile.close();

				int maxgoles = 0;

				for (int i = 0; i < equipos.size(); ++i)
				{
					if(equipos.at(i) -> getGoles() >= maxgoles){
						maxgoles = equipos.at(i) -> getGoles();
					}
				}

				int posicionGanadora = 0;

				for (int i = 0; i < equipos.size(); ++i)
				{
					if(equipos.at(i) -> getGoles() == maxgoles){
						posicionGanadora = i;
					}
				}



				for (int i = 0; i < equipos.size(); ++i)
				{
					golesdetodos.push_back(equipos.at(i) -> getGoles());
				}

				sort(golesdetodos.begin(), golesdetodos.end());

				int posicionsemifinal = 0;


				for (int i = 0; i < equipos.size(); ++i)
				{
					if(equipos.at(i) -> getGoles() == golesdetodos.at(golesdetodos.size()-2)){
						posicionsemifinal = i;
					}
				}


				cout << endl << endl << "El equipo ganador es: " << endl << equipos.at(posicionGanadora) -> toString() << endl
				<< endl << "Y el otro equipo finalista es: " << equipos.at(posicionsemifinal) -> toString();


				break;
			}
			case 5:{
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

	cout << endl << endl <<"================== Menu ======================" << endl
	<<  "1. Agregar Equipos." << endl << 
		"2. Generar Partido por usuario" << endl <<
		"3. Generar Partido por random" << endl << 
		"4. Empezar Simulacion" << endl << 
		"5. Salir";
	cout << endl << endl;

	cin >> opcion;

	return opcion;
}