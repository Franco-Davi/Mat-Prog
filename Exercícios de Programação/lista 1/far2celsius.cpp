#include<iostream>

using namespace std;

int main(){

  float far;
  float cel;

  cout << "Escreva uma temperatura em Farenheit: ";
  cin >> far;

  cel = (far-32.0)*(5.0/9.0);

  cout << "Em celsius isso é: " << cel << endl;

}
