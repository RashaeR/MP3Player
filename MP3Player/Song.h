#pragma once
#include <string>
#include <vector>
#include "Genre.h"
using namespace std;
class Song : public Genre
{
public:
	Song();
	~Song();
	void getSong();
	void getPlaylist();
	vector <string> getSongVector();
	vector <string> getPlaylistVector();
	vector <string> getGenreVector();
	vector <string> getGenreSongVector();
	void printOut(vector<string>, int);
	void getData();
	void getGenre();
	void getGenreSong(vector<string>, int);

private:
	vector <string>  song;
	vector <string> playlist;
	vector <string> genre;
	vector <string> genreSong;
};

