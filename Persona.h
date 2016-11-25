#include <iostream>

#ifndef Persona_h
#define Persona_h

using std::string;

class Persona{

	protected:
		string Nombre;
		string Apellido;
		string SobreNombre;
		int Nivel;
		

	public:

		Persona();
		virtual ~Persona();


		void setNombre(string);
		string getNombre();

		void setApellido(string);
		string getApellido();

		void setSobreNombre(string);
		string getSobreNombre();

		void setNivel(int);
		int getNivel();
};

#endif