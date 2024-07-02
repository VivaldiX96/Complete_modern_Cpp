#include <iostream>
#include <string>

enum class Case{SENSITIVE, INSENSITIVE};
 
size_t Find(
 const std::string &source,         //Source string to be searched
 const std::string &search_string,  //The string to search for
 Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
 size_t offset = 0 ) {                //Start the search from this offset
     //Implementation
 
     /*
     return position of the first character 
     of the substring, else std::string::npos
     */
     return first_char_pos;
}