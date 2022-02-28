#include <iostream>
#include <list>
#include <map>
#include <vector>
using namespace std;
typedef list<int> ourList;

/*void ShowLists(ourList& l1, ourList l2)
{
	//Создаём итератор
	ourList::iterator iter;

	cout << "list1: ";
	for (iter = l1.begin(); iter != l1.end(); iter++)
		cout << *iter << " ";
	cout << "\n" << "list2: ";
	for (iter = l2.begin(); iter != l2.end(); iter++)
		cout << *iter << " ";
	cout << "\n\n";
}

void main()
{
	//Создание двух пустых списков
	ourList list1, list2;
	//Заполнение обоих списков элементами
	for (int i = 0; i < 6; ++i)
	{
		list1.push_back(i);
		list2.push_back(i);
	}
	//Вывод списков на экран
	ShowLists(list1, list2);
	//Во втором списке перемещение первого элемента в конец
	list2.splice(list2.end(), list2, list2.begin());//Позиция в приёмник, Источник, Позиция в истоснике
	//"Переворачиваем" первый список
	list1.reverse();
	ShowLists(list1, list2);
	//Сортировка обоих списков
	list1.sort();
	list2.sort();
	ShowLists(list1, list2);
	//Сливаем два отсортированных списка в первый список
	list1.merge(list2);
	ShowLists(list1, list2);
	//Удаляем дубликаты из первого списка
	list1.unique();
	ShowLists(list1, list2);
}*/

void main()
{
	//Создаём отображение
	map<int, int> our_map;
	//Создаём вектор
	vector<int> our_vector;
	//Максимальный размер вектора
	cout << "\n\nmaxsizeof vector --> " << our_vector.max_size() / sizeof(int);
	//Максимальный размер отображения
	//(в два раза меньше т.к. для каждого элемента нужно хранить два значения - пару)
	cout << "\n\nmax size of map --> " << our_map.max_size() / sizeof(int);
	cout << "\n\n-----------------------------------\n";
	int val;
	int key;
	cout << "\nInput value: ";
	cin >> val;
	cout << "\nInput key: ";
	cin >> key;

	//Создаём пару на основании двух значений
	pair<int, int> element(key, val);
	//Вставляем пару в отображении
	our_map.insert(element);
	//Кол-во элементов в отображении
	cout << "\nCurrent element of map --> " << our_map.size() << "\n";
	cout << "\n\n-----------------------------------------\n";
	cout << "\nInput value: ";
	cin >> val;
	cout << "\nInput key: ";
	cin >> key;
	pair<map<int, int>::iterator, bool> err = our_map.insert(make_pair(key, val));
	if (!err.second)
		//Отрабатает в случае если в отобржении не получилось добавить элемент
		//Например если в отображении уже был элемент с данным ключом
		cout << "\nError !!!!!!!!!\n";
	//Кол-во элементов в отображении
	cout << "\nCurrent element of map --> " << our_map.size() << "\n";
	//Вывод всех элементов на экран
	map<int, int>::iterator iter = our_map.begin();
	for (; iter != our_map.end(); iter++)
		cout << "\nKey --> " << iter->first << "\t\tValue --> " << iter->second;
	cout << "\n------------------------------------------\n";
}