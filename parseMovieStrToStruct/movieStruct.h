//

using namespace std;

struct Movie {
    string title;
    string season;
    int year;
};

// Function to parse the string into a Movie struct
Movie parseMovieString(const string& input) {
    Movie movie;
    stringstream ss(input);
    
    // Parse title
    getline(ss, movie.title, ' ');
    
    // Parse season
    getline(ss, movie.season, ',');
    movie.season.erase(0, 1);       // Remove the 's' prefix from season
    
    // Parse year
    ss >> movie.year;
    
    return movie;
}
