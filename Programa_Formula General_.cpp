#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class formulagen{ public: void fgenposi(); void fgennega(); int x1,x2,a,b,c,op;};

void formulagen::fgenposi()
{
cout<<"\nMENU 1 <::>FORMULA GENERAL POSITIVA<::>\n";
    cout<<"\nINGRESA EL PRIMER NUMERO\n";
    cin>>a;
    cout<<"\nINGRESA EL SEGUNDO NUMERO\n";
    cin>>b;
    cout<<"\nINGRESA EL TERCER NUMERO\n";
    cin>>c;

    x1=(-b+(sqrt(b*b-4*a*b)))/(2*a);
    cout<<"\nRESULTADO :\n"<<x1;
}

void formulagen::fgennega()
{
    cout<<"\nMENU 2 <::>FORMULA GENERAL NEGATIVA<::>\n";
    cout<<"\nINGRESA EL PRIMER NUMERO\n";
    cin>>a;
    cout<<"\nINGRESA EL SEGUNDO NUMERO\n";
    cin>>b;
    cout<<"\nINGRESA EL TERCER NUMERO\n";
    cin>>c;

    x1=(-b-(sqrt(b*b-4*a*b)))/(2*a);
    cout<<"\nRESULTADO :\n"<<x2;
}


int main ()

{ int op=1; formulagen obj;
    do{
        cout<<"\n SELECCIONE LA OPCION DESEADA:: FORMULA GENERAL::\n";
        cout<<"\n INGRESE 1 :: FORMULA GENERAL POSITIVA::\n";
        cout<<"\n INGRESE 2 :: FORMULA GENERAL NEGATIVA::\n";
        cin>>op;
        if(op==1)
        {
            {obj.fgenposi();}
        }

        else if(op==2)
        {
            {obj.fgennega();}

        }

        else
        {
            cout<<"OPCION no VALIDA";

        }



    } while (op!=3);






}