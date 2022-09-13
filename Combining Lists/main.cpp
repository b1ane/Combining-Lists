//
//  main.cpp
//  Combining Lists
//
//  Created by blane on 9/12/22.
//

#include <iostream>
#include "list.h"
using namespace std;
#include <string>
#include <sstream>


int main() {
    number n1; //list
    
    
    string input;

    //reads integer inputs as string value, inlcuding whitepsaces
    getline(cin, input);

    stringstream ss(input);
    int num;

    while(ss>>num) {
      n1.insert(num);
    }

    n1.print();
    cout << endl;
    
    return 0;
}
