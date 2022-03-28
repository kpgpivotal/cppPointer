#include "Movie.h"



long Movie::increment_watch()
{
   return ++watched_count;
}


string  Movie::get_name() const
{
    
    return name;
}


string Movie::get_rating()
{
    
    return rating;
}




Movie::Movie(string name, string rating, unsigned long watched_count ) {
    // convert string to upper case
    std::for_each(name.begin(), name.end(), [](char& c) {
        c = ::toupper(c);
        });


    this->name = name;
    this->rating = rating;
    this->watched_count = watched_count;
}

long Movie::get_watched_count()
{
    
    return watched_count;
}


bool  Movie::display()  const
{
    cout << name << ", " << rating << ", " << watched_count << endl;
    return true;
}
