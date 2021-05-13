#include "Poupanca.hpp"

Poupanca::Poupanca(){
}
void Poupanca::setRendimento(float r){
	rendimento = r;
}
float Poupanca::getRendimento(){
	return rendimento;
}
float Poupanca::calcRendimento(){
	return getSaldo() + getSaldo() * rendimento;
}

