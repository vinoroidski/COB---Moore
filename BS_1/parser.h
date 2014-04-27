/* 
 * File:   parser.h
 * Author: Vinay
 *
 * Created on April 24, 2014, 6:26 PM
 */

#ifndef PARSER_H
#define	PARSER_H

#include <vector>

using namespace std;

class parser {
public:
    parser();
    parser(const parser& orig);
    virtual ~parser();
    
    //void read();
    int add (int x, int y);
    int sub (int x, int y);
    int mul (int x, int y);
    int div (int x, int y);
    
    void parse(string, string);
    
private:
    //vector<char> input;
    //vector<char> output;
    
    string expression;
    map<string, string> store;
    
    float addition(float, float);
    float subtraction(float, float);
    float multiplication(float, float);
    float division(float, float);
    
    int op(string);
    vector<string> factors(string);
    
    float result(string);

};

#endif	/* PARSER_H */

/*
 * Diego = +, -, /, * methods. return int, take two parameters. declare in header and cpp
 * Vinay = charToInt and formatting of final input file
 * 
 */