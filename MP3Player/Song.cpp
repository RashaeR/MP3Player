#include "Song.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


Song::Song()
{
}


Song::~Song()
{
}

void Song::getSong()
{
	getData();

	for (int i= 0; i < song.size(); i++)
	{
		cout << i+1 << "." << song[i]  << endl; 	
		
	}
}

void Song::getPlaylist()
{
	getData();

	for (int i = 0; i < playlist.size(); i++)
	{
		cout << i + 1 << "." << playlist[i] << endl;
		
	}


}

void Song::getGenre() 
{
	getData();
	bool check = false;

	for (int i = 0; i < genre.size(); i++)
	{
		int n = 1;
		if (genre[i] == "Pop" && check == false)
		{
			cout <<  i + 1 << "." << genre[i] << endl;
			n++;
			
		}
		
		 if (genre[i] == "Rock" && check == false)
		{
		
			cout << i + 1 << "." << genre[i] << endl;
			
			n++;
		}
		 if (genre[i] == "Rap" && check == false)
		{
		
			cout << i + 1 << "." << genre[i] << endl;
			
		}

		 if (genre[i] == "R&B" && check == false)
		{
			
			cout << i + 1 << "." << genre[i] << endl;
			check = true;
		}

		 if (genre[i] == "Show" && check == false)
		{

			cout << i + 1 << "." << genre[i] << endl;
			

		}
	}

}


void Song::getGenreSong(vector<string> g, int num)
{
	int choice;
	vector <vector <string> > data;
	ifstream infile("Music.txt");
	while (infile)
	{
		string s;
		if (!getline(infile, s)) break;
		istringstream ss(s);
		vector <string> record;

		while (ss)
		{
			string s;
			if (!getline(ss, s, ',')) break;
			record.push_back(s);
		}

		data.push_back(record);

	} if (!infile.eof()) { cerr << "Fooey!\n"; }


	for (int i = 0; i < data.size() && data[i][0] == "1"; i++)
	{
		if (data[i][4] == g[num - 1])
		{
			genreSong.push_back(data[i][3]);
		}
		
	}

	for (int i = 0; i < genreSong.size(); i++)
	{
		
		cout << i+1 << "." << genreSong[i] << endl;
		
	}


}


void Song::getData()
{
	vector <vector <string> > data;
	ifstream infile("Music.txt");
	while (infile)
	{
		string s;
		if (!getline(infile, s)) break;
		istringstream ss(s);
		vector <string> record;

		while (ss)
		{
			string s;
			if (!getline(ss, s, ',')) break;
			record.push_back(s);
		}

		data.push_back(record);

	} if (!infile.eof()) { cerr << "Fooey!\n"; }



	//Putting songs data in the song vector
	for (int i = 0; i < data.size() && data[i][0] == "1"; i++)
	{
		song.push_back(data[i][3]);
	}
	
	//Putting playlist data in the playlist vector	
	for (int i = 18; i < data.size() && data[i][0] == "2"; i++)
	{
		playlist.push_back(data[i][1]);
	}
	
	//Putting genre data in the genre vector	
	for (int i = 0; i < data.size() && data[i][0] == "1"; i++)
	{
		genre.push_back(data[i][4]);
	}

	/*
	for (int i = 0; i < data.size(); i++)
	{
		genreSong.push_back(data[i][i]);
	}
	*/
}



vector <string> Song::getSongVector()
{
	return song;
}

vector <string> Song::getPlaylistVector()
{
	return playlist;
}

vector <string> Song::getGenreVector()
{
	return genre;
}

vector <string> Song::getGenreSongVector()
{
	return genreSong;
}

void Song::printOut(vector<string> s, int i)
{
	
		cout << "Now playing " << s[i-1] << "....." << endl;
}