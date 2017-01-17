#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
void findBombs(string field[], map<int, vector<int> > &mp)
{
	for (int i = 0; i<5; i++)
	{
		vector<int> row;
		for (int j = 0; j < field[i].size(); j++)
		{
			if (field[i][j] == 'B')
				row.push_back(j);
		}
		mp[i] = _________________________
	}
}
void output(map<int, vector<int> > &mp)
{
	cout << "The bombs are located at:" << endl;
	map<int, vector<int> >::iterator 	map_it = ________________________________
		while (map_it != mp.end())
		{
			vector<int>::iterator  		vec_it = ________________________________
				// or vector<int>::iterator  	vec_it = (*map_it).second.begin();
				while (vec_it != map_it->second.end())
				{
					cout << "( " << map_it->first << " , " << ____________ << " ) " << endl;
					vec_it++;
				}
			__________________________________
		}
}
int main()
{
	string field[5] =
	{   "...B....",
		"..B.....",
		".......B",
		"B.......",
		"........"
	};

	map<int, vector<int> > mp;

	findBombs(field, mp);

	output(mp);
}
