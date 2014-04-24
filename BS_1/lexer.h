/* 
 * File:   lexer.h
 * Author: Vinay
 *
 * Created on April 24, 2014, 4:19 PM
 */

#ifndef LEXER_H
#define	LEXER_H

#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class lexer {
public:
    lexer();
    lexer(const lexer& orig);
    virtual ~lexer();
    
    void readFile(string);
    void cleanFile();
    void writeFile(string);
    
private:
    vector<char> input;
    vector<char> output;

};

#endif	/* LEXER_H */

