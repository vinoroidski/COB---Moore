/* 
 * File:   parser.h
 * Author: Vinay
 *
 * Created on April 24, 2014, 6:26 PM
 */

#ifndef PARSER_H
#define	PARSER_H

#include <vector>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

class parser {
public:
    parser();
    parser(const parser& orig);
    virtual ~parser();
    
    void parse(string, string);
    
private:
    string expression;

    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
    
    int op(string);
    vector<string> factors(string);
    
    int result(string);
    
};

#endif	/* PARSER_H */

/*
 * Diego = +, -, /, * methods. return int, take two parameters. declare in header and cpp
 * Vinay = charToInt and formatting of final input file
 * 
 */