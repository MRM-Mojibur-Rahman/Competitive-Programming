#include <bits/stdc++.h>
using namespace std;

void insertionSort()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    for (int i = 1; i < n; i++)
    {
        int j = i;
        int tem = a[j];
        while (j > 0 && tem < a[j - 1])
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = tem;
    }
    for (auto it : a)
        cout << it << " ";
    cout << endl;
}
void selectionSort()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = i; j < n; j++)
        {
            if (a[j] < a[minIdx])
                minIdx = j;
        }
        swap(a[i], a[minIdx]);
    }
    for (auto it : a)
        cout << it << " ";
    cout << endl;
}
int partitaion(vector<int> &a, int l, int r)
{
    int pivot = a[r];
    int j = l;
    for (int i = l; i < r; i++)
    {
        if (pivot >= a[i])
        {
            swap(a[j], a[i]);
            j++;
        }
    }
    swap(a[j], a[r]);
    return j;
}
void quickSort(vector<int> &a, int l, int r)
{
    if(l>=r) return;
    int mid = partitaion(a, l, r);
    quickSort(a,l,mid-1);
    quickSort(a,mid+1,r);
}

void mergeSort()
{
    
}

int main()
{
   

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    quickSort(a,0,n-1);
    for (auto it : a)
        cout << it << " ";
    cout << endl;

    return 0;
}
