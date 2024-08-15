#include<iostream>

using namespace std;

int main(){
        
        int mes, tent;

        system("clear");

        cout << "Digite seu mes de aniversario: ";
        cin >> mes;

        system("clear");

        while(1){

                cout << "Qual seu palpite? R: ";
                cin >> tent;
        
                if(tent > mes){
                        cout << "antes disso, tente novamente" << endl;
                }else if(tent < mes){
                        cout << "depois disso, tente novamente" << endl;
                }else{
                        cout << "acertou!" << endl;
                        break;
                }
        }

}
