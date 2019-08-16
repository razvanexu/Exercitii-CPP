//
//  main.cpp
//  While
//
//  Created by Razvan Dumitrescu on 16/08/19.
//  Copyright © 2019 Razvan Dumitrescu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int number;
    int counter=0;
    
        while (counter != number) {
            cout << "Please insert a number, but not " <<counter<<"\n";
            cin >> number;
            if (counter != number) {
                counter ++;}
    }
    
    cout << "You have used the forbidden number!\n";
   
    return 0;
}
