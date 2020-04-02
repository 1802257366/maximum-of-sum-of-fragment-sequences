#include <iostream>

using namespace std;

#define SIZE 100											//序列最大长度

void Max_Calculation(int *arr, int *max_arr, int index);	//计算max{arr[i]+arr[i+1]+...+arr[index]},0<=i<=index,并存在max_arr[index]


int main()
{
	while (1)
	{
		int arr[SIZE];
		int max_arr[SIZE] = { INT_MIN };
		int Max = INT_MIN;
		int count;
		cout << "输入序列长度：" << endl;
		cin >> count;
		if (count > SIZE)
		{
			cout << "Over preset size！";
			return -1;
		}
		cout << "输入序列：" << endl;
		for (int i = 0; i < count; i++)
		{
			cin >> arr[i];
			Max_Calculation(arr, max_arr, i);
			if (Max < max_arr[i])
				Max = max_arr[i];
		}
		if (Max < 0)
			Max = 0;
		cout << "最大片段序列和为：" << Max << endl << endl;
	}
	return 0;
}

void Max_Calculation(int *arr, int *max_arr, int index)
{
	if (index == 0)
		max_arr[0] = arr[0];
	else if (max_arr[index - 1] > 0)
		max_arr[index] = max_arr[index - 1] + arr[index];
	else
		max_arr[index] = arr[index];
}
