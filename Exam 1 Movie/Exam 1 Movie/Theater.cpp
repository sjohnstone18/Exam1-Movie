#include "Theater.h"
#include <iostream>
using namespace std;

//constructor
Theater::Theater(string Name, string Phone) {
	Theater::Name = Name;
	Theater::Phone = Phone;
	
}
//adding movies to the array in Theater
void Theater::AddMovie(Movie& Movie) {
	static int count = 0;
		TheaterMovie[count] = Movie;
		count++;
}

string Theater::GetMovieForHour(int Hour) {
		
	if (Hour > -1 || Hour < 25) {  // check to make sure of valid time
		for (int i = 0; i <= 11; i++) // check all movies; used 11 becasue Moviecount is not global
		{
			if (TheaterMovie[i].GetShowtime() == Hour) //check if movietime is time asked
				return TheaterMovie[i].GetTitle(); //if so, output movie name
			
		}
	}
	return ""; // if other return is never triggered, output blank
}
int Theater::GetShowTimeForGenre(string Genre) {

	for (int i = 0; i <= 11; i++) // check each part of array
		{
			if (TheaterMovie[i].GetGenre() == Genre) // if genre is same, return the time
				return TheaterMovie[i].GetShowtime();
		}
	return -1; //return -1 if no genres are available

}
int Theater::GetPopcornPrice() { // tell popcorn price
	return PopcornPrice;
}
int Theater::GetCokePrice() { // tell coke price.  
	return CokePrice;
}

