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
#include "parser.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Hello World" << endl;
    
    lexer testLexer;
    parser testParser;
    
    testLexer.readFile("/cygdrive/d/Tools/BS/BS_1/RichtigBS.txt");
    testLexer.cleanFile();
    testLexer.writeFile("/cygdrive/d/Tools/BS/BS_1/OutputBS.txt");
    
    testParser.parse("/cygdrive/d/Tools/BS/BS_1/OutputBS.txt", "/cygdrive/d/Tools/BS/BS_1/ParsedBS.txt");
    
    return 0;

}

