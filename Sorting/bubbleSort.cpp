/*Program of sorting using BUBBLE sort*/
// TIME COMPLEXIITY  BEST Ω(n) AVERAGE θ(n^2) WORST O(n^2) where n is the number of elements.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int i,j,temp,swap;
    int arr[n];
    cout << "Enter elements : " << endl;
    for(i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    /*BUBBLE SORT*/
    for(i = 0;i < n - 1;i++)
    {
        swap = 0;
        for(j = 0;j < n - i - 1;j++)
        {
            //swapping adjacent elements
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap++;
            }
        }
        /*break if no swapping i.e all elements are in correct position*/
        if(swap == 0)
        {
           break;
        }
    }
    cout << "Elements after sorting : " << endl;
    for(i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
}
