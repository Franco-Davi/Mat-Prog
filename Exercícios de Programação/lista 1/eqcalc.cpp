#include<iostream>
#include<math.h>

using namespace std;

int main(){

  int b, c, aux;
  float n[2];
  
  cout << "Escreva dois números B e C, tais que B^2 > 4*C" << endl;

  cout << "B = ";
  cin >> b;
  cout << "C = ";
  cin >> c;

  aux = (b*b) - (4*c);

  for(int i=0; i < 2; i++){

    n[i] = (b + (pow(-1, i) * pow(aux, (1/2))))/2;

  }

  cout << "As raíses de uma equação Ax^2 + Bx + C = 0, onde A = 1, são " << n[1] << " e " << n[2] << endl;

}
