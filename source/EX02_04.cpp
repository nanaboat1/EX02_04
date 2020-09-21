#include <iostream> // the standard i/o library
#include <string> // the standard string library
#include <vector>   // standard vector library

/**
 *  Remove Spaces from string 
 *  
 * @param str string to evaluate
 * @return string with spaces removed
 *
 */
std::string remove_space( std::string  str ) {

    std::string new_str;

    for ( int i=0; i<str.length(); i++ ) {

        if (!( static_cast<int>(str[i]) == 32)){
            new_str += str[i];
        }
    }
    return new_str;
}
/** 
 * Convert evaluate arithmetic string
 * 
 *  @param expr arithmetic expression
 *  @return the evaluated expression via pass by reference
 */

double calculate( std::string str ) {
    

 return 0.0;
}
double evalexpression( std::string expr ) {

    std::vector <char> express;

    expr = remove_space( expr ); // remove spaces from string.

    
    // while looping

    // detect either it is  operator or detect number
        



    return 0.0;
}



int main() {



    evalexpression( "23 + 10 / 5" );
    
    return 0;
}