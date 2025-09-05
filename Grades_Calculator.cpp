#include <iostream>

using namespace std;

int  student[5];
char grades[5];

int main() {
cout << "Enter Student scores:";
cin >> student[0] >> student[1] >> student[2] >> student[3] >> student[4]; //input of scores

for(int i = 0; i < 5; i++) { //scores to grades calc
        if(student[i] >= 90) {
            grades[i] = 'A';
        } else if(student[i] >= 80) {
            grades[i] = 'B';
        } else if(student[i] >= 70) {
            grades[i] = 'C';
        } else if(student[i] >= 60) {
            grades[i] = 'D';
        } else {
            grades[i] = 'F';
        }
        cout << ("Student %d: Score = %d, Grade = %c\n", i+1, student[i], grades[i]); //final print off grades
    }
    return 0;
}