#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item currItem, valItem;
    if (std::cin >> currItem) {
        int cnt = 1;
        while (std::cin >> valItem) {
            if (valItem.isbn() == currItem.isbn())
                ++cnt;
            else {
                std::cout << currItem << " occurs " << cnt << " times "
                          << std::endl;
                currItem = valItem;
                cnt = 1;
            }
        }

        std::cout << currItem << " occurs " << cnt << " times " << std::endl;
    }
    return 0;

    /*
    Sales_item item1;
	Sales_item item2;
	if(cin >> item1)
	{
		int counter = 1;
		while(cin >> item2)
		{
			if(item1.isbn() == item2.isbn())
			{
				++counter;
			}
			else
			{
				cout << item1 << "Sales : " << counter << " times." << endl;
				item1 = item2;
				counter = 1;
			}
		}
		cout << item1 << "Sales : " << counter << " times." << endl;
	}
	else
	{
		cerr << "Error." << endl;
	}
	
    unsigned sold() const
	{
		return units_sold;
	}
	*/
}

