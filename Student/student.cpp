#include <iostream>
using namespace std;

class Student{
private:
    int scores[5];
    int sum;
public:
    void input(){
        for(int i=0;i,5;i++){
            cin >> scores[i];
        }
    }
    int calculateTotalScore(){
        for(int i=0;i<5;i++){
            sum+=scores[i];
        }
        return sum;
    }
};

int main(){
    int n; // number of students
    cin >> n;
    Student* s = new Student[n]; // an array of n students

    for (int i=0;i<n;i++){
        s[i].input();
    }

    //calculate kris' score
    int kris_score =s[0].calculateTotalScore();

    //Determin how mamy students scored higher than kris
    int count = 0;
    for(int i=1;i<n;i++){
        int total =s[i].calculateTotalScore();
        if (total>kris_score){
            count ++;       }
    }
    cout << count <<endl;
    return 0;}
