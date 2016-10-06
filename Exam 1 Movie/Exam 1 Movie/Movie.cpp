#include "Movie.h"


Movie::Movie() {//default movie:Princess Bride
	Movie::Title = "Princess Bride";
	Movie::Genre = "Comedy";
	Movie::Showtime = 5;
}

//constructor for input movies
Movie::Movie(string Title, string Genre, int ShowTime) {
	Movie::Title = Title;
	if (Genre == "Action" || Genre == "Comedy" || Genre == "Horror" || Genre == "Documentary")
		Movie::Genre = Genre;
	else
		Movie::Genre = "Comedy";

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