/* 
 * File:   lexer.h
 * Author: Vinay
 *
 * Created on April 24, 2014, 4:19 PM
 */

#ifndef LEXER_H
#define	LEXER_H

#include <string>
#include <fstream>
#include <vector>

#include "token.h"

using namespace std;

class lexer {
public:
    lexer();
    virtual ~lexer();
    
    void tokenize(string, string);
    
private:
    vector<token> tokenStore;

};

#endif	/* LEXER_H */

