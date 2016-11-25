
#include "Partido.h"


Partido::Partido(Equipo* equi1,Equipo* equi2,int marcadoor,bool locall){
	equipo1=equi1;
	equipo2=equi2;
	Marcador=marcadoor;
	Local=locall;
}


Partido::~Partido(){
}

int Partido::getMarcador(){
	return marcador;
}

void Partido::setMarcador(int pMarcador){
	this->setMarcador(pMarcador);
}

bool Partido::getLocal(){
	return Local;
}

void Partido::setLocal(bool pLocal){
	this->setLocal(pLocal);
}

