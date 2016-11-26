
#include "Partido.h"
#include <iostream>
#include <sstream>

using std::stringstream;
using std::endl;


Partido::Partido(Equipo* equi1,Equipo* equi2,int marcadoor, Equipo* locall){
	equipo1=equi1;
	equipo2=equi2;
	Marcador=marcadoor;
	Local=locall;
}


Partido::~Partido(){
}

int Partido::getMarcador(){
	return Marcador;
}

void Partido::setMarcador(int pMarcador){
	this->setMarcador(pMarcador);
}

Equipo* Partido::getLocal(){
	return Local;
}

void Partido::setLocal(Equipo* pLocal){
	this->setLocal(pLocal);
}

string Partido:: toString(){
	stringstream ss;

	ss << endl << endl << "Equipo #1: " << equipo1 -> toString() << endl << "Equipo #2: " << equipo2 -> toString()  << endl;

	return ss.str();
}

Equipo* Partido :: getEquipo1(){
	return equipo1;
}

Equipo* Partido :: getEquipo2(){
	return equipo2;
}



