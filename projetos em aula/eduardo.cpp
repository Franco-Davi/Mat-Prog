#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

#define DIM_X 11
#define DIM_Y 11

int main(){

  int Vec[DIM_X][DIM_Y];

  for(int i = 0; i < DIM_X; i++){
  
    for(int j = 0; j < DIM_Y; j++){

      Vec[i][j] = i*j;
    }
  
  }

for(int i = 0; i < DIM_X; i++){

    for(int j = 0; j < DIM_Y; j++){

      cout << Vec[i][j] << " ";
   
    }
  
  cout << "\n";

  }

}
