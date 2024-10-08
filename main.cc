#include <iostream>
#include <string>

int SumaRecursiva(int n) {
    if (n == 0) {
        return 0;
    }
        return n + SumaRecursiva(n - 1);
}

// Función para calcular la potencia de un número
int potencia(int num, int exponente) {
    if (exponente == 0)
        return 1;
    else
        return num * potencia(num, exponente - 1);
}


int main() {


    std::cout << "PROGRAMA SUMA RECURSIVA"<<std::endl;

    int n;

    std::cout << "Ingrese un numero natural: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "El numero debe ser un natural (mayor o igual a 0)." << std::endl;
        return 1;
    }

    std::cout << "La suma de los primeros " << n << " numeros naturales es: " << SumaRecursiva(n) << std::endl;

    std::cout <<std::endl;
    std::cout << "PROGRAMA POTENCIA DE NUMEROS"<<std::endl;
    std::cout <<std::endl;

    int num, exponente;

    std::cout << "Introduce el numero: ";
    std::cin >> num;
    std::cout << "Introduce el exponente: ";
    std::cin >> exponente;

    int resultado = potencia(num, exponente);
    std::cout << num<< "^" << exponente << " = " << resultado << std::endl;

    return 0;
}
