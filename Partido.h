#ifndef Partido_h
#define Partido_h
#include "Equipo.h"

#include <sstream>


class Partido{
	protected:
		Equipo* equipo1;
		Equipo* equipo2;
		int Marcador;
		Equipo* Local;
	public:
		Partido(Equipo*, Equipo*, int, Equipo*);
		virtual ~Partido();

		Equipo* getEquipo1();
		Equipo* getEquipo2();

		void setMarcador(int);
		int getMarcador();
		void setLocal(Equipo*);
		Equipo* getLocal();

		virtual string toString();

};

#endif