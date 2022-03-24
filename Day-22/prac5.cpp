#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int s)
{
	deque<int> Qi(s);
	sort(Qi.begin(),Qi.end());

	int i;
	for (i = 0; i < s; ++i)
	{
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);
	}

	for (; i < n; ++i)
	{
		cout << arr[Qi.front()] << " ";

		while ((!Qi.empty()) && Qi.front() <= i - s)
			Qi.pop_front();

		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);
	}
	cout << arr[Qi.front()];
}

void printKMin(int arr[], int n, int s)
{
	deque<int> Qi(s);
	sort(Qi.begin(),Qi.end());

	int i;
	for (i = 0; i < s; ++i)
	{
		while ((!Qi.empty()) && arr[i] <= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);
	}

	for (; i < n; ++i)
	{
		cout << arr[Qi.front()] << " ";

		while ((!Qi.empty()) && Qi.front() >= i - s)
			Qi.pop_front();

		while ((!Qi.empty()) && arr[i] <= arr[Qi.back()])
			Qi.pop_back();

		Qi.push_back(i);
	}
	cout << arr[Qi.back()];
}

int main()
{
	int n,s;
	cin>>n>>s;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout << "Max of subarrays: ";
	printKMax(arr, n, s);
	cout << endl << "Min of subarrays: ";
	printKMin(arr, n, s);
	cout<<endl;
	return 0;
}

