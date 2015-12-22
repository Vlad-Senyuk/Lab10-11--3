#include <iostream>
#include "ptype.h"
#include <algorithm>
#include <iterator>
#include <string>
#include <list>
#include <deque>
using namespace std;

int main()
{

	//1
	list<transp_sred> lst;
	transp_sred ob1(3850, "Audi", 5000);
	lst.push_back(ob1);
	transp_sred ob2(4741, "Lexus", 3500);
	lst.push_back(ob2);
	transp_sred ob3(6666, "Lamborgini", 6000);
	lst.push_back(ob3);

	lst.sort();
	lst.reverse();
	//

	cout << endl;
	list<transp_sred>::iterator p = lst.begin();
	cout << "List: " << endl;
	while (p != lst.end())
	{
		cout << *p << endl;
		p++;
	}
	cout << endl;

	//2
	cout << endl;
	list<transp_sred>::iterator a; 
	a=find(lst.begin(), lst.end(), ob2);
	cout << *a << endl;

	//3
	cout << endl;

	deque<transp_sred> deq; // создал новый контейнер
	deq.push_back(ob1);
	deq.push_back(ob2);
	deq.push_back(ob3);

	deque<transp_sred>::iterator y = deq.begin();
	cout << "Deque: " << endl;
	while (y != deq.end())
	{
		cout << *y << endl; // вывел содержимое контейнера
		y++;
	}
	cout << endl;

	//4
	cout << endl;
	lst.sort();
	sort(deq.begin(), deq.end());


	deque<transp_sred>::iterator y1 = deq.begin();
	cout << "Deque: " << endl;
	while (y1 != deq.end())
	{
		cout << *y1 << endl; // вывел отсортированный дек
		y1++;
	}
	cout << endl;

	cout << endl;
	list<transp_sred>::iterator p1 = lst.begin();
	cout << "List: " << endl;
	while (p1 != lst.end())
	{
		cout << *p1 << endl; // вывел отсортированный список
		p1++;
	}
	cout << endl;

	//5

	list<transp_sred> lst2 (lst.size()+deq.size()); // создал третий контейнер, список размером > размер конт.1 + размер конт.2
	merge(lst.begin(), lst.end(), deq.begin(), deq.end(), lst2.begin());
	cout << endl;
	
	list<transp_sred>::iterator u = lst2.begin();
	cout << "List-3: " << endl;
	while (u != lst2.end())
	{
		cout << *u << endl;
		u++;
	}
	cout << endl;

	//6
	cout << endl;
	int n;
	n=count(lst2.begin(), lst2.end(), ob2);
	cout<<"K-vo mashin:" << n << endl;
	cout << endl;

	cout << endl;
	list<transp_sred>::iterator k;
	k = find(lst2.begin(), lst2.end(), ob2);
	cout << *a << endl; //вывод рез-та поиска
}
