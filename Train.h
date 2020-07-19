#pragma once
#include <iostream>
#include <vector>
#include <string>
#include<fstream>
#include <algorithm>

using namespace std;

struct Time
{
	int h, m, s;
public:
	Time() :h(0), m(0), s(0) {}
	Time(int h, int m, int s) : h(h), m(m), s(s) {}

};

class Train
{
private:
	int number;
	Time departureTime;
	string destination;

public:
	Train() : number(0), departureTime(0, 0, 0), destination("No destination") {}
	Train(int num, Time time, string destination) : number(num), departureTime(time), destination(destination) {}

	friend ostream& operator<<(ostream& os, const Train& tr);
	

	/*bool operator==(const string& other) const {
		return destination == other;
	}*/

	friend ofstream& operator<<(ofstream& of, const Train& tr);
	friend ifstream& operator>>(ifstream& ifs, Train& tr);	

	bool operator<(const Train& t) {

		return (this->departureTime.h < t.departureTime.h ||
			this->departureTime.h == t.departureTime.h &&
			this->departureTime.m < t.departureTime.m ||
			this->departureTime.h == t.departureTime.h &&
			this->departureTime.m == t.departureTime.m &&
			this->departureTime.s < t.departureTime.s);
	}	

	const int GetNumber() const {
		return number;
	}	

	const string GetDestination() const {
		return destination;
	}
	
	void SetTime(int h,int m, int s) {
		departureTime.h = h;
		departureTime.m = m;
		departureTime.s = s;

	}


};

class Railway
{
	vector<Train> trains;

public:
	Railway() {}	

	void AddTrain(Train t);

	void ShowAll() const;

	void ShowByNumber(int num) const;

	void EditTimeBuNumber(int num, int h, int m, int s);

	void SortByTime();

	void ShowByDestination(string des) const;

	void Save() const;

	void Load();
	

};

