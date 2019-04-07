#include <iostream>
#include <stdlib.h>
#include <conio.h>


using namespace std;

class supermercgondola { public: void menuarroz(); void menuaceite(); };
struct varsgondola{int   op, CantARROZ, tt, TipoArroz, TipoAceite, CantAceite; float impuesto, subtotal;} varssg;

void supermercgondola::menuarroz()
{

    system("cls");
    cout<<"\n"
          "   _____  __  __ ____   ______ ____     __  ___ ______ ____   ______ ___     ____   ____     ____  ___ ___\n"
          "  / ___/ / / / // __ \\ / ____// __ \\   /  |/  // ____// __ \\ / ____//   |   / __ \\ / __ \\   / __ \\<  /<  /\n"
          "  \\__ \\ / / / // /_/ // __/  / /_/ /  / /|_/ // __/  / /_/ // /    / /| |  / / / // / / /  / /_/ // / / / \n"
          " ___/ // /_/ // ____// /___ / _, _/  / /  / // /___ / _, _// /___ / ___ | / /_/ // /_/ /   \\__, // / / /  \n"
          "/____/ \\____//_/    /_____//_/ |_|  /_/  /_//_____//_/ |_| \\____//_/  |_|/_____/ \\____/   /____//_/ /_/   \n"
          "                                                                                                          \n";
    cout<<"Seleccione un tipo de arroz \n";
    cout<<"=>1<=  ARROZ AMERICANO\n"<<endl;
    cout<<"=>2<=  ARROZ LA GARZA\n"<<endl;
    cout<<"=>3<=  ARROZ PIMCO\n "<<endl;
    cout<<"=>4<=  VOLVER al menu principal\n "<<endl;
    cin>>varssg.TipoArroz;

};
void supermercgondola::menuaceite()
{


    system("cls");
    cout<<" \n"
          "   _____  __  __ ____   ______ ____     __  ___ ______ ____   ______ ___     ____   ____     ____  ___ ___\n"
          "  / ___/ / / / // __ \\ / ____// __ \\   /  |/  // ____// __ \\ / ____//   |   / __ \\ / __ \\   / __ \\<  /<  /\n"
          "  \\__ \\ / / / // /_/ // __/  / /_/ /  / /|_/ // __/  / /_/ // /    / /| |  / / / // / / /  / /_/ // / / / \n"
          " ___/ // /_/ // ____// /___ / _, _/  / /  / // /___ / _, _// /___ / ___ | / /_/ // /_/ /   \\__, // / / /  \n"
          "/____/ \\____//_/    /_____//_/ |_|  /_/  /_//_____//_/ |_| \\____//_/  |_|/_____/ \\____/   /____//_/ /_/   \n"
          "                                                                                                           \n"<<endl;
    cout<<"Seleccione un tipo de Aceite a vender\n";
    cout<<" =>1<= ACEITE GIRASOL $250 (2.83L) \n"<<endl;
    cout<<" =>2<= ACEITE DIAMANTE $ 350 (2.83L)\n"<<endl;
    cout<<" =>3<= ACEITE WETSON $500 (2.83L)\n "<<endl;
    cout<<" =>4<= VOLVER al menu principal\n "<<endl;
    cin>>varssg.TipoAceite;

};

int main()
{supermercgondola obj;
    do{

        cout<<" \n"
              "   _____  __  __ ____   ______ ____     __  ___ ______ ____   ______ ___     ____   ____     ____  ___ ___\n"
              "  / ___/ / / / // __ \\ / ____// __ \\   /  |/  // ____// __ \\ / ____//   |   / __ \\ / __ \\   / __ \\<  /<  /\n"
              "  \\__ \\ / / / // /_/ // __/  / /_/ /  / /|_/ // __/  / /_/ // /    / /| |  / / / // / / /  / /_/ // / / / \n"
              " ___/ // /_/ // ____// /___ / _, _/  / /  / // /___ / _, _// /___ / ___ | / /_/ // /_/ /   \\__, // / / /  \n"
              "/____/ \\____//_/    /_____//_/ |_|  /_/  /_//_____//_/ |_| \\____//_/  |_|/_____/ \\____/   /____//_/ /_/   \n"
              "                                                                                                           \n"<<endl;
        cout<<" _________________________\n"
              "|                         |\n"
              "|                         |\n"
              "|  Prodcutos a vender     |  \n"
              "|_________________________|  \n "<<endl;
        cout<<"                                    \n "<<endl;

        cout<<"<=---------------------------------=>\n "<<endl;
        cout<<"Ingrese ==>(1) para vender Arroz\n "<<endl;
        cout<<"Ingrese ==>(2) para vender Aceite \n "<<endl;
        //  cout<<"Ingrese ==>3 Retornar al menu principal una vez ingrese a la opcion 1 o 2  \n "<<endl;
        cout<<"Ingrese ==>(3) SALIR \n "<<endl;
        cout<<"<=---------------------------------=>\n "<<endl;
        cout<<"Ingrese su opcion:\n";
        cin>>varssg.op;

        switch(varssg.op)
        {
            case 1:
            {obj.menuarroz();}

                switch(varssg.TipoArroz)
                {
                    case 1:
                        cout<<"Selecciono la opcion 1 => ARROZ AMERICANO\n "<<endl;
                        cout<<"Precio por Libra (LB)=> 24 /LB \n "<<endl;
                        // system("cls");
                        cout<<"Ingrese la cantidad a comprar en  de Arroz LB \n "<<endl;
                        cin >>varssg.CantARROZ;
                        varssg.tt=varssg.CantARROZ*24;
                        varssg.impuesto= varssg.tt*0.18;
                        cout<<"Cantidad comprada en LB:""=>" <<varssg.CantARROZ<<"\n "
                        "Subtotal => "<<varssg.tt<<"$ Pesos/\n"
                        "Impuesto =>" <<varssg.impuesto<<"\n Monto a pagar por la compra =>"
                        <<varssg.tt+varssg.impuesto<<"$ Pesos";


                        break;

                    case 2:
                        cout<<"Selecciono la opcion 2 => ARROZ La Garza\n "<<endl;
                        cout<<"Precio por Libra (LB)=> 30 /LB \n "<<endl;
                        //system("cls");
                        cout<<"Ingrese la cantidad a comprar en  de Arroz LB \n "<<endl;
                        cin >>varssg.CantARROZ;
                        varssg.tt = varssg.CantARROZ*30;
                        varssg.impuesto= varssg.tt*0.18;
                        cout<<"Cantidad comprada en LB:""=>" <<varssg.CantARROZ<<"\n "
                                                                                 "Subtotal => "<<varssg.tt<<"$ Pesos/\n"
                                                                                 "Impuesto =>" <<varssg.impuesto<<"\n Monto a pagar por la compra =>"
                                                                                                                  <<varssg.tt+varssg.impuesto<<"$ Pesos";


                        break;

                    case 3:
                        cout<<"Selecciono la opción 3 => ARROZ PIMCO\n "<<endl;
                        cout<<"Precio por Libra (LB)=> 32 /LB \n "<<endl;
                        // system("cls");
                        cout<<"Ingrese la cantidad a comprar en  de Arroz LB \n "<<endl;
                        cin >>varssg.CantARROZ;
                        varssg.tt = varssg.CantARROZ*32;
                        varssg.impuesto= varssg.tt*0.18;
                        cout<<"Cantidad comprada en LB:""=>" <<varssg.CantARROZ<<"\n"
                                                                                 " Subtotal => "<<varssg.tt<<"$ Pesos/\n"
                                                                                 "Impuesto =>" <<varssg.impuesto<<"\n Monto a pagar por la compra =>"
                                                                               <<varssg.tt+varssg.impuesto<<"$ Pesos";



                        break;

                    case 4:
                        cout<<"::::::::::Abandono la venta de ARROZ:::::\n "<<endl;
                        main();


                        break;


                }


                break;


            case 2:

                system("cls");
                cout<<" \n"
                      "   _____  __  __ ____   ______ ____     __  ___ ______ ____   ______ ___     ____   ____     ____  ___ ___\n"
                      "  / ___/ / / / // __ \\ / ____// __ \\   /  |/  // ____// __ \\ / ____//   |   / __ \\ / __ \\   / __ \\<  /<  /\n"
                      "  \\__ \\ / / / // /_/ // __/  / /_/ /  / /|_/ // __/  / /_/ // /    / /| |  / / / // / / /  / /_/ // / / / \n"
                      " ___/ // /_/ // ____// /___ / _, _/  / /  / // /___ / _, _// /___ / ___ | / /_/ // /_/ /   \\__, // / / /  \n"
                      "/____/ \\____//_/    /_____//_/ |_|  /_/  /_//_____//_/ |_| \\____//_/  |_|/_____/ \\____/   /____//_/ /_/   \n"
                      "                                                                                                           \n"<<endl;
                cout<<"Seleccione un tipo de Aceite a vender\n";
                cout<<" =>1<= ACEITE GIRASOL $250 (1LT) \n"<<endl;
                cout<<" =>2<= ACEITE DIAMANTE $ 350 (1LT)\n"<<endl;
                cout<<" =>3<= ACEITE WETSON $500 (1LT)\n "<<endl;
                cout<<" =>4<= VOLVER al menu principal\n "<<endl;
                cin>>varssg.TipoAceite;

                switch(varssg.TipoAceite)
                {
                    case 1:
                        cout<<"Selecciono la opcion 1 =>ACEITE GIRASOL\n "<<endl;
                        cout<<"Precio => $250 por cada (1LT)  \n "<<endl;
                        // system("cls");
                        cout<<"Ingrese la cantidad a comprar de acite ACEITE GIRASOL en litros (LT) \n "<<endl;
                        cin >>varssg.CantAceite;
                        varssg.tt = varssg.CantAceite*250;
                        varssg.impuesto= varssg.tt*0.18;
                        cout<<"Cantidad comprada en (Litros)LT:""=>" <<varssg.CantAceite<<""
                                                                                          "Subtotal => "<<varssg.tt<<"$ Pesos/\n"
                                                                                          "Impuesto =>" <<varssg.impuesto<<"\n Monto a pagar por la compra =>"
                                                                                           <<varssg.tt+varssg.impuesto<<"$ Pesos";

                        break;

                    case 2:
                        cout<<"Selecciono la opcion 2 =>ACEITE DIAMANTE\n "<<endl;
                        cout<<"Precio =>  $ 350 Por cada(1LT)  \n "<<endl;
                        // system("cls");
                        cout<<"Ingrese la cantidad a comprar de acite ACEITE GIRASOL  en litros (LT) \n "<<endl;
                        cin >>varssg.CantAceite;
                        varssg.tt = varssg.CantAceite*350;
                        varssg.impuesto= varssg.tt*0.18;
                        cout<<"Cantidad comprada en (Litros)LT:""=>" <<varssg.CantAceite<<
                            "Subtotal => "<<varssg.tt<<"$ Pesos/\n"
                            "Impuesto =>" <<varssg.impuesto<<"\n Monto a pagar por la compra =>"
                                                             <<varssg.tt+varssg.impuesto<<"$ Pesos";


                        break;


                    case 3:
                        cout<<"Selecciono la opcion 3 =>ACEITE WETSON ) "<<endl;
                        cout<<"Precio => $500 Por cada (1LT)  \n "<<endl;
                        //system("cls");
                        cout<<"Ingrese la cantidad a comprar de acite ACEITE WETSON \n "<<endl;
                        cin >>varssg.CantAceite;
                        varssg.tt = varssg.CantAceite*500;
                        varssg.impuesto= varssg.tt*0.18;
                        cout<<"Cantidad comprada en (Litros)LT:""=>" <<varssg.CantAceite<<"\nSubtotal => "<<varssg.tt<<"$ Pesos/\n"
                                                                                          "Impuesto =>" <<varssg.impuesto<<"\n Monto a pagar por la compra =>"
                                                                                        <<varssg.tt+varssg.impuesto<<"$ Pesos";

                        break;

                    case 4:
                        cout<<"::::::::::Abandono la venta de ACEITE:::::\n "<<endl;
                        main();

                        break;
                }

                break;
            case 3:
            {cout<<"Presione enter para salir";}
                {cout<<"Qué tenga buen día";}
                return 0;



                break;

            case 4:
            {cout<<"Presione enter para salir";}
                {cout<<"Qué tenga buen día";}
                return 0;
                break;

            default:{cout<<"Opcion no valida";}




        }
        getch();
        system("pause");
        system("cls");

        break;














    }while(varssg.op!=3);




}