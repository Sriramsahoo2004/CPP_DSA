#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void Bubble_Sort(int arr[])
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void Insertion_Sort(int arr[])
{
    for (int j = 0; j < 5; j++)
    {
        int i = j;
        // cout << "j :- "<< j << endl;
        while (i > 0 && arr[i - 1] > arr[i])
        {
            // cout << "i :- "<< i << endl;
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
            i--;
        }
    }
}
void Merge(int arr[], int low, int mid, int high)
{ // Solve by devide and conqure
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low]; // We Can Insert a Vector into an Array.
    }
}
void Merge_Sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    Merge_Sort(arr, low, mid);
    Merge_Sort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void Quick_Sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high); // pIndex = pivot Index
        Quick_Sort(arr, low, pIndex - 1);
        Quick_Sort(arr, pIndex + 1, high);
    }
}
int num(int n){
    return log(n + 1) / log(2);
}
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    // Selection_Sort(arr);
    // Bubble_Sort(arr);
    // Insertion_Sort(arr);
    // Merge_Sort(arr, 0, 4);
    // Quick_Sort(arr, 0, 4);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << num(2);
    return 0;
}
