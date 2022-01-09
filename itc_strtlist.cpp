#include "middle_list.h"

vector<char> itc_strtlist(string str){
    vector<char> arr;
    for(long long i = 0; i < itc_len(str); i++)
        arr.push_back(str[i]);
    return arr;
}
