#include<iostream>

using namespace std;

int main(){

  float notas[3];
  float pesos[3] = {2, 3, 5};
  float somaNotas = 0;
  float somaPesos = 0;
  float media = 0;

  for(int i=0; i < 3; i++){

    cout << "Insira a " << i+1 << "ª nota: ";

    cin >> notas[i];
    notas[i] = notas[i] * pesos[i];

    somaNotas = somaNotas + notas[i];
    somaPesos = somaPesos + pesos[i];
  }

  media = somaNotas/somaPesos;

  cout << "A média das notas é: " << media << endl;

}
