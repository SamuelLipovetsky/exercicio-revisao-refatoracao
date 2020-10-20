#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
public:
  Engenheiro(std::string nome, double salarioHora, int projetos)
      : Empregado{
            nome,
            salarioHora,
        },
        projetos{projetos}
  {
  }
  void printInfo(double horasTrabalhadas)
  {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Projetos: " << projetos << std::endl;
    std::cout << std::endl;
  }

private:
  int projetos;
};
