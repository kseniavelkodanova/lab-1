/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    // Дано два кола із загальним центром і радіусами R1 і R2 (R1> R2). 
    // Знайти площі цих кіл S1 і S2, а також площа S3 кільця, 
    // зовнішній радіус якого дорівнює R1, а внутрішній радіус дорівнює R2: 
    // S1 = π · (R1) 2, S2 = π · (R2) 2, S3 = S1 - S2.
    // Значення π вважати рівним 3.14.
    
    double R1, R2, S1, S2, S3;
    const double pi = 3.14;
    
    // введення змінних
    cout << "Enter radiuses R1, R2: ";
    cin >> R1 >> R2;
    
    // розрахунок результату
    S1 = pi * R1 * R1;
    S2 = pi * R2 * R2;
    S3 = S1 - S2;
    
    // вивід результату 
    cout << "Square S1: " << S1 << endl;
    cout << "Square S2: " << S2 << endl;
    cout << "Square S3: " << S3 << endl;
}    
    
   