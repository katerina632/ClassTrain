#include <iostream>
#include <vector>
#include "Train.h"

using namespace std;

void main()
{
	////—оздаем вектор
	//vector<int> vect;
	//cout << "\nNumber of elements that could be stored in the vector without "
	//	<< "allocating more storage --> "
	//	<< vect.capacity();
	//cout << "\n-----------------------------------"; //использу€ метод size() получаем текущее кол-во //элементов в векторе.
	//cout << "\nThe number of elements in the vector --> " << vect.size();
	//cout << "\n-----------------------------------"; vect.resize(4, 0); //измен€ем размер, новые

	////элементы заполн€тс€ нул€ми
	//cout << "\nResizing...\n";
	//cout << "The number of elements in the vector-- > " << vect.size() << endl;
	//cout << "\nvector -->\t";
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << vect[i] << '\t';
	//}
	//cout << "\n-----------------------------------";

	////максимальный размер вектора.
	////ћетод max_size() возвращает кол-во байт.
	//cout << "\nThe maximum possible length of the vector --> " << vect.max_size() / sizeof(int);
	//cout << "\n-----------------------------------";
	//vect.push_back(1); //вставл€ем единицу в конец вектора
	//cout << "\npush_back\nvector -->\t";
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << vect[i] << '\t';
	//}
	//cout << "\n-----------------------------------";

	////создаем реверсный итератор и выставлем
	////его на конец вектора
	//vector<int>::reverse_iterator i_riterator = vect.rbegin();
	//cout << "\nreverse_iterator\nvector -->\t";
	////выводим содержимое векртора на экран использу€ 
	////реверсный итератор
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << i_riterator[i] << '\t';
	//}
	//cout << "\n-----------------------------------";

	////создаем обычный итератор и выставлем его на конец вектора
	//vector<int>::iterator i_iterator = vect.end();
	////вставка элемента "-1" на м≥сце передостаннього
	//vect.insert(i_iterator - 1, -1);
	//vect.insert(vect.begin(), { 1, 2, 3 });	// вставка колекц≥њ елемент≥в на початок
	//vect.insert(vect.begin() + 3, vect.begin() + 1, vect.begin() + 4);	// вставка на початок д≥апазону значень в≥д first до last
	//vect.insert(vect.end(), 3, 303);	// вставка 3-х елемент≥в з≥ значенн€ми 303 на м≥сце останнього

	//cout << "\ninsert\nvector -->\t";
	////выводим содержимое векртора на экран 
	////использу€ обычный итератор
	//for (vector<int>::iterator i = vect.begin(); i != vect.end(); ++i)
	//{
	//	cout << *(i) << '\t';
	//}
	//cout << "\n-----------------------------------";

	//i_iterator = vect.end(); //итератор конца вектора
	//vect.insert(i_iterator - 1, 2, 4); //вставка двух //четверок перед //последним
	//cout << "\ninsert\nvector -->\t"; //элементом 
	//for (int i = 0; i < vect.size(); i++)
	//{
	//	cout << vect[i] << '\t';
	//}
	//cout << "\n-------------------------------\n\n";

	//try
	//{
	//	// отриманн€ елемента по ≥ндексу, у випадку не в≥рного ≥ндексу - exception
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