#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>


#define MAX_SIZE 20
#define MAX_ATTEMPTS 100

// Direction vectors for word placement
const int dx[] = {1, 1, 0, 1};  // vertical, diagonal down, horizontal, diagonal up
const int dy[] = {0, 1, 1, -1};

// Function to check if a word fits at a given position and direction
int canPlaceWord(char grid[MAX_SIZE][MAX_SIZE], int size, char* word, int x, int y, int dir) {
    int len = strlen(word);
    int newX, newY;
    
    // Check if word would go out of bounds
    newX = x + dx[dir] * (len - 1);
    newY = y + dy[dir] * (len - 1);
    if (newX < 0 || newX >= size || newY < 0 || newY >= size)
        return 0;
    
    // Check if path is clear or matches word
    for (int i = 0; i < len; i++) {
        int currX = x + dx[dir] * i;
        int currY = y + dy[dir] * i;
        if (grid[currY][currX] != '.' && grid[currY][currX] != word[i])
            return 0;
    }
    return 1;
}

// Function to place a word in the grid
void placeWord(char grid[MAX_SIZE][MAX_SIZE], char* word, int x, int y, int dir) {
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        int currX = x + dx[dir] * i;
        int currY = y + dy[dir] * i;
        grid[currY][currX] = word[i];
    }
}

// Function to try placing a word in the grid
int tryPlaceWord(char grid[MAX_SIZE][MAX_SIZE], int size, char* word) {
    int attempts = 0;
    while (attempts < MAX_ATTEMPTS) {
        int x = rand() % size;
        int y = rand() % size;
        int dir = rand() % 4;
        
        if (canPlaceWord(grid, size, word, x, y, dir)) {
            placeWord(grid, word, x, y, dir);
            return 1;
        }
        attempts++;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        printf("Usage: %s <size> <word1> [word2] ...\n", argv[0]);
        return 1;
    }

    // Initialize random seed
    srand(time(NULL));
    
    // Get puzzle size
    int size = atoi(argv[1]);
    if (size <= 0 || size > MAX_SIZE) {
        printf("Size must be between 1 and %d\n", MAX_SIZE);
        return 1;
    }
    
    // Initialize grid with dots
    char grid[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            grid[i][j] = '.';
    
    // Place each word
    for (int i = 2; i < argc; i++) {
        // Convert word to uppercase
        char word[MAX_SIZE];
        strcpy(word, argv[i]);
        for (int j = 0; word[j]; j++)
            word[j] = toupper(word[j]);
            
        if (!tryPlaceWord(grid, size, word)) {
            printf("Could not place word: %s\n", word);
            return 1;
        }
    }
    
    // Fill remaining spaces with random letters
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (grid[i][j] == '.')
                grid[i][j] = 'A' + (rand() % 26);
        }
    }
    
    // Print the puzzle
    printf("\nWord Search Puzzle:\n\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%c ", grid[i][j]);
        printf("\n");
    }
    
    // Print word list
    printf("\nWords to find:\n");
    for (int i = 2; i < argc; i++)
        printf("%s\n", argv[i]);
    
    return 0;
}