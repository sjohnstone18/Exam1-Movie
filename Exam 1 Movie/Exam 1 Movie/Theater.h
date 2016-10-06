#pragma once
#include <string.h>
#ifndef Theater_h
#define Theater_h
#include "Movie.h"
using namespace std;

class Theater {
public:
	Theater(string Name, string Phone); //The name for this theater
	void AddMovie(Movie& Movie); //Add a movie at a specific time
	string GetMovieForHour(int Hour); //Return the movie shown at or after the given hour
									  // Return "" if none are upcoming
	int GetShowTimeForGenre(string Genre);//When will the movie of the given genre be shown?
										  // Return -1 if none exist
	int GetPopcornPrice(); //Make up a cost in dollars for popcorn
	int GetCokePrice(); //Make up a cost on Coke
	Movie movieListing[11];

public:
	int PopcornPrice = 10;
	int CokePrice = 5;
	string Name;
	string Phone;

	
};


#endif // !Theater_h