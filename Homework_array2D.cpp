#include<iostream>
#include<iomanip>
using namespace std;
void display(int num[5][6]);
void graph(int num[5][6]);
int main ()
{
	srand((int unsigned)time(NULL));
	int num[5][6];
	for(int r = 0 ; r < 5 ; r++)
		for(int c = 0 ; c < 6 ; c++)
			num[r][c] = rand()%10 ;
	display(num);
	cout << endl << endl;
	graph(num);
	return 0 ;
}

void display(int num[5][6])
{
	for(int r = 0 ; r < 5 ; r++)
	{
		for(int c = 0 ; c < 6 ; c++)
			cout << num[r][c] << "\t" ;
		cout << endl;
	}
}

void graph(int num[5][6])
{
	cout << "-----------------------graph-------------------------" << endl;
	for (int i = 0 ; i < 6 ; i ++) 
		cout << "\t" << i ;
	cout << endl;
	cout << "-----------------------------------------------------" << endl;
	for(int r = 0 ; r < 5 ; r++)
	{
		cout << r << "|\t" ;
		for(int c = 0 ; c < 6 ; c++)
		{
			if (num[r][c] != 0) cout << "*\t" ;
			else cout << "\t" ;
		}
		cout << endl;
	}
}