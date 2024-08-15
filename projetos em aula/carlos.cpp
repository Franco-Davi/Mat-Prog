#include<iostream>
#include<math.h>

using namespace std;


int eq(int x, int y){

        int r;

        r = pow(x, 2) + 3*y - 10;

        return r;

}

int main(){
        
        int n1, n2;
        int x, y;
        int res = 1;

        while(res != 0){

                cout << endl << "digite dois valores" << endl;
                cin >> n1 >> n2;

                if(n1 > n2){

                        x = n1;
                        y = n2;

                } else{

                        x = n2;
                        y = n1;
        
                }

                res = eq(x, y);
                cout << res;

        }

        cout << endl;

}
