#include "Menu.h"
#include "Song.h"
#include <iostream>
#include <string>

using namespace std;


Menu::Menu()
{
	





}


Menu::~Menu()
{
}

void Menu::mp3Menu()
{
	Song song;
	system("cls");
	cout << "****** MP3 Player *******" << endl;
	cout << "1. Song" << endl;
	cout << "2. Playlist" << endl;
	cout << "3. Play by genre" << endl;
	cout << "4. view all songs" << endl;
	cout << "5. view all playlists" << endl;
	cin >> choice;
	cin.ignore();

	switch (choice)
	{
	case 1:
		system("cls");
		songMenu();
		break;

	case 2:
		system("cls");
		playlistMenu();
		break;

	case 3:
		system("cls");
		genreMenu();
		break;

	case 4:
		
		system("cls");
		song.getSong();
		cout << endl;
		cout << "Return to main menu" << endl;
		getline(cin, choice2);
		mp3Menu();
		break;

	case 5:
		system("cls");
		song.getPlaylist();
		cout << endl;
		cout << "Return to main menu" << endl;
		getline(cin, choice2);
		mp3Menu();
		break;
	}
}

void Menu::genreMenu()
{
	Song song;
	cout << "Select genre: " << endl;
	song.getGenre();
	cout << endl;
	cout << "0. Return to main menu" << endl;
	cin >> choice;

	switch (choice)
	{
		
	case 1:
		system("cls");
		cout << "Select song: " << endl;
		song.getGenreSong(song.getGenreVector(), choice);
		cout << endl;
		cout << "0. Return to main menu" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 2:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 3:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 4:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 5:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 0:
			system("cls");
			mp3Menu();
			break;
		}
		break;
	case 2:
		system("cls");
		cout << "Select song: " << endl;
		song.getGenreSong(song.getGenreVector(), choice);
		cout << endl;
		cout << "0. Return to main menu" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 2:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 3:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 4:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 5:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 0:
			system("cls");
			mp3Menu();
			break;
		}
		break;
	
	case 3:
		system("cls");
		cout << "Select song: " << endl;
		song.getGenreSong(song.getGenreVector(), choice);
		cout << endl;
		cout << "0. Return to main menu" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 2:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 3:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 4:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 5:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 0:
			system("cls");
			mp3Menu();
			break;
		}
		break;
	case 4: 
		system("cls");
		cout << "Select song: " << endl;
		song.getGenreSong(song.getGenreVector(), choice);
		cout << endl;
		cout << "0. Return to main menu" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 2:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 3:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 4:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 5:
			system("cls");
			song.printOut(song.getGenreSongVector(), choice);
			break;

		case 0:
			system("cls");
			mp3Menu();
			break;
		}
		break;
	case 0:
		system("cls");
		mp3Menu();
		break;

		
	}


}

void Menu::songMenu()
{
	Song song;
	cout << "Select songs: " << endl;
	song.getSong();
	cout << endl;
	cout << "0. Return to main menu" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 2:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 3:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 4:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 5:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 6:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 7:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 8:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 9:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 10:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 11:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 12:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 13:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 14:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 15:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 16:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 17:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;

	case 18:
		system("cls");
		song.printOut(song.getSongVector(), choice);
		songReturnMenu();
		break;
	
	case 0: 
		system("cls");
		mp3Menu();
		break;
	
	}
}



void Menu::songReturnMenu()
{
	cout << endl;
	cout << "1. Select another song" << endl;
	cout << "0. Return to main menu" << endl;;
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		songMenu();
		break;

	case 0:
		system("cls");
		mp3Menu();
		break;

	default:
		cout << "invalid input." << endl;
		break;
	}
}



void Menu::playlistMenu()
{
	Song song;
	cout << "Select playlist:" << endl;
	song.getPlaylist();
	cout << endl;
	cout << "0. Return to main menu" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		system("cls");
		song.printOut(song.getPlaylistVector(), choice);
		playlistReturnMenu();
		break;

	case 2:
		system("cls");
		song.printOut(song.getPlaylistVector(), choice);
		playlistReturnMenu();
		break;

	case 3:
		system("cls");
		song.printOut(song.getPlaylistVector(), choice);
		playlistReturnMenu();
		break;

	case 4:
		system("cls");
		song.printOut(song.getPlaylistVector(), choice);
		playlistReturnMenu();
		break;


	case 0:
		system("cls");
		mp3Menu();
		break;
	}
}

void Menu::playlistReturnMenu()
{

	cout << endl;
	cout << "1. select another playlist" << endl;
	cout << "0. Return to main menu" << endl;;
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		playlistMenu();
		break;

	case 0:
		system("cls");
		mp3Menu();
		break;

	default:
		cout << "invalid input." << endl;
		break;
	}


}