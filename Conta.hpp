#ifndef CONTA_HPP
#define CONTA_HPP

class Conta{
	public:
		Conta(float saldo);
		float credito(float valor);
		float debito(float valor);
		void setSaldo(float s);
		float getSaldo();
	private:
		float saldo;
};

#endif
