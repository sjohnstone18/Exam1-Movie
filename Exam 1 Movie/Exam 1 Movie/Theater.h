//I affirm that all code given below was written solely by me, <give your name>, and that any help I received
//adhered to the rules stated for this exam.

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

public:
	int PopcornPrice = 10;
	int CokePrice = 5;
	string Name;
	string Phone;
	Movie TheaterMovie[11]; //array that holds the movies at the theater.  said 11 because MOVIECOUNT is not global
	
};


#endif // !Theater_h
