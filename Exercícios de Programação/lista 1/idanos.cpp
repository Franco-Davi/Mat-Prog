#include<iostream>

using namespace std;

int main(){

  int idade;
  int anos;
  int meses;
  int dias;

  cout << "Digite uma quantidade de dias: ";
  cin >> idade;

  anos = idade/360;
  idade = idade%360;

  meses = idade/30;
  idade = idade%30;

  dias = idade;

  cout << "Isso dá " << anos << " anos, " << meses << " meses e " << dias << " dias!" << endl;

}
