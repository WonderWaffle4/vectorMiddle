#include "middle_list.h"

long long itc_max_vector_num(const vector<int> &arr, bool isEven){
    long long num;
    if(arr.size() == 0)
        return 0;
    if(isEven){
        isEven = false;
        for(long long i = 0; i < arr.size() && num != 9; i++){
            while(arr[i] % 2 != 0 && i != arr.size() - 1)
                i++;
            if(!isEven){
                num = arr[i];
                isEven = true;
            }
            if(arr[i] > num && arr[i] % 2 == 0)
                num = arr[i];
        }
    }
    else{
        for(long long i = 0; i < arr.size() && num != 9; i++){
            while(arr[i] % 2 == 0 && i != arr.size() - 1)
                i++;
            if(!isEven){
                num = arr[i];
                isEven = true;
            }
            if(arr[i] > num && arr[i] % 2 != 0)
                num = arr[i];
        }
    }
    return num;
}

long long itc_min_vector_num(const vector<int> &arr, bool isEven){
    long long num;
    if(arr.size() == 0)
        return 0;
    if(isEven){
        isEven = false;
        for(long long i = 0; i < arr.size() && num != 0; i++){
            while(arr[i] % 2 != 0 && i != arr.size() - 1)
                i++;
            if(!isEven){
                num = arr[i];
                isEven = true;
            }
            if(arr[i] < num && arr[i] % 2 == 0)
                num = arr[i];
        }
    }
    else{
        for(long long i = 0; i < arr.size() && num != 0; i++){
            while(arr[i] % 2 == 0 && i != arr.size() - 1)
                i++;
            if(!isEven){
                num = arr[i];
                isEven = true;
            }
            if(arr[i] < num && arr[i] % 2 != 0)
                num = arr[i];
        }
    }
    return num;
}

void itc_odd_even_analysis_lst(const vector<int> &lst){
    if(lst.size() == 0)
        return;
    long long buffer1 = 0; //even numbers number
    long long evenSum = 0;
    long long buffer2 = 0; //odd numbers number
    long long oddSum = 0;
    for(long long i = 0; i < lst.size(); i++){
        lst[i] % 2 == 0 ? buffer1++ : buffer2++;
        lst[i] % 2 == 0 ? evenSum += lst[i] : oddSum += lst[i];
    }
    cout << "Анализ списка:\nКоличество четных чисел: " << buffer1 << ",        Количество нечетных чисел: " << buffer2 << endl;
    cout << "Максимальная четная цифра: " << itc_max_vector_num(lst, true) << ",        Максимальная нечетная цифра: " << itc_max_vector_num(lst, false) << "," << endl;
    cout << "Минимальная четная цифра: " << itc_min_vector_num(lst, true) << ",        Минимальная нечетная цифра: " << itc_min_vector_num(lst, false) << "," << endl;
    cout << "Сумма четных чисел: " << evenSum << ",        Сумма нечетных чисел: " << oddSum << ",";
}
