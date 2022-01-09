#include "middle_list.h"

string itc_join(vector<char> lst, string sep){
    string s = "";
    if(lst.size() > 1){
        for(long long i = 0; i < lst.size() - 1; i++){
            s += lst[i] + sep;
        }
        s += lst[lst.size() - 1];
    }
    return s;
}
