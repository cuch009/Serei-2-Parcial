#include <iostream> 
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std; 

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


int main() {
    int opc;

    do {
        gotoxy(35, 1);
        cout << "MENU" << endl;
        cout << "1- Determinar si un numero es primo o no." << endl;
        cout << "2- Raiz Cuadrada" << endl;
        cout << "3- Calculadora." << endl;
        cout << "4- Suma de todos los enteros." << endl;
        cout << "5- Salir del menu." << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: {
                system("cls");
                cout << "\t\t\tIdentificador de numeros primos" << endl;
                int numero;
                cout << "Ingrese un numero para saber si es primo o no" << endl;
                cin >> numero;
                if (numero <= 1) {
                    cout << "El numero no es primo" << endl;
                } else {
                    float limite = sqrt(numero);
                    bool esPrimo = true;

                    for (int divisor = 2; divisor <= limite; divisor++) {
                        if (numero % divisor == 0) {
                            esPrimo = false;
                            break;
                        }
                    }
                    if (esPrimo) {
                        cout << " El numero es primo" << endl;
                    } else {
                        cout << "El numero no es primo" << endl;
                    }
                    system("pause");
                    cout << endl;
                    break;
            	}
			}
            case 2: {
                
                system("cls");

                double numero;
    			cout << "Ingrese un numero para calcular su raiz cuadrada: ";
    			cin >> numero;

    
    			double raizCuadrada = sqrt(numero);
    			cout << "La raiz cuadrada de " << numero << " es: " << raizCuadrada << endl;

                system("pause");
                cout << endl;
                break;
            }
            case 3: {
                system("cls");
                float num1, num2, resultado;
                char operacion;

                cout << "Ingrese el primer numero: ";
                cin >> num1;

                cout << "Ingrese el segundo numero: ";
                cin >> num2;

                cout << "Seleccione la operacion (+, -, *, /): ";
                cin >> operacion;

                switch (operacion) {
                    case '+':
                        resultado = num1 + num2;
                        break;
                    case '-':
                        resultado = num1 - num2;
                        break;
                    case '*':
                        resultado = num1 * num2;
                        break;
                    case '/':
                        if (num2 != 0) {
                            resultado = num1 / num2;
                        } else {
                            cout << "No se puede dividir por cero." << endl;
                            return 1;
                        }
                        break;
                    default:
                        cout << "Operacion no valida." << endl;
                        return 1;
                }

                cout << "El resultado es: " << resultado << endl;
                system("pause");
                cout << endl;
                break;
                }
            
            case 4: {
                system("cls");

                int n;
    			cout << "Ingrese un numero: ";
    			cin >> n;

    
    			if (n <= 0) {
        		cerr << "Ingresa un numero entero." << std::endl;
        		return 1;  
    			}

    
    			int suma = 0;
    			for (int i = 1; i <= n; ++i) {
        		suma += i;
    			}

    
    			cout << "La suma de los numeros desde 1 hasta " << n << " es: " << suma << endl;
    			system("pause");
                
                break;
            }
        }

        system("cls");

    } while (opc != 5);

    cout << "Fuera del programa";

    return 0;
}

