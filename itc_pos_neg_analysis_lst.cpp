#include "middle_list.h"

long long itc_max_positive_num(const vector<int> &lst){
    if(lst.size() == 0)
        return -1;
    long long num = lst[0];
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] > num)
            num = lst[i];
    }
    return num;
}

long long itc_max_negative_num(const vector<int> &lst){
    if(lst.size() == 0)
        return -1;
    long long num = lst[0];
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] > num)
            num = lst[i];
    }
    return num;
}

long long itc_min_positive_num(const vector<int> &lst){
    if(lst.size() == 0)
        return -1;
    long long num = lst[0];
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] < num)
            num = lst[i];
    }
    return num;
}

long long itc_min_negative_num(const vector<int> &lst){
    if(lst.size() == 0)
        return -1;
    long long num = lst[0];
    for(long long i = 0; i < lst.size(); i++){
        if(lst[i] < num)
            num = lst[i];
    }
    return num;
}

void itc_pos_neg_analysis_lst(const vector<int> &lst){
    setlocale(LC_ALL, "Russian");
    if(lst.size() == 0)
        return;
    vector<int> posNumbers;
    vector<int> negNumbers;
    vector<int> zeros;
    itc_pos_neg_separator_lst(lst, negNumbers, zeros, posNumbers);
    double posSize = posNumbers.size(), negSize = negNumbers.size(), posAverage = itc_sumlst(posNumbers) / posSize, negAverage = itc_sumlst(negNumbers) / negSize;
    cout << "Положительные:			Отрицательные:" << endl;

    cout << "Количество чисел: " << posNumbers.size() << ",        Количество чисел: " << negNumbers.size() << "," << endl;
    cout << "Максимальная цифра: " << itc_max_positive_num(posNumbers) << ",		Максимальная цифра: " << itc_max_negative_num(negNumbers) << "," << endl;
    cout << "Минимальная цифра: " << itc_min_positive_num(posNumbers) << ",		Минимальная цифра: " << itc_min_negative_num(negNumbers) << "," << endl;
    cout << "Сумма чисел: " << itc_sumlst(posNumbers) << ",			Сумма чисел: " << itc_sumlst(negNumbers) << "," << endl;
    cout << "Среднее значение: " << posAverage << " 		Среднее значение: " << negAverage << "," << endl;
    cout << endl << "Количество нулей: " << zeros.size();
}
