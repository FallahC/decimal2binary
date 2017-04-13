#include <iostream>
#include <cmath>

using namespace std;

int a, b, c, answer_power, input, initial;

int main(){
cout << "Please input your decimal number to convert it into binary. ";
cin >> input;
initial = input;
c = 0;
    while (input > 0){                // This loop is to find the highest power of 2 that fits the input.
        if (input % 2 == 0){
            input = input / pow(2,1);
            answer_power = initial - pow(2,c);
            c = c + 1;
        }    
        else {
            input = input - 1;
        } 
            }

    a = initial;                      // a starts at the value that the user has chosen to convert.
    b = pow(2,c);                     // b starts at the highest power of 2 that fits a.

    while (c >= 0){                   // This loop is to do the actual conversion. It will input 1 when the next greatest power of 2 fits the remainder and 0 if it doesn't.
        if (a - b >= 0){              // Input 1 when the tested power of 2 fits the remainder.
            cout << "1" << endl;
            a = a - b;                // a is set as the remainder value after suastracting with the current tested power of 2.
            c = c - 1;                // The power of 2 that will be tested next is reduced by 1.
            b = pow(2,c);             // b is set as the value of the reduced power of 2.
            
        }
        else if (a - b < 0){          // Input 0 when the tested power of 2 is bigger than the remainder.
            cout << "0" << endl;
            c = c -1;                 // The power of 2 that will be tested next is reduced by 1.
            b = pow(2,c);             // b is set as the value of the reduced power of 2.
        }
    }
    return 0;      
        }
