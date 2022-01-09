#include "middle_list.h"

long itc_sum_even_lst(const vector<int> &lst){
    long sum = 0;
    for(long long i = 0; i < lst.size(); i += 2)
        sum += lst[i];
    return sum;
}
