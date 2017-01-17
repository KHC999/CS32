#include <iostream>
#include <string>
using namespace std;

int direction[4][2] = { { -1,0 },{ 0,-1 },{ 1,0 },{ 0,1 } };
string dir_str[4] = { "N","W","S","E" };

void find_path(char maze[10][11], int bx, int by, int x, int y,
	string path, int numBomb, bool &found);

int main()
{
	char maze[10][11] = {
		"SWWWWWWWWW",
		"..WWWWWWWW",
		"W...WWWWWW",
		"W.WRWWWWWW",
		"..W......W",
		".WWWRW.WRW",
		".WWWRW.W.W",
		"RWW..W.RWW",
		"WWWWWW.WRQ",
		"WWWWWW...W"
	};

	bool found = false;
	string path;
	find_path(maze, 10, 11, 0, 0, path, 2, found);
}


void find_path(char maze[10][11], int bx, int by, int x, int y,
	string path, int numBomb, bool &found)
{
	if (found) return;

	for (int i = 0; i<4; i++)
	{
		int next_x = ______________________;

		int next_y = ______________________;

		if (next_x >= 0 && next_y >= 0 && next_x < bx && next_y < by)
		{
			if (maze[next_x][next_y] == '.')
			{
				maze[next_x][next_y] = 'V';

				find_path(maze, bx, by, next_x, next_y,
					path + dir_str[i], ___________, ____________);

				if (!found)
					maze[next_x][next_y] = '.';
			}
			else if (___________________________ && _________________)
			{
				// Smash the rocks with your bomb if you have any.
				maze[next_x][next_y] = 'V';

				find_path(___________________________________________
					path + dir_str[i] + " Bomb!\n", ___________, ______);

				if (!found)
					maze[next_x][next_y] = ______________
			}
			else if (maze[next_x][next_y] == 'Q')
			{
				path += dir_str[i] + " Found Exit!\n";
				found = true;
				for (int j = 0; j<path.size(); j++)
					cout << path[j];
			}
		}
	}
}
// If you can solve this problem, you will return back to the civilized world.
// If not, then …. (BAD END)
