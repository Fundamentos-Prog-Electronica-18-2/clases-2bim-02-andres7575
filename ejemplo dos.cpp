#include <iostream>

using namespace std;

// declaro una variable global  que se llame saldo
double saldo = 100;

void sumarSaldo(double s){
    saldo= saldo + s;
}
void restarSaldo (double s){
    saldo= saldo - s;
    if (s > saldo){
        cout << "SU SALDO ES INSUFICIENTE"<<endl;

    }
}

string obtenerTipoCuenta(){
    string frase = "";

    if (saldo <= 100){
        frase= " SU SALDO LE PERMITE SER CLIENTE DIPO D ";
    }else{
        if ((saldo >= 101 )& (saldo <=1000)){
            frase = " SU SALDO LE PERMITE SER CLIENTE TIPO C ";
        }else{
            if ((saldo >= 1001 )& (saldo <=10000)){
            frase = " SU SALDO LE PERMITE SER CLIENTE TIPO B ";
             }else{
            frase = " SU SALDO LE PERMITE SER CLIENTE TIPO A ";
        }
        }
    }
    return frase;
}
int  obtenerEdad (int a){
    int operacion = (2018 - a);
    return operacion;
}
int main ()
{
    int opcion = 0;
    double ingresoValor = 0;
    int anioNacimiento = 0;
    cout << " INGRESE AÑO DE NACIEMIENTO: "<< endl;
    cin>> anioNacimiento;
    cout<< "INGRESE OPCION: 1.Sumar 2. Restar"<< endl;
    cin>> opcion;

    if (opcion == 1){
            cout << "INGRESE VALOR A SUMAR " << endl;
            cin >> ingresoValor;
            sumarSaldo(ingresoValor);
            cout<< saldo <<endl;
    }else{
    if (opcion ==2){
        cout << "INGRESE VALOR A RESTAR"<< endl;
        cin >> ingresoValor;
        restarSaldo(ingresoValor);
        cout<< saldo <<endl;
    }else{
        cout<<"OPCION INCORRECTA, SU SALDO NO SE MODIFICA"<<endl;
}
    }
    cout << "Hola tu saldo es:   " << saldo << obtenerTipoCuenta()<<endl;

    int edad = obtenerEdad (anioNacimiento);
    cout << "SU EDAD ES "<< edad << endl;

    return 0;

}


