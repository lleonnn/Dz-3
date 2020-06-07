#include<iostream>
#include<chrono>
using namespace std;
using namespace::chrono;

void ucitavanje(int& Redak, int& Stupac, char A) {

	cout << A << " Redak" << endl;
	cin >> Redak;
	cout << A << " Stupac" << endl;
	cin >> Stupac;
	Stupac--;
	Redak--;
}
void ucitavanje1(int& Redak, int& Stupac, char B) {

	cout << B << " Redak" << endl;
	cin >> Redak;
	cout << B << " Stupac" << endl;
	cin >> Stupac;
	Stupac--;
	Redak--;
}

int main() {
	int redakA, stupacA;
	int redakB, stupacB;
	char polje[20][40];

	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 40; j++)
			polje[i][j] = '-';

	ucitavanje(redakA, stupacA, 'A');
	polje[redakA][stupacA] = 'A';
	ucitavanje1(redakB, stupacB, 'B');
	polje[redakB][stupacB] = 'B';
	int redakX = redakA;
	int stupacY = stupacA;


	while (redakX != redakB || stupacY != stupacB) {

		if (stupacY < stupacB)
		{
			stupacY++;
		}
		else if (stupacY > stupacB)
		{
			stupacY--;
		}
		else if (redakX < redakB)
		{
			redakX++;
		}
		else if (redakX > redakB)
		{
			redakX--;
		}

		system("cls");
		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				if (i == redakX && j == stupacY)
				{
					cout << "X";
				}
				else
				{
					cout << polje[i][j];

				}

			}
			cout << endl;
		}

	}

	return 0;
}