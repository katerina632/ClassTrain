#pragma once
#include <iostream>
#include <vector>
#include <string>
#include<fstream>


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

	bool operator==(const int& other) const {
		return number == other;
	}

	bool operator==(const string& other) const {
		return destination == other;
	}

	Train& operator=(const Train& other);

	friend ofstream& operator<<(ofstream& of, const Train& tr);
	friend ifstream& operator>>(ifstream& ifs, Train& tr);


	bool Comp(const Train& t1, const Train& t2) {

		return (t1.departureTime.h < t2.departureTime.h ||
			t1.departureTime.h == t2.departureTime.h &&
			t1.departureTime.m < t2.departureTime.m ||
			t1.departureTime.h == t2.departureTime.h &&
			t1.departureTime.m == t2.departureTime.m &&
			t1.departureTime.s < t2.departureTime.s);
	}
};

class Railway
{
	vector<Train> trains;

public:
	Railway() {}

	/*Train& operator[](int j) {

		return trains[j];
	}*/

	void AddTrain(Train t);

	void ShowAll() const;

	void ShowByNumber(int num) const;

	void EditTimeBuNumber(int num);

	void SortByTime() {
		trains.


	}

	void ShowByDestination(string des) const;

	void Save() const;

	void Load();

};

