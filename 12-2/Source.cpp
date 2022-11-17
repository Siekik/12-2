#include <iostream>
using namespace std;

int charcnt(char* ptr, char c);
int repeat(char* ptr);
void reverse(char* ptr);

int main() {
	cout << "Enter a string: ";
	char* ptr = new char[80];
	char c;
	cin.getline(ptr, 80, '\n');
	cout << "Enter a character: ";
	cin >> c;

	cout << "The character '" << c << "' appears " << charcnt(ptr, c) << " times in the string.";
	cout << "\nThere are " << repeat(ptr) << " repeated characters in the string.";
	cout << endl;
	reverse(ptr);
}
int charcnt(char* ptr, char c) {
	int count = 0;
	for (int i = 0; i < 81; i++) {
		if (ptr[i] == c) {
			count++;
		}
	}
	return count;
}
int repeat(char* ptr) {
	int count = 0;
	for (int i = 0; i < 81; i++) {
		if (ptr[i] == ptr[i + 1] && ptr[i] != ptr[i - 1]) {
			count++;
		}
	}
	return count - 2;
}
void reverse(char* ptr) {;
	int count = 0;
	for (int i = 0; ptr[i] != '\0'; i++)
	{
		count++;
	}
	for (int i = count; i >= 0; i--) {
		cout << ptr[i];
	}
}
 