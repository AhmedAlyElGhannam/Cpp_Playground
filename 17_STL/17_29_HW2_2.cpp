#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// asteroids collision?!
void simulate_asteroid_collision(vector<int> &asteroids)
{
	// situations to consider:
	// 1. if 2 asteroids are colliding with EQUAL sizes, they cancel each other (1st going right, 2nd going left)
	// 2. if 2 asteroids are colliding with different sizes, the bigger one remains and the smaller vanishes (1st going right, 2nd going left)
	// 3. 2 asteroids going in the same direction do not impact each other
	vector<int> aftermath;
	bool is_kaboom;
	
	for (auto &asteroid : asteroids)
	{
		is_kaboom = false;
		while(!aftermath.empty() && asteroid < 0 && 0 < aftermath.back())
		{
			if (aftermath.back() < (-asteroid))
			{
				aftermath.pop_back(); // destroy it
				continue; // see if anything else will be destroyed
			}
			else if (aftermath.back() == (-asteroid))
				aftermath.pop_back(); // both cancel each other
			is_kaboom = true;
			break;
		}
		if (!is_kaboom)
			aftermath.push_back(asteroid);
	}
	aftermath.swap(asteroids);
}

void print_asteroids(vector<int> asteroids)
{
	cout << "[ ";
	for (auto &val : asteroids)
		cout << val << " ";
	cout << "]" << endl;
}

int main() 
{
	vector<int> asteroids;
	//for (auto &val : asteroids)
	asteroids.push_back(10);
	asteroids.push_back(2);
	asteroids.push_back(-5);
	
	// printing asteroids before collision
	print_asteroids(asteroids);
	
	simulate_asteroid_collision(asteroids);
	
	// print asteroids after collision
	print_asteroids(asteroids);
	
	return 0;
}
