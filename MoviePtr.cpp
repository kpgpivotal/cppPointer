// MoviePtr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Movies.h"

int main()
{
    Movies fav_movies{};

    fav_movies.display_all();
    fav_movies.increment_count("ZZZZZZ");

    fav_movies.add_movie("Titanic", "UA", 7000);
    fav_movies.display_all();

    fav_movies.increment_count("Titanic");
    fav_movies.display_all();

    fav_movies.add_movie("Titanic", "UA", 7000);

}


