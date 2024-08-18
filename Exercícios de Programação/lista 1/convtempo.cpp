#include<iostream>

using namespace std;

int main(){

    int tempo;
    int horas;
    int minutos;
    int segundos;

    cout << "Insira uma quantidade de segundos: ";
    cin >> tempo;

    horas = tempo/3600;
    tempo = tempo%3600;

    minutos = tempo/60;
    tempo = tempo%60;

    segundos = tempo;

    cout << "Isso dá " <<horas << " hora(s), " << minutos << " minuto(s) e " << segundos << " segundo(s)." <<endl;

}
