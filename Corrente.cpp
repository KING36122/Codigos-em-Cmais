#include "Corrente.hpp"

Corrente::Corrente(){
}
void Corrente::setTaxa(float t){
	taxa = t;
}
float Corrente::getTaxa(){
	return taxa;
}
float Corrente::calcTaxa(){
	return getSaldo() - getSaldo() * taxa;
}
