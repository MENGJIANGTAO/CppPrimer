// Print each number in the range specified by two integers.

#include <iostream>

int main()
{
    int val1 = 0,val2 = 0;
	cout << "Enter two number:" << endl;
	cin >> val1 >> val2;
//	int max = val1 > val2 ? val1 : val2;
//	int min = val1 < val2 ? val1 : val2;
	if(val1 > val2)
	{
		int temp = val1;
		val1 = val2;
		val2 = temp;
	}
//	while(min <= max)
//	{
//		cout << min << endl;
//		++ min;
//	}
	while(val1 <= val2)
	{
		cout << val1 << endl;
		++ val1;
	}
	return 0;
}


