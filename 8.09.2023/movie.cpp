#include "movie.h"
#include <iostream>

using namespace std;

movie creatMovie()
{
	movie new_movie = {};
	cout << "������� �������� ������" << endl;
	cin >> new_movie.title;
	cout << "������� ���� �����" << endl;
	cin >> new_movie.price;
	cout << "������� �������" << endl;
	cin >> new_movie.director;
	cout << "������� ����" << endl;
	cin >> new_movie.genre;
	cout << "������� �������" << endl;
	cin >> new_movie.rating;
	return new_movie;
}

void showMovie(movie film)
{
	cout << "�������� ������ - " << film.title << endl;
	cout << "���� ������ - " << film.price << endl;
	cout << "������ ������ - " << film.director << endl;
	cout << "���� ������ - " << film.genre << endl;
	cout << "������� ������  - " << film.rating << endl;
}

void movie::show()
{
	cout << "�������� ������ - " << title << endl;
	cout << "���� ������ - " << price << endl;
	cout << "������ ������ - " << director << endl;
	cout << "���� ������ - " << genre << endl;
	cout << "������� ������  - " << rating << endl;
}
