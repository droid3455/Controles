#include <iostream>

using namespace std;

class Empleado{
private:
    string Nombre;
    string Apellido;
    double Salario;
public:
    int SalarioPositivo();
    void SalarioAnual();
    void ReducirSueldo();

    Empleado();

    Empleado(string, string, double);
};

int Empleado::SalarioPositivo(){
    if(Salario<0)
            Salario = 0;
}

void Empleado::SalarioAnual()
{
        int S;
        S= Salario*12;
        cout<< S << endl;
    }
void Empleado::ReducirSueldo()
{
    double t = Salario*0.1;
        Salario = Salario - t;
}
int main()
{
}
