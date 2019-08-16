//
//  Cola_machine.cpp
//  Grade
//
//  Created by Razvan Dumitrescu on 16/08/19.
//  Copyright © 2019 Razvan Dumitrescu. All rights reserved.
//


#include <iostream>

using namespace std;

int main (){
    
    int bev;
    cout << "Please select a beverage:\n 1: Coca-Cola\n 2: Fanta\n 3: Sprite\n 4: Schweppes\n 5: water\n";
    cin >> bev;
    
    switch (bev) {
        case 1:
            cout << "You have selected Coca-Cola"<<"\n";
            break;
        case 2:
            cout << "You hagve selected Fanta"<<"\n";
            break;
        case 3:
            cout << "You have selected Sprite"<<"\n";
            break;
        case 4:
            cout << "You have selected Schweppes"<<"\n";
            break;
        case 5:
            cout << "You have selected water"<<"\n";
            
        default:
            cout << "Error. choice was not valid, here is your money back.\n";
            break;
    }
    
    return 0;
}
