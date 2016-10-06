#include "Theater.h"
#include <iostream>
using namespace std;


Theater::Theater(string Name, string Phone) {
	Theater::Name = Name;
	Theater::Phone = Phone;
	
}
void Theater::AddMovie(Movie& Movie) {
	



}
string Theater::GetMovieForHour(int Hour) {
	if (Hour > -1 || Hour < 25) {
		for (int i = 0; i <= 11; i++)
		{
			if (movieListing[i].GetShowtime == Hour)
				cout << movieListing[i].GetTitle << endl;


		}



	}
}
int Theater::GetShowTimeForGenre(string Genre) {

}
int Theater::GetPopcornPrice() {
	return PopcornPrice;
}
int Theater::GetCokePrice() {
	return CokePrice;
}

