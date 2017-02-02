//
//  main.cpp
//  rand_gen
//
//  Created by Alan Trevino De Arcos on 2/11/15.
//  Copyright (c) 2015 Alan Trevino. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    unsigned lucky, seed;
    seed = time_t();
    lucky = rand() % 100 + 1;
    
    cout << "And your lucky number is . . . " << lucky << "\n\n";
    
    
    return 0;
}
