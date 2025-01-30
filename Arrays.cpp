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
int main(){
    vector<int> arr = {1, 1, 4, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nLargest element is :" << LargestElement(arr, 5);
    cout << "\nLargest element is :" << secondLargest(arr, 5);


    return 0;
}