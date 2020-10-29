/*
Author: Jara Juan Alberto Esequiel
Actividad: Escribir  un  programa  a  modo  de  calculadora  que  permita  mostrar  al  usuario  un  menú
conlas siguientes opciones:
1-Operación suma.
2-Operación resta.
3-Operación producto.
4-Operación división.
5-Raíz cuadrada.
6-Operación Potencia.
S-Salir del programa.
Luego,mediante switch,   deberá realizar   la   opción   seleccionada,   teniendo   encuenta   las siguientes consideraciones:
–Para guardar el resultado de la división de dos enteros se necesita una variable de tipoflotante.
-El valor del denominador no puede ser 0(cero), mostrar “Error”sieso sucede.
–Para obtener los resultados de las siguientes operaciones puede recurrir a las funciones:
Raízcuadrada-> sqrt(x)Potencia ->pow(b,e)Las funciones mencionadas se encuentran en la librería <cmath>
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char **argv)
{
    char op;
    int nro1 = 0, nro2 = 0;
    float total = 0;

    while (op != 'S' && op != 's')
    {
        cout << "- CALCULADORA -" << endl;
        cout << "1-Operacion suma." << endl;
        cout << "2-Operacion resta." << endl;
        cout << "3-Operacin producto." << endl;
        cout << "4-Operacion division." << endl;
        cout << "5-Raiz cuadrada." << endl;
        cout << "6-Operacion potencia." << endl;
        cout << "S-Salir del programa." << endl;
        cout << "-> Ingrese el nro o letra de la opcion deseada: " << endl;
        cin >> op;

        switch (op)
        {
        case '1':
            cout << "Ingrese un numero a sumar: " << endl;
            cin >> nro1;
            cout << "Ingrese otro numero a sumar: " << endl;
            cin >> nro2;

            total = nro1 + nro2;
            break;
        case '2':
            cout << "Ingrese el minuendo: " << endl;
            cin >> nro1;
            cout << "Ingrese el sustraendo: " << endl;
            cin >> nro2;

            total = nro1 - nro2;
            break;
        case '3':
            cout << "Ingrese un factor: " << endl;
            cin >> nro1;
            cout << "Ingrese otro factor: " << endl;
            cin >> nro2;

            total = nro1 * nro2;
            break;
        case '4':
            cout << "Ingrese el numerador: " << endl;
            cin >> nro1;
            cout << "Ingrese el denominador: " << endl;
            cin >> nro2;

            total = nro1 / nro2;
            break;
        case '5':
            cout << "Ingrese el numerador: " << endl;
            cin >> nro1;
            cout << "Ingrese el denominador: " << endl;
            cin >> nro2;

            total = nro1 / nro2;
            break;
        case '6':
            cout << "Ingrese el numero para saber su raiz cuadrada: " << endl;
            cin >> nro1;
            nro2 = 0;

            total = pow(nro1, 2);
            break;
        case 'S':
        case 's':
            cout << "- Cerrando Programa -" << endl;
            break;
        default:
            cout << "- ERROR - Opcion invalida" << endl;
            break;
        }

        cout << "Total: " << total << endl << endl;
    }

    return 0;
}