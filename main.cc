#include <iostream>
#include <string>

// Función para calcular la potencia de un número
int potencia(int num, int exponente) {
    if (exponente == 0)
        return 1;
    else
        return num * potencia(num, exponente - 1);
}

int main() {
    int num, exponente;

    std::cout << "Introduce el numero: ";
    std::cin >> num;
    std::cout << "Introduce el exponente: ";
    std::cin >> exponente;

    int resultado = potencia(num, exponente);
    std::cout << num<< "^" << exponente << " = " << resultado << std::endl;
    
    return 0;
}