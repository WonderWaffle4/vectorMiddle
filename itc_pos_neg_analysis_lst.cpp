#include "middle_list.h"

long long itc_max_positive_num(const vector<int> &lst){
    if(lst.size() == 0)
        return 0;
    long long num = lst[0];
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] > num)
            num = lst[i];
    }
    return num;
}

long long itc_min_positive_num(const vector<int> &lst){
    if(lst.size() == 0)
        return 0;
    long long num = lst[0];
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] < num)
            num = lst[i];
    }
    return num;
}

void itc_pos_neg_analysis_lst(const vector<int> &lst){
    setlocale(LC_ALL, "Russian");
    long long posNumber = 0;
    long long negNumber = 0;
    if(lst.size() == 0)
        return;
    cout << "Ïîëîæèòåëüíûå:        Îòðèöàòåëüíûå:" << endl;
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] > 0)
            posNumber++;
        else if(lst[i] < 0)
            negNumber++;
    }
    cout << "Êîëè÷åñòâî ÷èñåë: " << posNumber << ",        Êîëè÷åñòâî ÷èñåë: " << negNumber << ",";
}
