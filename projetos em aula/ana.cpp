#include<iostream>

using namespace std;

int main(){

        int cont;
        float Vat, Vmax, Vmin, vVmax, vVmin;

        cont = 1;

        Vmax = 0;
        Vmin = 1079252849;

        cout << "Insira as velocidades nas voltas: " << endl << endl;

        while(1){

                cin >> Vat;

                if(Vat == -1) break;

                if(Vat > Vmax){

                        Vmax = Vat;
                        vVmax = cont;

                }
                if(Vat < Vmin){

                        Vmin = Vat;
                        vVmin = cont;

                }

                cont++;

        }

        cout << endl << "Total de voltas: " << cont - 1 << endl;
        cout << "Maior Velocidade: " << Vmax << " (volta " << vVmax << ")" << endl;
        cout << "Menor Velocidade: " << Vmin << " (volta " << vVmin << ")" << endl;

}
