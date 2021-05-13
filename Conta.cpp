#include "Conta.hpp"
#include <iostream>
using namespace std;
Conta::Conta(float saldo){
	saldo = 0.0;
}
float Conta::credito(float valor){
	return saldo + valor;
}
float Conta::debito(float valor){
	if(valor > saldo){
		cout<<"\n\tSaldo Insuficiente";
	} else {
		return saldo - valor;	
	}
}
void Conta::setSaldo(float s){
	saldo = s;
}
float Conta::getSaldo(){
	return saldo;
}
