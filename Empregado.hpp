#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
const int MAXIMOHORASTRABALHO = 8;
class Empregado
{
public:
  //base construtctor
  Empregado(std::string nome, double salarioHora)
      : nome{nome},
        salarioHora{salarioHora} {};
  double pagamentoMes(double horasTrabalhadas)
  {

    double t = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)

    if (horasTrabalhadas > MAXIMOHORASTRABALHO)
    {
      double x = horasTrabalhadas - MAXIMOHORASTRABALHO;
      t += x / 2;
    }

    return t * salarioHora;
  }

protected:
  std::string nome;
  double salarioHora;
};

#endif