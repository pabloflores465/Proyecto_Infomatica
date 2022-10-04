#include <iostream>
#include <string>

using namespace std;

int main() {
    //NO TOCAR Seleccion de los modulos
    int modulos;

    //Arrelos para la descripcion de los farmacos
    //Modulo 1
    //Tipos de Farmacos
    string nombrefarmacos[10]{
        "Ibuprofeno 100mg",
        "Nauseol 50mg",
        "PEPTO-BISMOL Cereza 236ml",
        "VICK BEBE BALSAMO 50 GRS",
        "TABCIN GRIPE Y TOS LIQUI-GELS",
        "VITAMINA C 500 MG",
        "AZITROMICINA 500MG",
        "ASPIRINA ADULTOS 500 MG",
        "BRONCUROL",
        "DOLO TRIVIPLEX INYECTADO",
    };

    //Modulo 1
    //Descripcion de Medicamentos
    string descripcionfarmacos[10]{
        "Antiinflamatorio",
        "Medicamento para eliminar la naúseas, mareos y vómitos",
        "Medicamento usado para el tratamiento de la indigestión, el malestar estomacal, la diarrea",
        "Descongestion nasal",
        "Medicamento para aliviar la tos y la gripe",
        "Fortalece las defensas del organismo y ayuda a la cicatrizacion",
        "Antibiotico de amplio espectro",
        "Medicamento para tratar el dolor, la fiebre y la inflamación",
        "Medicamento para aliviar la tos y el resfriado",
        "Medicamento para aliviar dolores neuriticos"
    };

    //Modulo 1
    //Presentacion del Farmaco
    string tipofarmaco[10]{
        "tabletas",
        "Bebible",
        "Bebible",
        "Gel",
        "tabletas",
        "tabletas",
        "tabletas",
        "tabletas",
        "comprimidos",
        "inyeccion"
    };

    //Modulo 1
    //Tamaño del farmaco
    string cantidadfarmacos[10]{
        "100 tabletas",
        "2 ampollas",
        "",
        "",
        "12 tabletas",
        "20 tabletas",
        "12 tabletas",
        "100 tabletas",
        "100 comprimidos",
        "2 ampollas",
    };

    //Modulo 1
    //Precio de los farmacos
    float preciofarmacos[10]{
        186.95,
        26.00,
        64.99,
        33.02,
        26.95,
        28.20,
        559.98,
        96.76,
        104.75,
        50.38
    };

    //Modulo 1
    //Existencias de los farmacos
    int existenciasfarmacos[10]{
        20,
        20,
        20,
        20,
        20,
        20,
        20,
        20,
        20,
        20
    };

    //Modulo 2
    //Aseguradoras Usadas
    string aseguradora[5]{
            "Seguros GyT",
            "Seguro Agromercantil",
            "Aseguradora General, S.A.",
            "Seguros El Roble",
            "Mapfre"
    };
    //Modulo 2
    //Taza de descuento fija
    float tazaDescuento[5]{
            0.25,
            0.60,
            0.40,
            0.5,
            0.75,
    };

    do {
        cout << "Para modulo de farmacia presione 1\n";
        cout << "Para modulo de seguros presione 2\n";
        cout << "Para modulo de reportes presione 3\n";
        cout << "Ingrese el numero 4 para finalizar el proceso\n";
        cout<<"Escriba aqui el modulo al que quiere acceder\n";
        cin >> modulos;
        switch (modulos) {
            case 1: {
                int modulo1;
                float suma=0.0;
                int i=0;
                cout<<"Este modulo es para comprar productos, para salir de este modulo presione (0)\n"<<endl;

                cout<<"Los productos que usted puede elegir son los siguientes: \n";

                cout<<"Presione (1) para elegir "<<nombrefarmacos[0]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[0]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[0]<<" "<<"("<<cantidadfarmacos[0]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [0]<<"\n\n";

                cout<<"Presione (2) para elegir "<<nombrefarmacos[1]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[1]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[1]<<" "<<"("<<cantidadfarmacos[1]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [1]<<"\n\n";

                cout<<"Presione (3) para elegir "<<nombrefarmacos[2]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[2]<<" "<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[2]<<" "<<"("<<cantidadfarmacos[2]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [2]<<"\n\n";

                cout<<"Presione (4) para elegir "<<nombrefarmacos[3]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[3]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[3]<<" "<<"("<<cantidadfarmacos[3]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [3]<<"\n\n";

                cout<<"Presione (5) para elegir "<<nombrefarmacos[4]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[4]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[4]<<" "<<"("<<cantidadfarmacos[4]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [4]<<"\n\n";


                cout<<"Presione (6) para elegir "<<nombrefarmacos[5]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[5]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[5]<<" "<<"("<<cantidadfarmacos[5]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [5]<<"\n\n";

                cout<<"Presione (7) para elegir "<<nombrefarmacos[6]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[6]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[6]<<" "<<"("<<cantidadfarmacos[6]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [6]<<"\n\n";

                cout<<"Presione (8) para elegir "<<nombrefarmacos[7]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[7]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[6]<<" "<<"("<<cantidadfarmacos[7]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [7]<<"\n\n";

                cout<<"Presione (9) para elegir "<<nombrefarmacos[8]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[8]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[8]<<" "<<"("<<cantidadfarmacos[8]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [8]<<"\n\n";

                cout<<"Presione (10) para elegir "<<nombrefarmacos[9]<<"\n"
                    <<"Precio: Q"<<preciofarmacos[9]<<"\n"
                    <<"Descripcion: "<<descripcionfarmacos[9]<<" "<<"("<<cantidadfarmacos[9]<<")"<<"\n"
                    <<"Las existencias de este producto son: "<<existenciasfarmacos [9]<<"\n\n";

                do{
                    cout<<"Escriba aqui el numero del medicamento que quiere elegir";
                    if (i!=0)
                    {
                        cout<<" o si ya no deseas seguir comprando un producto presiona 0\n";
                    }
                    else
                    {
                        cout<<"\n";
                    }
                    i++;
                    cin>>modulo1;
                    switch (modulo1)
                    {
                        case 0:
                        {
                            cout<<" ";
                            break;
                        }
                        case 1:
                        {
                            suma=suma+preciofarmacos[0];
                            existenciasfarmacos [0]--;
                            break;

                        }
                        case 2:
                        {
                            suma=suma+preciofarmacos[1];
                            existenciasfarmacos [1]--;
                            break;
                        }
                        case 3:
                        {
                            suma=suma+preciofarmacos[2];
                            existenciasfarmacos [2]--;
                            break;
                        }
                        case 4:
                        {
                            suma=suma+preciofarmacos[3];
                            existenciasfarmacos [3]--;
                            break;
                        }
                        case 5:
                        {
                            suma=suma+preciofarmacos[4];
                            existenciasfarmacos [4]--;
                            break;
                        }
                        case 6:
                        {
                            suma=suma+preciofarmacos[5];
                            existenciasfarmacos [5]--;
                            break;
                        }
                        case 7:
                        {
                            suma=suma+preciofarmacos[6];
                            existenciasfarmacos [6]--;
                            break;
                        }
                        case 8:
                        {
                            suma=suma+preciofarmacos[7];
                            existenciasfarmacos [7]--;
                            break;
                        }
                        case 9:
                        {
                            suma=suma+preciofarmacos[8];
                            existenciasfarmacos [8]--;
                            break;
                        }
                        case 10:
                        {
                            suma=suma+preciofarmacos[9];
                            existenciasfarmacos [9]--;
                            break;
                        }
                    }
                }
                while(modulo1!=0);
            break;
            }
            case 2: {
                //Inicia el Modulo 2
                int seguro=0;
                //Variable que selecciona el seguro

                //Pido al usuario que ingrese el seguro
                cout<<"Módulo de Seguros"<<endl;
                cout<<"Para ver información de copagos (descuento sobre medicinas), por favor elija su aseguradora (ingrese un dígito)"<<endl;
                cout<<"0=Seguros GyT\n"
                    <<"1=Seguro Agromercantil\n"
                    <<"2=Aseguradora General, S.A.\n"
                    <<"3=Seguros el Roble\n"
                    <<"4=Mapfre\n";
                cin>>seguro;

                //Aqui se Muestra la informacion de la aseguradora seleccionada
                switch(seguro) {
                    //Seguros GyT
                    case 0: {
                        cout << aseguradora[seguro] << endl;
                        cout << "Su copago es: \n"
                             << (tazaDescuento[seguro]) * 100 << "%" << endl;
                        break;
                    }
                    //Seguro Agromercantil
                    case 1: {
                        cout << aseguradora[seguro] << endl;
                        cout << "Su copago es: \n"
                             << (tazaDescuento[seguro]) * 100 << "%" << endl;
                        break;
                    }
                        //Aseguradora General, S.A.
                    case 2: {
                        cout << aseguradora[seguro] << endl;
                        cout << "Su copago es: \n"
                             << (tazaDescuento[seguro]) * 100 << "%" << endl;
                        break;
                    }
                    //Seguros El Roble
                    case 3: {
                        cout << aseguradora[seguro] << endl;
                        cout << "Su copago es: \n"
                             << (tazaDescuento[seguro]) * 100 << "%" << endl;
                        break;
                    }
                    //Mapfre
                    case 4: {
                        cout << aseguradora[seguro] << endl;
                        cout << "Su copago es: \n"
                             << (tazaDescuento[seguro]) * 100 << "%" << endl;
                        break;
                    }
                    //Mensaje de Error
                    default: {
                        cout << "Error no se seleccionó un valor válido" << endl;
                        break;
                    }
                }
            }
            case 3: {

            }
            default: {
                cout << "Error ingrese un numero valido";
                break;
            }
        }

    }
    while (modulos != 4);

    return 0;
}
