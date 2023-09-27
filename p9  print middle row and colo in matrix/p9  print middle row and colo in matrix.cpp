#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 10);
		}
	}
}
void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	cout << "The Following is a 3x3 random matrix\n";
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			//cout << setw(3) << arr[i][x] << "	";
			printf("  %0*d  ", 2, arr[i][x]);
		}
		cout << endl;
	}
	cout << endl << endl;
}
//void MiddleRowAndColomnOfMatrix(int arr[3][3],  int Rows, int Colos)
//{
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int x = 0; x < Colos; x++)
//		{
//			if (i==round(Rows/2))
//			{
//				cout<<"Middle Row = " << arr[i][x] << "	";
//				cout<<"Middle Colomn = " << arr[x][i] << "	";
//			}
//		}
//	}
//}
void MiddleRowAndColomnOfMatrix(int arr[3][3], int middleRow[3], int middleColos[3],  int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (i==round(Rows/2))
			{
				middleRow[x] = arr[i][x];
				middleColos[x] = arr[x][i];
			}
		}
	}
}

void printArray(int arr[3])
{
	for (int i = 0; i < 3; i++)
	{
		printf("  %0*d  ", 2, arr[i]);
	}
	cout << endl<<endl;
}


int main()
{
	srand((unsigned)time(NULL));
	int arr1[3][3], middleRow[3], middleColos[3];

	fill3X3MatrixWithRandomNumbers(arr1, 3, 3);
	printMatrix3X3(arr1, 3, 3);

	MiddleRowAndColomnOfMatrix(arr1, middleRow, middleColos, 3, 3);

	cout << "Middle Row: \n";
	printArray(middleRow);

	cout << "Middle Colomn: \n";
	printArray(middleColos);



	system("pause>0");

	return 0;
}



