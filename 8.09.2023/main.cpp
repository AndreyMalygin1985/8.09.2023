#include<iostream>
#include<Windows.h>
#include"menu.h"
#include"film.h"
#include"movie.h"
#include"catalog.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	catalog list_movie{};

	menu main_menu{};
	main_menu.add("Добавить новый фильм в каталог");
	main_menu.add("Показать каталог");
	main_menu.add("Поиск по названию");
	main_menu.add("Поиск по жанру");

	int option{};
	while (option != 9)
	{
		main_menu.show();
		cin >> option;

		switch (option)
		{
		case 0:
			list_movie.addMovie();
			break;
		case 1:
			list_movie.showCatalog();
			break;
		case 2:
			list_movie.searchTitle();
			break;
		case 3:
			list_movie.searchGenre();
			break;
		case 4:
			list_movie.searchDirector();
			break;
		case 5:
			list_movie.searchRating();
			break;
		case 6:
			list_movie.searchPrice();
			break;


		default:
			break;
		}
	}

	return 0;
}