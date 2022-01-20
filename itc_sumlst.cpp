#include "middle_list.h"

long itc_sumlst(const vector<int> &lst){
    long sum = 0;
    for(long long i = 0; i < lst.size(); i++)
        sum += lst[i];
    return sum;
}
