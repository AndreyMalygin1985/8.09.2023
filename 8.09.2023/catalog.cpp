#include<iostream>
#include"catalog.h"

using namespace std;

void catalog::addMovie()
{
	movie* new_catalog = new movie[size + 1];
	for (size_t i{}; i < size; i++)
	{
		new_catalog[i] = list[i];
	}

	new_catalog[size] = creatMovie();

	delete[]list;
	list = new_catalog;
	size++;
}

void catalog::showCatalog()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "--------------" << i + 1 << " �����--------------" << endl;
		list[i].show();
	}
}

void catalog::searchTitle()
{
	cout << "������� �������� ������ ��� ������: ";
	char needle[256]{};
	cin >> needle;

	int flag = 1;
	for (size_t i{}; i < size; i++)
	{
		if (strcmp(needle,list[i].title)==0)
		{
			cout << "=========" << flag++ << " ����������" << "========="<<endl;
			list[i].show();		
		}
	}
}

void catalog::searchGenre()
{
	cout << "������� ���� ������ ��� ������: ";
	char needle[256]{};
	cin >> needle;

	int flag = 1;
	for (size_t i{}; i < size; i++)
	{
		if (strcmp(needle, list[i].genre) == 0)
		{
			cout << "=========" << flag++ << " ����������" << "=========" << endl;
			list[i].show();
		}
	}
}

void catalog::searchDirector()
{
	cout << "������� ������� ������ ��� ������: ";
	char needle[256]{};
	cin >> needle;

	int flag = 1;
	for (size_t i{}; i < size; i++)
	{
		if (strcmp(needle, list[i].director) == 0)
		{
			cout << "=========" << flag++ << " ����������" << "=========" << endl;
			list[i].show();
		}
	}
}

void catalog::searchRating()
{
	cout << "������� ������� ������ ��� ������: ";
	char needle[256]{};
	cin >> needle;

	int flag = 1;
	for (size_t i{}; i < size; i++)
	{
		if (strcmp(needle, list[i].rating) == 0)
		{
			cout << "=========" << flag++ << " ����������" << "=========" << endl;
			list[i].show();
		}
	}

}
