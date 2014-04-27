/* 
 * File:   parser.cpp
 * Author: Vinay
 * 
 * Created on April 24, 2014, 6:26 PM
 */

#include "parser.h"

parser::parser() {
}

parser::parser(const parser& orig) {
}

parser::~parser() {
}

void parser::parse(string inputFilePath, string outputFilePath) {
    
    ifstream myFile;
    ofstream myFileOut;
    
    myFile.open(inputFilePath.c_str());
    myFileOut.open(outputFilePath.c_str());
    
    while (!myFile.eof()) {

        myFile >> expression;

        if (expression.size() > 0) {
            
            myFileOut << result(expression) << '\n';
            
        }
    }

    myFile.close();
    myFileOut.close();
    
}

int parser::addition(int a, int b) {
    return (a + b);   
}

int parser::subtraction(int a, int b) {
    return (a - b);
}

int parser::multiplication(int a, int b) {
    return (a * b);
}

int parser::division(int a, int b) {
    return (a / b);
}

int parser::op(string a) {
    
    for(int i = 0; i <  a.size(); i++) {
        
        switch(a.at(i)) {
            
            case '+'    :   return 1;
                            break;
                
            case '-'    :   return 2;
                            break;
            
            case '*'    :   return 3;
                            break;
               
            case '/'    :   return 4;
                            break;
                
            default     :   break;
                            
        }
        
    }
    
}

vector<string> parser::factors(string a) {
    
    vector<string> result;
    string tmp;
    
    for(int i = 0; i < a.size(); i++) {
        
        if(a.at(i) != '+' && a.at(i) != '-' && a.at(i) != '*' && a.at(i) != '/') {
            tmp.push_back(a.at(i));
        } else {
            result.push_back(tmp);
            tmp.clear();
        }
        
        if(a.size() == ++i) {
            result.push_back(tmp);
            tmp.clear();
        } else i--;
        
    }
    
    return result;
    
}

int parser::result(string a) {
    
    int result;
    
    stringstream str;
    vector<int> factor;
    
    vector<string> numbers;
    int operat;
    int tmp;
    
    numbers = factors(a);
    operat = op(a);
    
    for(int i = 0; i < numbers.size(); i++) {
        str << numbers.at(i);
        str >> tmp;
        
        factor.push_back(tmp);
        
        str << "";
        str.clear();
    }
    
    if(operat == 1) {
        result = addition(factor.at(0), factor.at(1));
    } else if (operat == 2) {
        result = subtraction(factor.at(0), factor.at(1));
    } else if (operat == 3) {
        result = multiplication(factor.at(0), factor.at(1));
    } else if (operat == 4) {
        result = division(factor.at(0), factor.at(1));
    }
    
    return result;
    
}