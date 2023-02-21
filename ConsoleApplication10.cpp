#include <iostream>
using namespace std;

struct Time {
    int hour;
    int minute;
    int second;

    Time get_difference(const Time other_time) const;

    void print() {
        cout << hour << " " << minute << " " << second << endl;
    }
};

struct Event {
    char title[128];
    char organizer[128];
    Time start_time;
    Time end_time;

    int get_duration();
};

int main()
{
    Event event1;
    cin.getline(event1.title, 128);
    cin.getline(event1.organizer, 128);

    int hour, minute, second;
    int hour2, minute2, second2;
    cin >> hour >> minute >> second;
    cin >> hour2 >> minute2 >> second2;
    Time start_time{hour, minute, second};

    Time end_time;
    end_time.hour = hour2;
    end_time.minute = minute2;
    end_time.second = second2;
    
    Time durr = start_time.get_difference(end_time);
}

