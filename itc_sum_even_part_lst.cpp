#include "middle_list.h"

long itc_sum_even_part_lst(const vector<int> &lst){
    long long sum = 0;
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] % 2 == 0)
            sum += lst[i];
    }
    return sum;
}
