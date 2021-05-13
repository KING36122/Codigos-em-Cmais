#ifndef CORRENTE_HPP
#define CORRENTE_HPP
#include "Conta.hpp"

class Corrente : public Conta{
	public:
		Corrente();
		void setTaxa(float t);
		float getTaxa();
		float calcTaxa();
	private:
		float taxa;
};

#endif
