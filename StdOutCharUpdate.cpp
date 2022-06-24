#include "StdOutCharUpdate.h"
using namespace std;

int main()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // Get handle to standard output
	CONSOLE_SCREEN_BUFFER_INFO csbi; // Holds console info
	GetConsoleScreenBufferInfo(hStdOut, &csbi); // Get console info

	// Those lines are only if you want to use the whole console chars space
	//const int MAX_CHARS_X = csbi.dwSize.X; // Get number of characters in x direction
	//const int MAX_CHARS_Y = csbi.dwSize.Y; // Get number of characters in y direction

	for (int y = 0; y < 3; y++) { // Loop through y direction
		for (int x = 0; x < 3; x++) { // Loop through x direction
			csbi.dwCursorPosition.X = x; // Set x position
			csbi.dwCursorPosition.Y = y; // Set y position
			for (int asciiChar = 33; asciiChar < 127; asciiChar++) { // Loop through ascii characters
				SetConsoleCursorPosition(hStdOut, csbi.dwCursorPosition); // Set cursor position
				cout << char(asciiChar); // Print character
				Sleep(70); // Wait 70ms
			}
		}
	}

	return 0; // Exit program
}
