#include "movie.h"
#include <iostream>

using namespace std;

movie creatMovie()
{
	movie new_movie = {};
	cout << "Укажите название фильма" << endl;
	cin >> new_movie.title;
	cout << "Укажите цену диска" << endl;
	cin >> new_movie.price;
	cout << "Укажите режисёра" << endl;
	cin >> new_movie.director;
	cout << "Укажите жанр" << endl;
	cin >> new_movie.genre;
	cout << "Укажите рейтинг" << endl;
	cin >> new_movie.rating;
	return new_movie;
}

void showMovie(movie film)
{
	cout << "Название фильма - " << film.title << endl;
	cout << "Цена фильма - " << film.price << endl;
	cout << "Режисёр фильма - " << film.director << endl;
	cout << "Жанр фильма - " << film.genre << endl;
	cout << "Рейтинг фильма  - " << film.rating << endl;
}

void movie::show()
{
	cout << "Название фильма - " << title << endl;
	cout << "Цена фильма - " << price << endl;
	cout << "Режисёр фильма - " << director << endl;
	cout << "Жанр фильма - " << genre << endl;
	cout << "Рейтинг фильма  - " << rating << endl;
}
