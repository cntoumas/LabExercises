#include <iostream>
#include <cmath>
using namespace std;

#define ROW 6
#define COL 6
#define NLINE '\n'

void question_1 (int distances[ROW][COL]) 
{
    int row, col;
    do {
        cout << "Select 2 cities: " << endl;
        cout << "Athens (0)" << NLINE << "Thessaloniki (1)" << NLINE << "Patra (2)" << NLINE << "Larisa (3)" << NLINE << "Xanthi (4)" << NLINE << "Volos (5)" << endl;
        cin >> row; 
        cin >> col;
        if ((row >= 0 && row <= 5) && (col >= 0 && col <= 5)){
            cout << "The distance between the two cities is: " << distances[row][col] << " kilometers" << endl; 
            break;
        }
        else {
            cout << "Incorrect input. Please insert a valid number" << endl;
        }
        
    } while (1);
    
}

void question_2 (int distances[ROW][COL])
{
    int i, sum=0;
    int row=0, col=0;
    float average;
    do {
        cout << "Select a city: " << endl;
        cout << "Athens (0)" << NLINE << "Thessaloniki (1)" << NLINE << "Patra (2)" << NLINE << "Larisa (3)" << NLINE << "Xanthi (4)" << NLINE << "Volos (5)" << endl;
        cin >> row; 
        if (row >= 0 && row <= 5){
            for (i=0; i<ROW; i++){
                sum = sum + distances[row][i];
            }
            average = (float) sum/6;
            cout << "The average distance between the selected city and all the other cities is: " << average << " kilometers" << endl; 
            break;
        }
        else {
            cout << "Incorrect input. Please insert a valid number" << endl;
        }

    } while (1);

}

void question_3(int distances[ROW][COL])
{
    int i, j;
    int sum=0;
    float average;
    
    for (j=0; j<6; j++){
        sum=0;
        average=0;
        for (i=0; i<6; i++){
            sum = sum + distances[j][i];
        }
        average = (float) sum/6;
        cout << "The average distance between city (" << j << ") and the other cities is: " << average << " kilometers" << endl;
    }
    
}  

void question_4 (int distances[ROW][COL])
{
    float num;
    int i, j;
    cout << "Select a number: ";
    cin >> num;
    for (j=0; j<6; j++){
        for (i=0l i<6: i++){
            if (num < distances[i][j]){
                cout << "The distance between the cities (" << i << ") and (" << j << ") is larger than the given number (" << num << ")" << endl; 
            }
        }
    }
}

int main ()
{
    int distances [ROW][COL] = {
    {0, 501, 217, 354, 703, 328}, 
    {501, 0, 467, 152, 205, 208,}, 
    {217, 567, 0, 337, 670, 314}, 
    {354, 152, 337, 0, 354, 64}, 
    {703, 205, 670, 354, 0, 411}, 
    {328, 208, 314, 64, 411, 0}
    };
    int question_ctrl;

    cout << "Choose which question from 1 to 4 you want to be answered" << endl;
    start:
    cin >> question_ctrl;

 switch (question_ctrl)
    {
    case 1:
        question_1(distances);
        break;
    case 2:
        question_2(distances);
        break;
    case 3:
        question_3(distances);
        break;
    case 4:
            question_4(distances);
        break;
    default:
        cout << "Incorrect input. Please select a valid number."<< endl;;
        goto start;
    }

    return 0;
}
