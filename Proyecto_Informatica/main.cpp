#include <iostream>
#include <string>
using namespace std;
int main() {
    //Arrelos para la descripcion de los farmacos
    string nombrefarmacos[10]{"Ibuprofeno 100mg", "Nauseol 50mg", "PEPTO-BISMOL Cereza 236ml",
                              "VICK BEBE BALSAMO 50 GRS", "TABCIN GRIPE Y TOS LIQUI-GELS", "VITAMINA C 500 MG",
                              "AZITROMICINA 500MG", "ASPIRINA ADULTOS 500 MG", "BRONCUROL",
                              "DOLO TRIVIPLEX INYECTADO"};
    string descripcionfarmacos[10]{"Antiinflamatorio",
                                   "Medicamento para eliminar la naúseas, mareos y vómitos",
                                   "Medicamento usado para el tratamiento de la indigestión, el malestar estomacal, la diarrea",
                                   "Descongestion nasal",
                                   "Medicamento para aliviar la tos y la gripe",
                                   "Fortalece las defensas del organismo y ayuda a la cicatrizacion",
                                   "Antibiotico de amplio espectro",
                                   "Medicamento para tratar el dolor, la fiebre y la inflamación",
                                   "Medicamento para aliviar la tos y el resfriado",
                                   "Medicamento para aliviar dolores neuriticos"};
    string tipofarmaco[10]{"tabletas", "Bebible", "Bebible", "Gel", "tabletas", "tabletas", "tabletas", "tabletas",
                           "comprimidos", "inyeccion"};
    string cantidadfarmacos[10]{"100 tabletas", "2 ampollas", "", "", "12 tabletas", "20 tabletas", "12 tabletas",
                               "100 tabletas", "100 comprimidos", "2 ampollas",};
    float preciofarmacos[10]{186.95, 26.00, 64.99, 33.02, 26.95, 28.20, 559.98, 96.76, 104.75, 50.38};
    int existenciasfarmacos[10]{20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    int modulos;
    do {
        cout << "Ingrese al modulo que quiere ingresar\n";
        cout << "Para modulo de farmacia presione 1\n";
        cout << "Para modulo de seguros presione 2\n";
        cout << "Para modulo de reportes presione 3\n";
        cout << "Ingrese el numero 3 para finalizar el proceso\n";
        cin >> modulos;
        switch (modulos) {
            case 1: {
                int modulo1;
                int suma=0.0;
                int i=0;
                cout<<"Este modulo es para comprar productos, para salir de este modulo presione (0)"<<"\n";
                cout<<"Los productos que usted puede elegir son los siguientes: \n";
                cout<<"Presione (1) para elegir "<<nombrefarmacos[0]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[0]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[0]<<" "<<"("<<cantidadfarmacos[0]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [0]<<"\n";
                cout<<"\n";
                cout<<"Presione (2) para elegir "<<nombrefarmacos[1]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[1]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[1]<<" "<<"("<<cantidadfarmacos[1]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [1]<<"\n";
                cout<<"\n";
                cout<<"Presione (3) para elegir "<<nombrefarmacos[2]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[2]<<" "<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[2]<<" "<<"("<<cantidadfarmacos[2]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [2]<<"\n";
                cout<<"\n";
                cout<<"Presione (4) para elegir "<<nombrefarmacos[3]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[3]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[3]<<" "<<"("<<cantidadfarmacos[3]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [3]<<"\n";
                cout<<"\n";
                cout<<"Presione (5) para elegir "<<nombrefarmacos[4]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[4]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[4]<<" "<<"("<<cantidadfarmacos[4]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [4]<<"\n";
                cout<<"\n";
                cout<<"Presione (6) para elegir "<<nombrefarmacos[5]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[5]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[5]<<" "<<"("<<cantidadfarmacos[5]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [5]<<"\n";
                cout<<"\n";
                cout<<"Presione (7) para elegir "<<nombrefarmacos[6]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[6]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[6]<<" "<<"("<<cantidadfarmacos[6]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [6]<<"\n";
                cout<<"\n";
                cout<<"Presione (8) para elegir "<<nombrefarmacos[7]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[7]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[6]<<" "<<"("<<cantidadfarmacos[7]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [7]<<"\n";
                cout<<"\n";
                cout<<"Presione (9) para elegir "<<nombrefarmacos[8]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[8]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[8]<<" "<<"("<<cantidadfarmacos[8]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [8]<<"\n";
                cout<<"\n";
                cout<<"Presione (10) para elegir "<<nombrefarmacos[9]<<"\n";
                cout<<"Precio: Q"<<preciofarmacos[9]<<"\n";
                cout<<"Descripcion: "<<descripcionfarmacos[9]<<" "<<"("<<cantidadfarmacos[9]<<")"<<"\n";
                cout<<"Las existencias de este producto son: "<<existenciasfarmacos [9]<<"\n";

                do{
                    switch (modulo1)
                    {
                        case 0:
                        {
                            cout<<" ";
                        }
                        case 1:
                        {
                            suma=suma+preciofarmacos[0];
                            existenciasfarmacos [0]--;

                        }
                        case 2:
                        {
                            suma=suma+preciofarmacos[1];
                            existenciasfarmacos [1]--;
                        }
                        case 3:
                        {
                            suma=suma+preciofarmacos[2];
                            existenciasfarmacos [2]--;
                        }
                        case 4:
                        {
                            suma=suma+preciofarmacos[3];
                            existenciasfarmacos [3]--;
                        }
                        case 5:
                        {
                            suma=suma+preciofarmacos[4];
                            existenciasfarmacos [4]--;
                        }
                        case 6:
                        {
                            suma=suma+preciofarmacos[5];
                            existenciasfarmacos [5]--;
                        }
                        case 7:
                        {
                            suma=suma+preciofarmacos[6];
                            existenciasfarmacos [6]--;
                        }
                        case 8:
                        {
                            suma=suma+preciofarmacos[7];
                            existenciasfarmacos [7]--;
                        }
                        case 9:
                        {
                            suma=suma+preciofarmacos[8];
                            existenciasfarmacos [8]--;
                        }
                        case 10:
                        {
                            suma=suma+preciofarmacos[9];
                            existenciasfarmacos [9]--;
                        }
                            if (i!=0)
                            {
                                cout<<"Si ya no deseas seguir comprando un producto presiona 0";
                            }
                            i++;
                    }

                }
                while(modulo1!=0);


            }
            case 2: {

            }
            case 3: {

            }
            default: {
                cout << "Error ingrese un numero valido";
            }
        }

    }
    while (modulos != 3);
    return 0;
}
