#include <iostream>
using namespace std;
int main()
{
    float a;
    cout << "EJERCICIO 1" << endl;
    cout << "Ingrese la cantidad de dinero gastado en un mes: " << endl;
    cin >> a;
    if (a == 1500) {
        cout << "Gasto moderado" << endl;
    }
    if (a > 1500) {
        cout << "Gasto considerable" << endl;
    }
    if (a < 1500) {
        cout << "Gasto menor" << endl;
    }
    system("pause");
    int b;
    int num2;
    cout << "EJERCICIO 2" << endl;
    cout << "Ingrese un nuemro de 1 a 10" << endl;
    cin >> b;
    if (b == 7) {
        cout << "No tienes la buena suerte" << endl;
    }
    if (b != 7) {
        cout << "Tienes la buena suerte" << endl;
    }
    if (b >= 11) {
        cout << "No siguio las instrucciones indicadas, vuelva a ingresar un valor en el rango de 1 a 10" << endl;
    }
    system("pause");
    int c;
    int d;
    cout << "EJERCICIO 3" << endl;
    cout << "Ingrese 2 numeros enteros positivos para una division" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> c;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> d;
    if ((c / d) == 0) {
        cout << "La division es exacta" << endl;
    }
    else {
        cout << "La division no es exacta" << endl;
    }
    system("pause");
    int e;
    int f;
    int g;
    cout << "EJERCICIO 4" << endl;
    cout << "Ingrese 3 numeros enteros" << endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> e;
    cout << "Ingrese el segundo numero " << endl;
    cin >> f;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> g;
    if (e > f && e > g) {
        cout << "El numero mayor es: " << e << endl;
    }
    else if (f > e && f > g) {
        cout << "El numero mayor es: " << f << endl;
    }
    else if (g > e && g > f) {
        cout << "El numero mayor es: " << g << endl;
    }
    system("pause");
    int h;
    cout << "EJERCICIO 7" << endl;
    cout << "Ingrese un año: " << endl;
    cin >> h;
    if ((h % 4) == 0) {
        cout << "El año es bisiesto" << endl;
    }
    else {
        cout << "El año no es bisiesto" << endl;
    }
    system("pause");
    int i;
    int j;
    int var2;
    int var3;
    cout << "EJERCICIO 9" << endl;
    cout << "Ingrese una hora: " << endl;
    cin >> i;
    cout << "Ingrese los minutos: " << endl;
    cin >> j;
    if (i >= 24) {
        cout << "La hora no es correcta, debe utilizar numeros en el rango de 0 a 23" << endl;
    }
    if (j > 59) {
        cout << "Los minutos no son correctos, debe utilizar el rango estipulado"<<endl;
    }
    else {
        cout << "La hora es: " << i << ':' << j << endl;
    }
    system("pause");
    int k;
    float l;
    cout << "EJERCICIO 10" << endl;
    cout << "Ingrese un numero entero: " << endl;
    cin >> k;
    cout << "Ingrese un numero con decimales: " << endl;
    cin >> l;
    if (k > l) {
        cout << k << "Es mayor que: "<<l<<endl;
    }
    else if (k < l) {
        cout << k<<"Es menor que: " << l << endl;
    }
    else if (k == l) {
        cout << k << "Es igual a: " << l<< endl;
    }
    cout <<"La diferencia es de: "<< (k - l) << endl;
}