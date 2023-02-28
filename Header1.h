#pragma once
#ifndef TIME_H
#define TIME_H

class Time {
private:
	int hour;
	int minute;
	int second;

public:
	Time();
	Time(int hout, int minute, int second);
	Time get_diff(const Time other) const;

    void print() {
		cout << hour << " " << minute << " " << second << endl;
	}

	void set_hour();
	void set_minute();
	void set_second();

	void get_hour();
	void get_minute();
	void get_second();
};

Time::Time(int hour, int minute, int second) {
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

void Time::set_hour(int hour) {
	if (hour > 24 || hour < 0) {
		this->hour = 0;
	}
	else {
		this->hour = hour;
	}
}

void Time::set_minute(int minute) {
	if (minute > 60 || minute < 0) {
		this->minute = 0;
	}
	else {
		this->minute = minute;
	}
}

void Time::set_second(int second) {
	if (second > 60 || second < 0) {
		this->second = 0;
	}
	else {
		this->second = second;
	}
}

class Event {
private:
	char title[128];
	char organizer[128];
	Time start_time;
	Time end_time;

public:
	Event();
	Event(char title[128], char organizer[128], Time start_time, Time end_time);
	int get_duration();
};

Event::Event() {
	this->title[128] = "";
	this->organizer[128] = "";
	this->start_time = 0;
	this->end_time = 0;
}

Event::Event(char title[128], char organizer[128], Time start_time, Time end_time) {
	this->title[128] = title[128];
	this->organizer[128] = organizer[128];
	this->start_time = start_time;
	this->end_time = end_time;
}

#endif // !TIME_H