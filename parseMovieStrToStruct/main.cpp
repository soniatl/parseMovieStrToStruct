//
// used generative AI to create .h file
//
#include <iostream>
#include <string>
#include <sstream>
#include "movieStruct.h"

using namespace std;

int main() {
    string movieStr = "24 s2,2014";
    Movie parsedMovie = parseMovieString(movieStr);
    
    cout << "Title: " << parsedMovie.title << endl;
    cout << "Season: " << parsedMovie.season << endl;
    cout << "Year: " << parsedMovie.year << endl;

    return 0;
}
