#include "middle_list.h"

void itc_odd_even_separator_lst(const vector<int> &lst, vector<int> &lst1, vector<int> &lst2){
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0)
            lst1.push_back(lst[i]);
        else
            lst2.push_back(lst[i]);
    }
}
