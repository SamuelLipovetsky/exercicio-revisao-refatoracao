#include <string>
#include "Empregado.hpp"
const int NUMEROMESES = 12;
class Vendedor : public Empregado
{

public:
	Vendedor(std::string nome, double salarioHora, double quotaMensal)
		: Empregado{
			  nome,
			  salarioHora,
		  },
		  quotaMensalVendas{quotaMensal}
	{
	}
	void printInfo(double horasTrabalhadas)
	{
		std::cout << "Nome: " << nome << std::endl;
		std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
		std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
		std::cout << std::endl;
	}

private:
	double quotaMensalVendas;
	double quotaTotalAnual()
	{
		return quotaMensalVendas * NUMEROMESES;
	}
};
