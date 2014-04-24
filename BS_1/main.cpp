/* 
 * File:   main.cpp
 * Author: Vinay
 *
 * Created on April 24, 2014, 3:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "lexer.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Hello World" << endl;
    
    lexer testLexer;
    
    testLexer.readFile("/cygdrive/c/Users/Vinay/Desktop/RichtigBS.txt");
    testLexer.cleanFile();
    testLexer.writeFile("/cygdrive/c/Users/Vinay/Desktop/OutputBS.txt");
    
    return 0;

}

