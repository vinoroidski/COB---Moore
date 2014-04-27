/* 
 * File:   main.cpp
 * Author: Vinay
 *
 * Created on April 24, 2014, 3:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "screener.h"
#include "lexer.h"
#include "parser.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Hello World" << endl;
    
    screener testScreener;
    lexer testLexer;
    parser testParser;
    
    testScreener.readFile("/cygdrive/d/Tools/BS/BS_1/RichtigBS.txt");
    testScreener.cleanFile();
    testScreener.writeFile("/cygdrive/d/Tools/BS/BS_1/OutputBS.txt");
    
    //testLexer.tokenize("/cygdrive/d/Tools/BS/BS_1/OutputBS.txt", "/cygdrive/d/Tools/BS/BS_1/TokensBS.txt")
    
    //testParser.parse("/cygdrive/d/Tools/BS/BS_1/TokensBS.txt", "/cygdrive/d/Tools/BS/BS_1/ParsedBS.txt");
    
    return 0;

}

