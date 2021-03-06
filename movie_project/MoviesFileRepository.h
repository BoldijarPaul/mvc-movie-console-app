#pragma once
#include "MoviesRepository.h"
class MoviesFileRepository : public MoviesRepository
{
private:
	const char* DATABASE = "data.csv";
public:
	MoviesFileRepository();

	/*adds a new movie, throws exception if invalid movie */
	void addMovie(Movie movie);

	/*removes a movie with the choosen id, returns true if success, otherwise false*/
	bool removeMovie(int id);

	/* changes a movie, with the choosen id, returns true if success, throws exception if movie invalid  */
	bool editMovie(int id, Movie movie);

	/* returns true if movie is valid */
	bool movieIsValid(Movie movie);
private:
	/* loads stuff from file */
	void loadFromFile();

	/* saves to file the movies */
	void saveToFile();
};

