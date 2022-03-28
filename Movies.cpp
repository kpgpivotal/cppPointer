#include "Movies.h"

Movies::Movies() {
	list = new vector<Movie>;
}

Movies::Movies(const Movies& source) : Movies{} {

}

Movies::Movies(Movies &&source) noexcept : list{ source.list }  {
	source.list = nullptr ;
}

Movies::~Movies() {
	if (list != nullptr ) {
		delete list;
	}
	
}


bool Movies::display_all() {
	if (list->size() == 0) {
		cout << endl << "No movies found. Please add your favorite  movies to the list." << endl;
		return false;
	}

	// list movies
	for (const Movie& item : *list) {
		item.display();
	}
	return true;
}

int Movies::add_movie(string name, string rating, unsigned long count ) {
	// convert string to upper case
	std::for_each(name.begin(), name.end(), [](char& c) {
		c = ::toupper(c);
		});

	// list movies
	for (Movie& item : *list) {

		if (item.get_name().compare(name) == 0) {
			// Movie already present
			cout << endl << name << " already present in the list." << endl;
			return -1;
		}

	}
	Movie newmovie{ name ,rating, count };
	list->push_back(newmovie);

	return 0;
}

int Movies::increment_count(string name) {
	string cur_name{};
	// convert string to upper case
	std::for_each(name.begin(), name.end(), [](char& c) {
		c = ::toupper(c);
		});

	if (list->size() == 0) {
		cout << endl << name << " not found to increment. Please add your favorite  movie to the list." << endl;
		return -1;
	}

	// list movies
	for ( Movie& item : *list) {
		cur_name = item.get_name();
		if (cur_name.compare(name) ==0) {
			item.increment_watch();
			cout << endl << name << " count incremented." << endl;
			return 0;
		}

	}
	

	cout << endl << name << " not found to increment the count." << endl;
	return -1;
}