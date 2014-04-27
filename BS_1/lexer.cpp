/* 
 * File:   lexer.cpp
 * Author: Vinay
 * 
 * Created on April 24, 2014, 4:19 PM
 */

#include "lexer.h"

lexer::lexer() {
}

lexer::~lexer() {
}

void lexer::tokenize(string inputFilePath, string outputFilePath) {
    
    string expression;
    
    ifstream myFile;
    ofstream myFileOut;
    
    myFile.open(inputFilePath.c_str());
    myFileOut.open(outputFilePath.c_str());
    
    while (!myFile.eof()) {

        myFile >> expression;

        if (expression.size() > 0) {
            
            
            
        }
    }

    myFile.close();
    myFileOut.close();
    
}