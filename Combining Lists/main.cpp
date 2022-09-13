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
    number List1; //list
    number List2;
    
    
    string input, input2;

    //reads integer inputs as string value, inlcuding whitepsaces
    getline(cin, input);
    getline(cin, input2);

    stringstream ss(input);
    stringstream ss2(input2);
    int num;
    int num2;

    while(ss>>num) {
      List1.insert(num);
    }
    while(ss2>>num2) {
        List2.insert(num2);
    }

    cout << "LIST 1: ";
    List1.print();
    cout << endl;
    
    cout << "LIST 2: ";
    List2.print();
    cout << endl;
    
    number List3;
    List3.merge(List1,List2, List3);
    cout<<"printing new list:" << endl;
    List3.print();
    cout << endl;
    
    return 0;
}
