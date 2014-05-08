#include <iostream>
#include <vector>

using namespace std;

#define LOOP_COUNTER	10

using namespace std;

int main(int argc, char* argv[])
	{
	vector<int> intv;

	for (int i = 0; i < LOOP_COUNTER; i++)
		{
		intv.push_back(i*2);
		}

	for (int i = 0; i < intv.size(); i++)
		{
		cout << intv[i] << "\tHello, World!" << endl;
		}
	
	return 0;
	}

