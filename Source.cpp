#include <iostream>
#include <vector>
#include "Train.h"

using namespace std;

void main()
{
	////������� ������
	//vector<int> vect;
	//cout << "\nNumber of elements that could be stored in the vector without "
	//	<< "allocating more storage --> "
	//	<< vect.capacity();
	//cout << "\n-----------------------------------"; //��������� ����� size() �������� ������� ���-�� //��������� � �������.
	//cout << "\nThe number of elements in the vector --> " << vect.size();
	//cout << "\n-----------------------------------"; vect.resize(4, 0); //�������� ������, �����

	////�������� ���������� ������
	//cout << "\nResizing...\n";
	//cout << "The number of elements in the vector-- > " << vect.size() << endl;
	//cout << "\nvector -->\t";
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << vect[i] << '\t';
	//}
	//cout << "\n-----------------------------------";

	////������������ ������ �������.
	////����� max_size() ���������� ���-�� ����.
	//cout << "\nThe maximum possible length of the vector --> " << vect.max_size() / sizeof(int);
	//cout << "\n-----------------------------------";
	//vect.push_back(1); //��������� ������� � ����� �������
	//cout << "\npush_back\nvector -->\t";
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << vect[i] << '\t';
	//}
	//cout << "\n-----------------------------------";

	////������� ��������� �������� � ���������
	////��� �� ����� �������
	//vector<int>::reverse_iterator i_riterator = vect.rbegin();
	//cout << "\nreverse_iterator\nvector -->\t";
	////������� ���������� �������� �� ����� ��������� 
	////��������� ��������
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << i_riterator[i] << '\t';
	//}
	//cout << "\n-----------------------------------";

	////������� ������� �������� � ��������� ��� �� ����� �������
	//vector<int>::iterator i_iterator = vect.end();
	////������� �������� "-1" �� ���� ���������������
	//vect.insert(i_iterator - 1, -1);
	//vect.insert(vect.begin(), { 1, 2, 3 });	// ������� �������� �������� �� �������
	//vect.insert(vect.begin() + 3, vect.begin() + 1, vect.begin() + 4);	// ������� �� ������� �������� ������� �� first �� last
	//vect.insert(vect.end(), 3, 303);	// ������� 3-� �������� � ���������� 303 �� ���� ����������

	//cout << "\ninsert\nvector -->\t";
	////������� ���������� �������� �� ����� 
	////��������� ������� ��������
	//for (vector<int>::iterator i = vect.begin(); i != vect.end(); ++i)
	//{
	//	cout << *(i) << '\t';
	//}
	//cout << "\n-----------------------------------";

	//i_iterator = vect.end(); //�������� ����� �������
	//vect.insert(i_iterator - 1, 2, 4); //������� ���� //�������� ����� //���������
	//cout << "\ninsert\nvector -->\t"; //��������� 
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << vect[i] << '\t';
	//}
	//cout << "\n-------------------------------\n\n";

	//try
	//{
	//	// ��������� �������� �� �������, � ������� �� ������ ������� - exception
	//	cout << "Pos 2:" << vect.at(2) << endl;
	//	cout << "Pos 2:" << vect.at(222) << endl;
	//}
	//catch (const std::exception & e)
	//{
	//	cout << "at() throw an exception...\n";
	//	cout << e.what() << endl;
	//}

	//vect.erase(vect.begin(), vect.begin() + 2); // erase 3 el from first position
	//for (int i : vect) cout << i << "\t";

	//vect.erase(vect.begin()); // erase first
	//for (int i : vect) cout << i << "\t";

	//cout << "First element: " << vect.front() << endl;
	//cout << "Last element: " << vect.back() << endl;
	//vect.pop_back(); // erase last 
	//reverse(vect.begin(), vect.end());
	////vect.swap(/*another vector*/);

	//// initialize
	//vect.assign({ 5, 5, 5 });
	//for (int i : vect) cout << i << "\t";

	//cout << "Size: " << vect.size() << endl;
	//cout << "Cap: " << vect.capacity() << endl;

	//vect.shrink_to_fit(); // set capacity to actual size
	//cout << "Cap: " << vect.capacity() << endl;

	Railway r1;

	r1.AddTrain(Train(5, Time(20, 00, 00), "Rivne"));
	r1.ShowAll();

	r1.ShowByNumber(5);

	Train tr(3, Time(15, 30, 00), "Rivne");
	r1.AddTrain(tr);
	r1.ShowAll();

	r1.ShowByDestination("Rivne");

	r1.Save();
	Railway r2;
	r2.Load();

	r2.ShowAll();

	r1.EditTimeBuNumber(5);
	r1.ShowByNumber(5);

	system("pause");
}