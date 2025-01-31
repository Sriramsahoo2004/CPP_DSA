#include <bits/stdc++.h>
using namespace std;
int LargestElement(int arr[], int n)
{ // We can use any sorting mathod but Time Complexity of this method is most optimal
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int secondLargest(vector<int> &arr, int n)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        { // in case arr = { 1, 2, 4, 7, 5}
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int secondSmallest(vector<int> &arr, int n)
{
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < sSmallest)
        { // in case arr = { 1, 2, 4, 7, 5}
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}
vector<int> getSecondOrderElements(vector<int> &arr)
{
    int n = arr.size();
    int sLargest = secondLargest(arr, n);
    int sSmallest = secondSmallest(arr, n);
    return {sLargest, sSmallest};
}
int main(){
    vector<int> arr = {1, 1, 4, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    vector<int> vcc = getSecondOrderElements(arr);
   cout << "\nSecond Largest element is :" << vcc[1];
    cout << "\nSecond Largest element is :" << vcc[0];


    return 0;
}