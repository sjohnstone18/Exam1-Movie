//I affirm that all code given below was written solely by me, <give your name>, and that any help I received
//adhered to the rules stated for this exam.

#pragma once
#ifndef Movie_h
#define Movie_h
#include <cstring>
#include <string>
#include "string.h"
using namespace std;

class Movie {

public:
	//Come up with a default movie for your theater
	Movie();
	// for Genre, only Action, Comedy, Horror, and Documentary. If none of those,
	// default to Comedy
	Movie(string Title, string Genre, int ShowTime);
	string GetTitle(); // Returns the movie title
	string GetGenre(); // Returns the movie genre
	int GetShowtime(); // When is this movie shown?
private:

	string Title;
	string Genre;
	int Showtime;




};



#endif // !Movie_h
