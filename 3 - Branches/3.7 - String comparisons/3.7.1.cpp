#include <iostream>
#include <string>
using namespace std;

/*
	Write an if-else statement that prints "Goodbye" if userString is "Quit", else prints "Hello". End with newline.
*/

int main() {
   string userString;

   userString = "Quit";

   /* Your solution goes here  */
	if(userString == "Quit"){
		cout << "Goodbye";
	}
	else{
		cout << "Hello";
	}

	cout << endl;
   return 0;
}
