#include <Windows.h>
#include <iostream>
using namespace std;


void ConsoleTitle(LPCSTR title) {
	SetConsoleTitleA(title);
}
int main() {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 12;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);
	ConsoleTitle("Ur Gay");
	while (1) {
		//Inf Loop and Message Spam "Ur Gay :D"(It's Just a Joke)
		cout << "Ur Gay :D";
		Sleep(500);
	}
	return 0;
}