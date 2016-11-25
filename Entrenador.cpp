#include "Persona.h"
#include "Entrenador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Entrenador::Entrenador(string name,string apellido,string sobreNombre,int nivel,string tactica):name(name),apellido(apellido),sobreNombre(sobreNombre), numero(numero),tactica(tactica){
}

Entrenador::Entrenador(string name,string apellido,string sobreNombre,int nivel,string tactica):Persona(name,apellido,sobreNombre,nivel){
  this->tactica = tactica;
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
	ss << "Entrenador: " << name << ", " << apellido<<", "<<", "<<sobreNombre<< ", "<<nivel<<", "<<tactica;
	return ss.str();
}


