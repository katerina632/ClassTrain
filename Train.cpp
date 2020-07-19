#include "Train.h"
#include<iostream>
#include<string>

using namespace std;

ostream& operator<<(ostream& os, const Train& tr)
{

	os << "Number: " << tr.number << endl;
	os << "DepartureTime: " << tr.departureTime.h<<":" <<
		tr.departureTime.m<<":"<<tr.departureTime.s<<endl;
	os <<  "Destination: " << tr.destination << endl;	
	cout << endl;

	return os;

}

ofstream& operator<<(ofstream& of, const Train& tr)
{	
	of << tr.number << endl;
	of << tr.departureTime.h << endl;
	of << tr.departureTime.m << endl;
	of << tr.departureTime.s << endl;
	of << tr.destination << endl;
	
	return of;
}

ifstream& operator>>(ifstream& ifs, Train& tr)
{
	ifs >> tr.number;
	ifs >> tr.departureTime.h;
	ifs >> tr.departureTime.m;
	ifs >> tr.departureTime.s;
	ifs >> tr.destination;	
	return ifs;
}

void Railway::AddTrain(Train t)
{
	trains.push_back(t);
}

void Railway::ShowAll() const
{
	int count = 1;
	for (Train i : trains) {
		cout << count << ") " << i;
		count++;
	}
}

void Railway::ShowByNumber(int num) const
{
	bool isFound = true;

	cout << "You were looking for a departure number " << num << ":" << endl;
	for (int i = 0; i < trains.size(); i++)
	{
		if (trains[i] == num) {
			cout << trains[i] << endl;
			break;
		}
		else {
			isFound = false;
		}
	}
	if (isFound == false)
		cout << "Number " << num << " not found!" << endl;
}

void Railway::EditTimeBuNumber(int num)
{
	bool isFound = true;

	cout << "You want to edit time for a departure number " << num << ":" << endl;
	for (int i = 0; i < trains.size(); i++)
	{
		if (trains[i] == num) {

			Train temp = trains[i];
			trains[i] = temp;
		}
		else {
			isFound = false;
		}
	}
	if (isFound == false)
		cout << "Number " << num << " not found!" << endl;
}


void Railway::ShowByDestination(string des) const
{
	bool isFound = true;

	cout << "List of trains at the station " << des << ":" << endl;
	for (int i = 0; i < trains.size(); i++)
	{
		if (trains[i] == des) {
			cout << trains[i];
		}
		else {
			isFound = false;
		}
	}
	if (isFound == false)
		cout << "Departure by station " << des << " not found!" << endl;
}

void Railway::Save() const
{
	ofstream of("Trains.txt");
	of << trains.size() << endl;;
	for (Train i : trains) {
		of << i;
	}
	of.close();
}

void Railway::Load()
{
	if (!trains.empty())
		trains.clear();

	Train t;
	int size;
	ifstream ifs("Trains.txt");
	ifs >> size;
	ifs.ignore(12345, '\n');

	for (int i = 0; i < size; i++)
	{
		ifs >> t;
		trains.push_back(t);
	}
	ifs.close();
}

Train& Train::operator=(const Train& other)
{
	this->number = other.number;
	this->destination = other.destination;

	cout << "Enter new time for departure: ";
	cin >> this->departureTime.h;
	cin >> this->departureTime.m;
	cin >> this->departureTime.s;

	return *this;
}
