#include <iostream>
#include "../include/Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    /*
    Sales_item sum;

	if(cin >> sum)
	{
		Sales_item item3;
		while(cin >> item3)
		{
			if(sum.isbn() == item3.isbn())
			{
				sum += item3;
				cout << "result:" << sum << endl;
			}
			else
			{
				cout << "result:" << sum << endl;
				sum = item3;
			}
		}
		cout << "result:" << sum << endl;
	}
	else
	{
		cerr << "Error." << endl;
	}
	*/
    return 0;
}
