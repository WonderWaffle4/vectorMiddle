#include "middle_list.h"

string itc_rmstrspc(string str){
    string newstr = "";
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] != ' ')
            newstr += str[i];
    }
    return newstr;
}
