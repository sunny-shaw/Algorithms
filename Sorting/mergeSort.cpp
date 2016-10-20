/*Program of sorting using MERGE SORT sort*/
// TIME COMPLEXIITY  BEST Ω(nlog(n)) AVERAGE θ(nlog(n)) WORST O(nlog(n)) where n is the number of elements.
#include<iostream>
using namespace std;
void mergeSort(int low, int up, int arr[]);
void merge(int arr[],int temp[],int low1,int up1,int low2,int up2);
void copy(int arr[],int temp[],int low,int up);

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
    mergeSort(0,n - 1,arr);
    cout << "Elements after sorting : " << endl;
    for(i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";

    }
    return 0;
}
void mergeSort(int low, int up, int arr[])
{
    int mid;
    int temp[up + 1]; //temporary array
    if(low < up) //If more than one elements
    {
        mid = (low + up) / 2;  // mid point
        mergeSort(low,mid,arr); //process left sub-array
        mergeSort(mid + 1,up,arr);  //process right sub-array

        merge(arr,temp,low,mid,mid + 1,up); // merging arr[low:mid] and arr[mid + 1,up] to temp[low,up]
        copy(arr,temp,low,up); // copying temp[low:up] to arr[low:up]
    }
}
void merge(int arr[],int temp[],int low1,int up1,int low2,int up2)
{
    int i = low1, j = low2, k = low1;
    while((i <= up1) && (j <= up2))
    {
        if(arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }
    while(i <= up1)
    {
        temp[k++] = arr[i++];
    }
    while(j <= up2)
    {
        temp[k++] = arr[j++];
    }
}
void copy(int arr[],int temp[],int low,int up)
{
    int i;
    for(i = low;i <= up;i++)
    {
        arr[i] = temp[i];
    }
}

