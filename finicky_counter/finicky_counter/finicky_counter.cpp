// Finicky Counter
// shows break and continue

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int count = 0;
	while (true)
	{
		count += 1;
		// end loop if count is > 10
		if (count > 10)
		{
			break;
		}

		// skip number 5
		if (count == 5)
		{
			continue;
		}

		cout << count << endl;
	}

	return 0;
}