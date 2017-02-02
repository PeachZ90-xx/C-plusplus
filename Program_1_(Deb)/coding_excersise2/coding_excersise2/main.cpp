//
//  main.cpp
//  coding_excersise2
//  This is an in class exercise answer sheet.
//
//  Created by Alan Trevino De Arcos on 2/15/15.
//  Copyright (c) 2015 Alan Trevino. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "===========================\n";
    cout << "          Part             \n";
    cout << "          One              \n";
    cout << "===========================\n\n\n\n";
    
    double r, R, Pi, volume;
    
    Pi = 3.1415;
    r = 4;
    R = 6;
    
    
    volume = ( 2 * ( ( pow ( Pi , 2 ) * R * ( pow( r , 2)) ) ) );
                    
    cout << "The Volume of the torus is " << volume << "\n\n";
    
    
    cout << "===========================\n";
    cout << "          Part             \n";
    cout << "          Two              \n";
    cout << "===========================\n\n\n\n";
    
    
     
    cout << "X += 10; \n";
     
    cout << "total += tax; \n";
     
    cout << "inv -= shrinkage; \n";
     
    cout << "num %= 6; \n\n";
    
    
    cout << "===========================\n";
    cout << "          Part             \n";
    cout << "          Three            \n";
    cout << "===========================\n\n\n\n";
    
    double dollars1, dollars2;
    
    cout << "Hoq many dollars do you want to convert to Euros?\n";
    cin >> dollars1;
    // getline does not work on mac. Shame.
    
    cout << "How many dollars do you want to convert to ¥en?\n";
    cin >> dollars2;
    
    dollars1 /= 0.88;
    dollars2 /= 118.74;
    
    
    cout << "\n\n\nIn Euros, you will get €" << fixed << showpoint << setprecision(2) << dollars1 << ".\n";
    cout << "In ¥en, you will get ¥"  << fixed << showpoint << setprecision(2) << dollars2 << "\n\n\n";
    
    
    
    cout << "===========================\n";
    cout << "          Part             \n";
    cout << "          Four             \n";
    cout << "===========================\n\n\n\n";

    
    double cels, fahr, c_convert, f_convert;
    
    cout << "What is the Fahrenheit temperature\n";
    cin >> fahr;
    
    cout << "\nWhat is the Celsius temperature?\n";
    cin >> cels;
    
    
    f_convert = ( ( ( 9 * cels ) / 5 ) + 32 );
    c_convert = ( ( (fahr - 32) * 5 ) / 9 );
    
    cout << "\n\n" << fahr << "º F converted to Celsius is " << c_convert <<"º C.\n";
    cout << cels << "º C converted to Fahrenheit is " << f_convert << "º F.\n\n\n";
    
    
    
    cout << "===========================\n";
    cout << "          Part             \n";
    cout << "          Five             \n";
    cout << "===========================\n\n\n\n";

    
    srand(seed);
    int num1, num2, user_ans, real_ans;
    
    num1 = srand(seed);
    num2 = srand(seed);
    
    
    cout << "What is the answer to the following equation?\n";
    cout << num1 <<" + " << num2 << "\n";
    cin >> user_ans;
    
    real_ans = num1 + num2;
    
    cout << "\n\n" << "Your answer was " << user_ans;
    cout << "\n" << "The answer was " << real_ans;
    
    
    
    cout << "===========================\n";
    cout << "          Part             \n";
    cout << "          Six              \n";
    cout << "===========================\n\n\n\n";

    
    seed = time (0);
    int number1, number2, num3, num4, num5, num6, lucky;
    
    num1 = srand(seed) % 100 + 1;
    num2 = srand(seed)  % 100 + 1;
    num3 = srand(seed)  % 100 + 1;
    num4 = srand(seed)  % 100 + 1;
    num5 = srand(seed)  % 100 + 1;
    num6 = srand(seed)  % 100 + 1;
    lucky = srand(seed)  % 100 + 1;
    
    cout << number1 << " " << number2 << " " << num3 << " " << num4 << " " << num5 << " " << num6;
    cout << "\n" << "Lucky Number " << lucky;
    
    
    
    
    //===========================
    // No, I didn't do the extra
    // credit. Oh well. =]
    //===========================
    return 0;
}
