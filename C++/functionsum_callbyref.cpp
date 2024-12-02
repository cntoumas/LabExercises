#include <iostream>
using namespace std;

int func_1(int i, int& func1){
    func1 = i-1;
    return func1;
}

int func_2 (int i, int& func2){
    func2 = i+3;
    return func2;
}

int func_3(int i, int& func1){
    func1 = i-5;
    return func1;
}

float func_4 (int &func1, int &func2, int &func3){
    float type;
    type = (func1*func2)/func3;
    return type;
}

double func_5 (double &func4, double &final_sum){
    float sum;
    sum = final_sum + func4;
    cout << "The sum is: " << sum << endl;
    return sum;
}

int main (){
    int i, func1, func2, func3;
    double func4, final_sum;
    for (i=6; final_sum<500; i++){
        func1 = func_1(i, func1);
        func2 = func_2(i, func2);
        func3 = func_3(i, func3);
        func4 = func_4(func1, func2, func3);
        final_sum = func_5(func4, final_sum);
    }

    return 0;
}