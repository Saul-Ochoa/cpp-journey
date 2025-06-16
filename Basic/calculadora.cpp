#include <iostream>
using namespace std;

class Calculadora {
private:
    double numero1, numero2;
    char operacion;

public:
    void ingresarDatos();
    void calcularResultado();
};

void Calculadora::ingresarDatos() {
    cout << "=== CALCULADORA POO ===\n";
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese una operación (+, -, *, /): ";
    cin >> operacion;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;
}

void Calculadora::calcularResultado() {
    cout << "Resultado: ";
    switch (operacion) {
        case '+':
            cout << numero1 + numero2;
            break;
        case '-':
            cout << numero1 - numero2;
            break;
        case '*':
            cout << numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0)
                cout << numero1 / numero2;
            else
                cout << "Error: División por cero.";
            break;
        default:
            cout << "Operación no válida.";
    }
    cout << "\n";
}

int main() {
    Calculadora calc;        // Crear objeto de la clase
    calc.ingresarDatos();    // Llamar método para ingresar datos
    calc.calcularResultado(); // Llamar método para mostrar resultado
    cout << "\nPresione Enter para salir...";
    cin.ignore();
    cin.get();
    return 0;
}

