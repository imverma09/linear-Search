#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Size of arry :-  ";
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Give me elements of " << i << " is : ";
        cin >> arr[i];
    }

    int search;
    cout << "Enter a number to find in array : ";
    cin >> search;
    for (int j = 0; j < a; j++)
    {
        if (arr[j] == search)
        {
            cout <<"The number "<<arr[j]<< " found at index " << j<<".";
            cout<<"Thanks for visiting";
            return 0;
        }
    }
    cout<<"not found\n";
    cout<<"Good Job"<<endl;
    cout<<"Thanks for visiting";
}
