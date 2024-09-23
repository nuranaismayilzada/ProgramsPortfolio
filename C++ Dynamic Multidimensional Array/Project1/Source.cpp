#include<iostream>
#include<iomanip>
using namespace std;
int** Reserve_Array(int row, int col) {
	int** arr = new int* [row] {};
	for (size_t i = 0; i < row; i++)
	{
		arr[i] = new int[col] {};
	}
	return arr;
}

void Init_Array(int** arr, int row, int col) {
	int min = 1, max = 9;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			arr[i][k] = min + rand() % (max - min + 1);
		}
	}
}
void Print_Array(int** arr, int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			cout << setw(3) << arr[i][k] << " ";
		}
		cout << endl;
	}
}
void Delete_Array(int** arr, int row, int col) {
	for (size_t i = 0; i < row; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}
//1.Matrixi x oxu uzre qatlayin ve ust uste dusen elementleri vurun.
int** Fold_Along_X_Axis(int** arr, int row, int col) {
	int** new_Arr = Reserve_Array(row / 2, col);
	int multiply = 1;
	for (size_t i = 0; i < row / 2; i++)
	{
		for (size_t k = 0; k < col; k++)
		{
			multiply = arr[i][k] * arr[row - i - 1][k];
			new_Arr[i][k] = multiply;
		}
	}
	return new_Arr;
}

//2.Matrixi y oxu uzre qatlayin ve ust uste dusen elementleri toplayin.

int** Fold_Along_Y_Axis(int** arr, int row, int col) {
	int** new_Arr = Reserve_Array(row, col / 2);
	int sum = 0;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col / 2; k++)
		{
			sum = arr[i][k] + arr[i][col - k - 1];
			new_Arr[i][k] = sum;
		}
	}
	return new_Arr;
}

//3.Sutunu minimal olcuye gelene qeder sixisdirin.

int** Fold_Along_X_Axis_Minimal_Size(int** arr, int row, int col) {
	int** new_Arr;
	while (row > 1)
	{
		new_Arr = Reserve_Array(row / 2, col);
		for (size_t i = 0; i < row / 2; i++)
		{
			for (size_t k = 0; k < col; k++)
			{
				new_Arr[i][k] = arr[i][k] * arr[row - i - 1][k];
			}
		}

		arr = new_Arr;
		row = row / 2;
	}
	return arr;
}

//4.Setiri minimal olcuye gelene qeder sixisdirin.
int** Fold_Along_Y_Axis_Minimal_Size(int** arr, int row, int col) {
	int** new_Arr;
	while (col > 1)
	{
		new_Arr = Reserve_Array(row, col / 2);

		for (size_t i = 0; i < row; i++)
		{
			for (size_t k = 0; k < col / 2; k++)
			{
				new_Arr[i][k] = arr[i][k] + arr[i][col - k - 1];
			}
		}
		arr = new_Arr;
		col = col / 2;
	}
	return arr;
}

void main() {
	//----------------------------------------------------------------------------------------------

		//1.Matrixi x oxu uzre qatlayin ve ust uste dusen elementleri vurun.

		//int row = 8;
		//int col = 8;
		//auto arr = Reserve_Array(row, col);
		//Print_Array(arr, row, col);
		//cout << endl;
		//cout << endl;
		//Init_Array(arr, row, col);
		//Print_Array(arr, row, col);
		//cout << endl;
		//int** res=Fold_Along_X_Axis(arr, row, col);
		//Print_Array(res, row/2, col);
		//Delete_Array(arr, row, col);
		//Delete_Array(res, row, col);

	//---------------------------------------------------------------------------------------------
		//2.Matrixi y oxu uzre qatlayin ve ust uste dusen elementleri toplayin.

		//int row = 8;
		//int col = 8;
		//auto arr = Reserve_Array(row, col);
		//Print_Array(arr, row, col);
		//cout << endl;
		//cout << endl;
		//Init_Array(arr, row, col);
		//Print_Array(arr, row, col);
		//cout << endl;
		//int** res=Fold_Along_Y_Axis(arr, row, col);
		//Print_Array(res, row, col/2);
		//Delete_Array(arr, row, col);
		//Delete_Array(res, row, col);

	//---------------------------------------------------------------------------------------------------
		//3.Sutunu minimal olcuye gelene qeder sixisdirin.

	//int row = 4;
	//int col = 4;
	//auto arr = Reserve_Array(row, col);
	//Print_Array(arr, row, col);
	//cout << endl;
	//cout << endl;
	//Init_Array(arr, row, col);
	//Print_Array(arr, row, col);
	//cout << endl;
	//int** res = Fold_Along_X_Axis_Minimal_Size(arr, row, col);
	//Print_Array(res, row/row, col);
	//Delete_Array(arr, row, col);
	//Delete_Array(res, row/row, col);

	//---------------------------------------------------------------------

	//4.Setiri minimal olcuye gelene qeder sixisdirin.

	//int row = 4;
	//int col = 4;
	//auto arr = Reserve_Array(row, col);
	//Print_Array(arr, row, col);
	//cout << endl;
	//cout << endl;
	//Init_Array(arr, row, col);
	//Print_Array(arr, row, col);
	//cout << endl;
	//int** res = Fold_Along_Y_Axis_Minimal_Size(arr, row, col);
	//Print_Array(res, row, col/col);
	//Delete_Array(arr, row, col);
	//Delete_Array(res, row, col/col);

	//---------------------------------------------------------------------

}
