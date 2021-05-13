#ifndef POUPANCA_HPP
#define POUPANCA_HPP
#include "Conta.hpp"

class Poupanca : public Conta{
	public:
		Poupanca();
		void setRendimento(float r);
		float getRendimento();
		float calcRendimento();
	private:
		float rendimento;
};

#endif
