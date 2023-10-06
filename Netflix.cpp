#include <iostream>
#include <string>
#include <vector>

class Movie {
public:
    std::string title;
    std::string genre;
    int releaseYear;

    Movie(const std::string& title, const std::string& genre, int releaseYear)
        : title(title), genre(genre), releaseYear(releaseYear) {}
};

class NetflixClone {
public:
    void addMovie(const std::string& title, const std::string& genre, int releaseYear) {
        movies.push_back(Movie(title, genre, releaseYear));
    }

    void displayMovies() const {
        for (const auto& movie : movies) {
            std::cout << movie.title << " (" << movie.releaseYear << ") - " << movie.genre << std::endl;
        }
    }

private:
    std::vector<Movie> movies;
};

int main() {
    NetflixClone netflix;

    // Adding movies to the Netflix clone
    netflix.addMovie("Movie 1", "Action", 2020);
    netflix.addMovie("Movie 2", "Comedy", 2019);
    netflix.addMovie("Movie 3", "Drama", 2018);

    // Displaying movies
    std::cout << "Available Movies:" << std::endl;
    netflix.displayMovies();

    return 0;
}
