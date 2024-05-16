#include <iostream>
using namespace std;

int main(){
    int time;
    int minutes;
    int hour;

    cout << "Enter 24hour format: ";
    cin >> time;

    cout << "time is: " << time << endl;

    minutes = time % 100;
    cout << "minutes is: " << minutes << endl;

    hour = (time - minutes) / 100;
    cout << "hour is: " << hour << endl;


    if(hour > 23 || minutes > 60 || hour < 0 || minutes < 0){
        cout << "Invalid time format";
    } else {
        cout << "12hour format is: ";
        if (hour >= 12){
            if (hour > 12){
                hour -= 12;
            }
            cout << hour;
            cout << (minutes < 10 ? ":0" : ":") << minutes << " PM";
        } else if (hour == 0){
            cout << 12;
            cout << (minutes < 10 ? ":0" : ":") << minutes << " AM";
        } else {
            cout << hour;
            cout << (minutes < 10 ? ":0" : ":") << minutes << " PM";
        }
    }
    return 0;
}
 