#ifndef Partido_h
#define Partido_h
#include "Equipo.h"

#include <sstream>


class Partido{
	protected:
		Equipo* equipo1;
		Equipo* equipo2;
		int Marcador;
		bool Local;
	public:
		Partido(Equipo*, Equipo*, int, bool);
		virtual ~Partido();
		void setMarcador(int);
		int getMarcador();
		void setLocal(bool);
		bool getLocal();

};

#endif