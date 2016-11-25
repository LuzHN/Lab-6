#ifndef Entrenador_h
#define Entrenador_h

#include <sstream>

#include "Persona.h"

class Entrenador : public Persona{
  protected:
	string tactica;
  public:
	Entrenador();
	Entrenador(string, string,string,int,string);
	virtual ~Entrenador();
	virtual string toString()const;

	void setTactica(string);
	string getTactica();

};

#endif