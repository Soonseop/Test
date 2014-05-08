#include <iostream>
#include <vector>

using namespace std;

#define LOOP_COUNTER	10

int main(int argc, char* argv[])
	{
	vector<int> intv;

	for (int i = 0; i < LOOP_COUNTER; i++)
		{
		intv.push_back(i);
		}
	
	cout << "Hello, World!" << endl;
	return 0;
	}
