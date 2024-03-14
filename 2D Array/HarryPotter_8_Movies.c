#include <stdio.h>
#define NUM_MOVIES 8

void DisplayMovies(const char movies[][50], int num_movies)
{
    printf("Darshan's 8 Harry Potter Movies:\n");
    for (int i = 0; i < num_movies; i=i+1)
    {
        printf("%d. %s\n", i + 1, movies[i]);
    }
}

int main()
{
    const char movies[NUM_MOVIES][50] = {
        "Harry Potter and the Sorcerer's Stone",
        "Harry Potter and the Chamber of Secrets",
        "Harry Potter and the Prisoner of Azkaban",
        "Harry Potter and the Goblet of Fire",
        "Harry Potter and the Order of the Phoenix",
        "Harry Potter and the Half-Blood Prince",
        "Harry Potter and the Deathly Hallows Part 1",
        "Harry Potter and the Deathly Hallows Part 2"};

    DisplayMovies(movies, NUM_MOVIES);

    return 0;
}
