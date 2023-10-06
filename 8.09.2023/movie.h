#pragma once

struct movie 
{
	char title[256];
	char director[256];
	char genre[256];
	unsigned int rating;
	double price;
	void show();
};

movie creatMovie();