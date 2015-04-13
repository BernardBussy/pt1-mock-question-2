#pragma once
#include <ostream>
using namespace std;
class Time
{
public:
	Time(int, int);
	~Time();
	void set(int, int);
	void get(int &, int &);
	friend ostream& operator<<(ostream &out, const Time input);
private:
	int hours, minutes;
};

