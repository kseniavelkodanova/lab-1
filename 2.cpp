/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// введення функції pow
#include <cmath>

using namespace std
  ;int main () 
  {
    // Знайти значення функції y = 4 (x-3) 6 - 7 (x-3) 3 + 2 
    // при даному значенні x.
    float x, y;
    
    // введення змінних
    cout << "Введіть значення х: ";
    cin >> x;
    
    // розрахунок результату
    y = 4 * pow(x - 3, 6) - 7 * pow(x -3, 3) + 2;
    
    // вивід результату 
    cout << "Значення функції у = 4 * (х - 3)^6 - 7 * (x - 3)^3 +2: " << y << endl;
    
    
    
    
    
    
    
}