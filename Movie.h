#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

class Movie
{
	string name;
	string rating;
	unsigned long watched_count {0};
public:
	long increment_watch();

	string get_name() const;
	string get_rating();

	Movie(string name, string rating, unsigned long watched_count = 0);
	long get_watched_count();
	bool  display() const;
};

