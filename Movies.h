#pragma once
#include <iostream>
#include <vector>
#include "Movie.h"
using namespace std;

class Movies
{
private:
	vector<Movie> *list{nullptr};

public:
	// Movies class to manage the Movie
	int add_movie(string name, string rating, unsigned long count=0);
	int increment_count(string name);
	bool display_all();

	// constructors
	Movies();
	Movies(const Movies& source);
	Movies(Movies&& source) noexcept;
	~Movies();

};




