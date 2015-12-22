#pragma once
#include <iostream>
#include <string>
using namespace std;

class transp_sred
{
	int number;
	string name;
	int autopr;
public:
	transp_sred()
	{
		number = 0;
		name = "";
		autopr = 0;
	}

	transp_sred(int x, string y, int z)
	{
		number = x;
		name = y;
		autopr = z;
	}

	void push()
	{
		cin >> number;
		cin >> name;
		cin >> autopr;
	}

	void show()
	{
		cout << "Number auto: " << number << endl;
		cout << "Name auto: " << name << endl;
		cout << "Autoptobeg: " << autopr << endl;
	}

	transp_sred operator=(transp_sred a)
	{
		number = a.number;
		name = a.name;
		autopr = a.autopr;
		return *this;
	}

	bool operator==(transp_sred a)
	{
		if ((name == a.name) && (number == a.number) && (autopr == a.autopr))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend ostream & operator<<(ostream & os, transp_sred & a)
	{
		a.show();
		return os;
	}

	friend istream & operator>>(istream & os, transp_sred & a)
	{
		a.push();
		return os;
	}

	bool operator < (transp_sred &a)
	{
		if (name < a.name)
		{
			return true;
		}
		else
		{
			return false;
		}
		if (number < a.number)
		{
			return true;
		}
		else
		{
			return false;
		}
		if (autopr < a.autopr)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool operator > (transp_sred &a)
	{
		if (name>a.name)
		{
			return true;
		}
		else
		{
			return false;
		}

		if (number > a.number)
		{
			return true;
		}
		else
		{
			return false;
		}

		if (autopr > a.autopr)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

};
