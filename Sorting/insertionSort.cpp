/*Program of sorting using INSERTION SORT sort*/
// TIME COMPLEXIITY  BEST Ω(n) AVERAGE θ(n^2) WORST O(n^2) where n is the number of elements.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int i,j,k;
    int arr[n];
    cout << "Enter elements : " << endl;
    for(i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    /*INSERTION SORT*/
    for(i = 1;i < n;i++)
    {
        k = arr[i]; //k is to be inserted at proper place
        for(j = i - 1;j >=0 && k < arr[j];j--)
        {
            arr[j + 1] = arr[j]; //shifting elements
        }
        arr[j + 1] = k; // inserted at proper place
    }
    cout << "Elements after sorting : " << endl;
    for(i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
}
