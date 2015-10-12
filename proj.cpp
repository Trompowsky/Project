#include "proj.h"
#include <iostream>

using namespace std;
int abundant(int a, int counter){
while (a <= counter){
int abundancy = 0;
int div = 1;
    while (div < a){

        if (a% div == 0){

            abundancy+=div;
            div++;
        }else{
            div++;
        }
    }
    if (abundancy > a){
        cout << a << " IS ABUNDANT" << endl;
        }
    if (abundancy == a){
    cout << a << " IS PERFECT" << endl;
    }
    if (abundancy < a){
    cout << a << " IS DEFICIENT" << endl;
    }
a++;
}
}
