#include <iostream>
#include <vector>
#include "Train.h"

using namespace std;

void main()
{
	Railway r1;

	r1.AddTrain(Train(5, Time(15, 0, 0), "Rivne"));
	r1.ShowAll();

	r1.ShowByNumber(5);

	Train tr(3, Time(20, 30, 0), "Rivne");
	r1.AddTrain(tr);
	r1.ShowAll();

	r1.ShowByDestination("Rivne");

	r1.Save();
	Railway r2;
	r2.Load();

	r2.ShowAll();

	r1.EditTimeBuNumber(5, 22,30,0);
	cout << endl;
	r1.ShowByNumber(5);

	cout << "Sorted bytime:" << endl;
	r1.SortByTime();
	r1.ShowAll();

	system("pause");
}