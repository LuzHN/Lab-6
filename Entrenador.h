#pragma once
#include <sstream>

#include "Persona.h"

class Entrenador{
  protected:
	string tactica;
  public:
	Entrenador(string name,string apellido,string sobreNombre,int nivel,string tactica);
	virtual ~Entrenador();
	virtual string toString()const;

	void setTactica(string);
	string getTactica();

};