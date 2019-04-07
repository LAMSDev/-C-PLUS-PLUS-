#include<iostream>
#include<stdlib.h>
#include <conio.h>

using namespace std;

main()
{
    int   op, CantARROZ, tt, TipoArroz, TipoAceite, CantAceite;

    while(op !=3)

    {

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
        cin>>op;

        switch(op)
        {
            case 1:

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
                cin>>TipoArroz;

                switch(TipoArroz)
                {
                    case 1:
                        cout<<"Selecciono la opcion 1 => ARROZ AMERICANO\n "<<endl;
                        cout<<"Precio por Libra (LB)=> 24 /LB \n "<<endl;
                       // system("cls");
                        cout<<"Ingrese la cantidad a comprar en  de Arroz LB \n "<<endl;
                        cin >>CantARROZ;
                        tt =CantARROZ*24;
                        cout<<"Cantidad comprada en LB:""=>" <<CantARROZ<<"\n Precio a pagar => $24 Pesos/LB \n Monto a pagar por la compra =>"<<tt<<"$ Pesos";

                        break;

                    case 2:
                        cout<<"Selecciono la opcion 2 => ARROZ La Garza\n "<<endl;
                        cout<<"Precio por Libra (LB)=> 30 /LB \n "<<endl;
                        //system("cls");
                        cout<<"Ingrese la cantidad a comprar en  de Arroz LB \n "<<endl;
                        cin >>CantARROZ;
                        tt = CantARROZ*30;
                        cout<<"Cantidad comprada en LB:""=>" <<CantARROZ<<"\n Precio a pagar => $30 Pesos/LB \n Monto a pagar por la compra =>"<<tt<<"$ Pesos";


                        break;

                    case 3:
                        cout<<"Selecciono la opción 3 => ARROZ PIMCO\n "<<endl;
                        cout<<"Precio por Libra (LB)=> 32 /LB \n "<<endl;
                       // system("cls");
                        cout<<"Ingrese la cantidad a comprar en  de Arroz LB \n "<<endl;
                        cin >>CantARROZ;
                        tt = CantARROZ*32;
                        cout<<"Cantidad comprada en LB:""=>" <<CantARROZ<<"\n Precio a pagar => $32 Pesos/LB \n Monto a pagar por la compra =>"<<tt<<"$ Pesos";



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
                cout<<" =>1<= ACEITE GIRASOL $250 (2.83L) \n"<<endl;
                cout<<" =>2<= ACEITE DIAMANTE $ 350 (2.83L)\n"<<endl;
                cout<<" =>3<= ACEITE WETSON $500 (2.83L)\n "<<endl;
                cout<<" =>4<= VOLVER al menu principal\n "<<endl;
                cin>>TipoAceite;

                 switch(TipoAceite)
                 {
                     case 1:
                         cout<<"Selecciono la opcion 1 =>ACEITE GIRASOL\n "<<endl;
                         cout<<"Precio => $250 por cada (2.83L)  \n "<<endl;
                         // system("cls");
                         cout<<"Ingrese la cantidad a comprar de acite ACEITE GIRASOL en litros (LT) \n "<<endl;
                         cin >>CantAceite;
                         tt = CantAceite*250;
                         cout<<"Cantidad comprada en (Litros)LT:""=>" <<CantAceite<<"\n Precio a pagar => $250 Pesos/2.83 LT \n Monto a pagar por la compra =>"<<tt<<"$ Pesos";

                         break;

                     case 2:
                         cout<<"Selecciono la opcion 2 =>ACEITE DIAMANTE\n "<<endl;
                         cout<<"Precio =>  $ 350 Por cada(2.83L)  \n "<<endl;
                         // system("cls");
                         cout<<"Ingrese la cantidad a comprar de acite ACEITE GIRASOL  en litros (LT) \n "<<endl;
                         cin >>CantAceite;
                         tt = CantAceite*350;
                         cout<<"Cantidad comprada en (Litros)LT:""=>" <<CantAceite<<"\n Precio a pagar => $550 Pesos/2.83 LT \n Monto a pagar por la compra =>"<<tt<<"$ Pesos";


                         break;


                     case 3:
                         cout<<"Selecciono la opcion 3 =>ACEITE WETSON ) "<<endl;
                         cout<<"Precio => $500 Por cada (2.83L)  \n "<<endl;
                         //system("cls");
                         cout<<"Ingrese la cantidad a comprar de acite ACEITE WETSON \n "<<endl;
                         cin >>CantAceite;
                         tt = CantAceite*500;
                         cout<<"Cantidad comprada en (Litros)LT:""=>" <<CantAceite<<"\n Precio a pagar => $500 Pesos/2.83 LT \n Monto a pagar por la compra =>"<<tt<<"$ Pesos";

                         break;

                     case 4:
                         cout<<"::::::::::Abandono la venta de ACEITE:::::\n "<<endl;
                         main();

                         break;
                 }

                break;
            case 3:
                main();



                break;

            case 4:
                return 0;



                break;


    
        }
        getch();
        system("pause");
        system("cls");

        break;



    }
}
