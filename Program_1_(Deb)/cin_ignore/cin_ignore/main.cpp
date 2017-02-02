//
//  main.cpp
//  cin_ignore
//
//  Created by Alan Trevino De Arcos on 2/9/15.
//  Copyright (c) 2015 Alan Trevino. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    string student_id;
    
    cout << "What is your student ID?\n\n";
    cin.ignore(4, 'c');
    
    cout << "Your Student ID is " << student_id ;
    
    return 0;
}
