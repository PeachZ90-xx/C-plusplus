//
//  main.cpp
//  dev
//
//  Created by Alan Trevino on 10/21/13.
//  Copyright (c) 2013 Alan Trevino. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string answer;
    
    // insert code here...
    cout<< "Hello, World!\n";
    cout<< "How are you doing today?\n";
    cin>> answer;
    
    //different answers
    if (answer == "great")
        {cout<< "Fantastic! I am glad!\n";
        return 0;}
    
    if (answer == "bad")
        {cout<< "I am sorry to hear that. Make sure to remember that the sun will shine\n";
        return 0;}
    
    return 0;
}

