#include <iostream>
#include <string>

int SumaRecursiva(int n) {
    if (n == 0) {
        return 0;
    }
        return n + SumaRecursiva(n - 1);
}


int main() {
    int n;

    std::cout << "Ingrese un número natural: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "El número debe ser un natural (mayor o igual a 0)." << std::endl;
        return 1;
    }

    std::cout << "La suma de los primeros " << n << " números naturales es: " << SumaRecursiva(n) << std::endl;

    

    return 0;
}

