#include "Persona.h"

using std::string;

Persona :: Persona(){

}




void Persona :: setNombre(string pNombre){
	Nombre = pNombre;
}

string Persona :: getNombre(){
	return Nombre;
}

void  Persona :: setApellido (string pApellido){
	Apellido = pApellido;
}

string  Persona :: getApellido(){
	return Apellido;
}

void Persona :: setSobreNombre (string pSobreNombre){
	SobreNombre = pSobreNombre;
}

string Persona :: getSobreNombre (){
	return SobreNombre;
}

void Persona:: setNivel(int pNivel){
	Nivel = pNivel;
}

int Persona:: getNivel(){
	return Nivel;
}

Persona :: ~Persona(){
	
}