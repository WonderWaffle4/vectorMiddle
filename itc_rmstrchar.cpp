#include "middle_list.h"

bool isLetterInString(char character, string del){
    for(long long i = 0; i < itc_len(del); i++){
        if(character == del[i])
            return true;
    }

    return false;
}

string itc_rmstrchar(string str, string del){
    string newString = "";
    for(long long i = 0; i < itc_len(str); i++){
        if(!isLetterInString(str[i], del))
            newString += str[i];
    }
    return newString;
}
