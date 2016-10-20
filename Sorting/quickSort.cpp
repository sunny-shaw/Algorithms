/*Program of sorting using QUICK SORT sort*/
// TIME COMPLEXIITY  BEST Ω(nlog(n)) AVERAGE θ(nlog(n)) WORST O(n^2) where n is the number of elements.
#include<iostream>
using namespace std;
void quickSort(int low, int up, int arr[]);
int partitionFunc(int low, int up, int arr[]);

int main()
{
    int n, i;
    cout << "Enter the number of elements : " << endl;
    cin >> n;
    int arr[ n ];
    cout << "Enter elements : " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    quickSort(0,n - 1,arr);
    cout << "Elements after sorting : " << endl;
    for(i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;
}
void quickSort(int low, int up, int arr[])
{
    int j;
    if(low < up)
    {
        j = partitionFunc(low,up,arr);  // j is the partition point
        quickSort(low, j - 1,arr); //process left sub-array
        quickSort(j + 1, up, arr);  //process right sub-array
    }
}
int partitionFunc(int low, int up, int arr[])
{
    int pivot,i,j,temp;
    i = low + 1;
    j = up;
    pivot = arr[low];
    while(i <= j)
    {
        while(arr[i] < pivot && (i <= j))
            i++;
        while(arr[j] > pivot)
            j--;
        //swap
        if(i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else
            i++;
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
}

