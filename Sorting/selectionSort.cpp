/*Program of sorting using SELECTION sort*/
// TIME COMPLEXIITY  BEST Ω(n^2) AVERAGE θ(n^2) WORST O(n^2) where n is the number of elements.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int i,j, minimum,temp;
    int arr[n];
    cout << "Enter elements : " << endl;
    for(i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    /*SELECTION SORT*/
    for(i = 0;i < n - 1;i++)
    {
        /*selecting index of the minimum element*/
        minimum = i;
        for(j = i + 1;j < n;j++)
        {
            if(arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }
        /*swap if new minimum value is found*/
        if(i != minimum)
        {
            temp = arr[minimum];
            arr[minimum] = arr[i];
            arr[i] = temp;
        }
    }
    cout << "Elements after sorting : " << endl;
    for(i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
}
