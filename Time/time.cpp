#include <iostream>
using namespace std;

class time{
private:
    int hrs;
    int mins;
    int secs;
public:
    time() : hrs(0),mins(0),secs(0)
    {}
    time(int h, int m, int s) : hrs(h), mins(m), secs(s)
    {}
    void display(){
        cout << hrs << ":" << mins << ":" << secs; // format 11:59:59
        }
    void addTime(time t1, time t2){ // add two time
        secs = t1.secs + t2.secs; // add seconds
        if (secs > 59){
            secs -= 60;
            mins++;
        }
        mins = t1.mins + t2.mins; // add minutes
        if (mins >59){
            mins -= 60;
            hrs++;
        }
        hrs = t1.hrs + t2.hrs; // add hours
    }
};



int main(){
    const time time1(5, 59, 59);
    const time time2(4, 30, 30);
    time time3;

    time3.addTime(time1, time2);
    cout << "time3 = "; time3.display();
    cout << endl;
    return 0;
}
