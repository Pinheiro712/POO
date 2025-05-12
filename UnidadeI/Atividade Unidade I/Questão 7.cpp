#include <iostream>
#include <cctype>
using namespace std;

void minuscula(string &str){
    for(char &c : str){
        c = tolower(c);
    }
}