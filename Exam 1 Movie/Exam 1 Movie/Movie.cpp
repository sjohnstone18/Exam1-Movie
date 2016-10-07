#include "Movie.h"


Movie::Movie() {//default constructor
	Movie::Title = "Princess Bride";
	Movie::Genre = "Comedy";
	Movie::Showtime = 5;
}

//constructor for input movies
Movie::Movie(string Title, string Genre, int ShowTime) {
	Movie::Title = Title;
	if (Genre == "Action" || Genre == "Comedy" || Genre == "Horror" || Genre == "Documentary") //makes sure valid genre
		Movie::Genre = Genre;
	else
		Movie::Genre = "Comedy"; //default genre is comedy

	Movie::Showtime = ShowTime;
}
string Movie::GetTitle() {
	//reports title of movies
	return Title;
}
string Movie::GetGenre() {
	//reports genre of movie
	return Genre;
}
int Movie::GetShowtime() {
	//reports showtime
	return Showtime;
}