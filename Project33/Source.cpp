#include <iostream>
#include <list>
#include <map>
#include <vector>
using namespace std;
typedef list<int> ourList;

/*void ShowLists(ourList& l1, ourList l2)
{
	//������ ��������
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
	//�������� ���� ������ �������
	ourList list1, list2;
	//���������� ����� ������� ����������
	for (int i = 0; i < 6; ++i)
	{
		list1.push_back(i);
		list2.push_back(i);
	}
	//����� ������� �� �����
	ShowLists(list1, list2);
	//�� ������ ������ ����������� ������� �������� � �����
	list2.splice(list2.end(), list2, list2.begin());//������� � �������, ��������, ������� � ���������
	//"��������������" ������ ������
	list1.reverse();
	ShowLists(list1, list2);
	//���������� ����� �������
	list1.sort();
	list2.sort();
	ShowLists(list1, list2);
	//������� ��� ��������������� ������ � ������ ������
	list1.merge(list2);
	ShowLists(list1, list2);
	//������� ��������� �� ������� ������
	list1.unique();
	ShowLists(list1, list2);
}*/

void main()
{
	//������ �����������
	map<int, int> our_map;
	//������ ������
	vector<int> our_vector;
	//������������ ������ �������
	cout << "\n\nmaxsizeof vector --> " << our_vector.max_size() / sizeof(int);
	//������������ ������ �����������
	//(� ��� ���� ������ �.�. ��� ������� �������� ����� ������� ��� �������� - ����)
	cout << "\n\nmax size of map --> " << our_map.max_size() / sizeof(int);
	cout << "\n\n-----------------------------------\n";
	int val;
	int key;
	cout << "\nInput value: ";
	cin >> val;
	cout << "\nInput key: ";
	cin >> key;

	//������ ���� �� ��������� ���� ��������
	pair<int, int> element(key, val);
	//��������� ���� � �����������
	our_map.insert(element);
	//���-�� ��������� � �����������
	cout << "\nCurrent element of map --> " << our_map.size() << "\n";
	cout << "\n\n-----------------------------------------\n";
	cout << "\nInput value: ";
	cin >> val;
	cout << "\nInput key: ";
	cin >> key;
	pair<map<int, int>::iterator, bool> err = our_map.insert(make_pair(key, val));
	if (!err.second)
		//���������� � ������ ���� � ���������� �� ���������� �������� �������
		//�������� ���� � ����������� ��� ��� ������� � ������ ������
		cout << "\nError !!!!!!!!!\n";
	//���-�� ��������� � �����������
	cout << "\nCurrent element of map --> " << our_map.size() << "\n";
	//����� ���� ��������� �� �����
	map<int, int>::iterator iter = our_map.begin();
	for (; iter != our_map.end(); iter++)
		cout << "\nKey --> " << iter->first << "\t\tValue --> " << iter->second;
	cout << "\n------------------------------------------\n";
}