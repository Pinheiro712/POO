#include <iostream>
#include <cctype>
using namespace std;

bool maiuscula (const string &str){
    for (char c : str){
        if (isupper(c)){
            return true;
        }
    }
    return false;
}