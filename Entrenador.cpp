#include "Persona.h"
#include "Entrenador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Entrenador :: Entrenador(){
	
}

Entrenador::Entrenador(string n, string ap, string sb, int nivel, string tac){
  	Nombre = n;
  	Apellido = ap;
  	SobreNombre = sb;
  	Nivel = nivel;
}

Entrenador::~Entrenador(){
}

string Entrenador::getTactica(){
	return tactica;
}

void Entrenador::setTactica(string pTactica){
	this->setTactica(pTactica);
}

string Entrenador::toString()const{
	stringstream ss;
	ss << "Entrenador: " << Nombre << ", " << Apellido<<", "<<", "<< SobreNombre<< ", "<<Nivel<<", "<<tactica;
	return ss.str();
}


