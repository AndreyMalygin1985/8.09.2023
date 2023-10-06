#pragma once
#include"movie.h"
#include<iostream>

struct catalog
{
	movie* list;
	size_t size;
	void addMovie();
	void showCatalog();
	void searchTitle();
	void searchGenre();
	void searchDirector ();
	void searchRating();
	void searchPrice();
};
