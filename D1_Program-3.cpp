#include <iostream>
using namespace std;
class shoppingList
{
	double price;
	string name;
	int code;
	static double total, tmp1;

public:
	void ina()
	{
		cout << "Enter name of the Item: ";
		cin >> name;
	}
	void ipr()
	{
		cout << "Enter price of the Item: ";
		cin >> price;
		total = total + price;
		tmp1 = total;
	}
	void set_code(int c)
	{
		code = c;
	}
	void display1()
	{
		cout << "Code: " << code << "\nName: " << name << "\nPrice: " << price << "\n";
	}
	void Total1()
	{
		cout << "TOTAL: " << total << "\n";
	}
	void Delete()
	{
		tmp1 = tmp1 - price;
	}
	void Total2()
	{
		cout << "TOTAL: " << tmp1 << "\n";
	}
};
double shoppingList::total = 0.0;
double shoppingList::tmp1 = 0.0;
int main()
{
	const int nn = 100;
	int m1 = 0, n;
	string name;
	double price;
	cout << "Enter numbers of items to add in the List: ";
	cin >> n;
	shoppingList ob[nn];
	for (int i = 0; i < n; i++)
	{
		ob[i].ina();
		ob[i].ipr();
		ob[i].set_code(i);
	}
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		ob[i].display1();
	}
	ob[n - 1].Total1();
	int choice, m, code1, code2[nn], k = 0, flag = 0, tr = 1;
	do
	{
		cout << "Enter 1 to Add any item or 2 to Delete any item: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Enter number of item to Add: ";
			cin >> m1;
			for (int i = n; i < n + m1; i++)
			{
				ob[i].ina();
				ob[i].ipr();
				ob[i].set_code(i);
			}
			cout << "\n";
			for (int i = 0; i < n + m1; i++)
			{
				ob[i].display1();
				if (i == n + m1 - 1)
					ob[i].Total1();
			}
			break;
		}
		case 2:
		{
			cout << "Enter the number of item you want to Delete: ";
			cin >> m;
			for (int i = 0; i < m; i++)
			{
				cout << "Enter the code of the item for deletion: ";
				cin >> code1;
				for (int j = 0; j < n; j++)
				{
					if (j == code1)
					{
						code2[k] = j;
						k++;
						ob[j].Delete();
					}
				}
			}
			cout << "\n";
			for (int j = 0; j < n; j++)
			{
				for (int i = 0; i < k; i++)
				{
					flag = 0;
					if (code2[i] == j)
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
				{
					continue;
				}
				ob[j].display1();
			}
			ob[0].Total2();
			break;
		}
		default:
		{
			cout << "\nWrong Choice!";
			break;
		}
		}
		cout << "Enter 0 to terminate: ";
		cin >> tr;
	} while (tr != 0);
	return 0;
}