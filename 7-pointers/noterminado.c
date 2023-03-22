#include <stdio.h>
#define ROWS 12
#define COLUMNS 12

void print_arr(char mazemap[][COLUMNS], unsigned int i, unsigned int j);
void maze_traversal(char maze[][COLUMNS], int x, int y);

/**
 * main - (Maze Traversal)
 * Return: 0 if is success
 */
int main(void)
{
	char grid[ROWS][COLUMNS] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
				    {'#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#'},
				    {'.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#'},
				    {'#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#'},
				    {'#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.'},
				    {'#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
				    {'#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
				    {'#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#'},
				    {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#'},
				    {'#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
				    {'#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
				    {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
	};
	print_arr(grid, 0, 0);

	return (0);
}



void maze_traversal(char maze[][COLUMNS], int x, int y)
{
	/* Right Value */
	if (maze[x + 1][j] == '#' && maze[x][j - 1] != '#') {
		--y;
		maze[x][y] = 'K';
		print_arr(mazemap, i, j);
		maze_traversal(maze, x, y);
	}
	/* Left Value */
	if (maze[x - 1][j] == '#' && maze[x][j + 1] != '#') {
		++x;
	}
	/* Down Value */
	if (maze[x][j + 1] == '#' && maze[x][j - 1] != '#') {
		--x;
	}
	/* Up Value */
	if (maze[x][j + 1] == '#' && maze[x][j - 1] != '#')
}


/**
 * print_arr - Print a matrix with recursion
 * @mazemap: (char **) Contain the pretermined maze
 * @i: (unsigned int) Rows
 * @j: (unsigned int) Columns
 *
 */
void print_arr(char mazemap[][COLUMNS], unsigned int i, unsigned int j)
{
	if (i == 12) {
		return;
	} else if (j == 11) {
		printf("%c\n", mazemap[i][j]);
		j = 0;
		++i;
	} else {
		printf("%c ", mazemap[i][j]);
		++j;
	}

	print_arr(mazemap, i, j);
}
