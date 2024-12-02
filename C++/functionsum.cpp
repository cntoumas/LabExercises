#include <iostream>
using namespace std;

int func_1(int i){
    int sub1;
    sub1 = i-1;
    return sub1;
}

int func_2 (int i){
    int add;
    add = i+3;
    return add;
}

int func_3(int i){
    int sub2;
    sub2 = i-5;
    return sub2;
}

float func_4 (int func1, int func2, int func3){
    float type;
    type = (func1*func2)/func3;
    return type;
}

float func_5 (float func4, float final_sum){
    float sum;
    sum = final_sum + func4;
    cout << "The sum is: " << sum << endl; 
}

int main (){
    int i, func1, func2, func3;
    float func4, final_sum;
    for (i=6; final_sum<500; i++){
        func1 = func_1(i);
        func2 = func_2(i);
        func3 = func_3(i);
        func4 = func_4(func1, func2, func3);
        final_sum = func_5(func4, final_sum);
    }

    return 0;
}