#pragma once
#include "Equipo.h"

#include <sstream>


class Partido{
	protected:
		Equipo* equipo1;
		Equipo* equipo2;
		int Marcador;
		bool Local;
	public:
		void setMarcador();
		int getMarcador();
		void setLocal();
		bool getLocal();

};