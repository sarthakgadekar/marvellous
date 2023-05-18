// array intersection using hashmap and return intersection elements in a vector
#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;

vector<int> Intersection(int arr1[], int arr2[], int size1, int size2)
{
    unordered_map<int, int> map;
    int count=0;                                // to store count of repeatative number
    vector<int> V;                              //to store and return common element vector
    for (int i = 0; i < size1; i++)
    {
        if (map.count(arr1[i]) == 0)
        {
            map[arr1[i]] = 1;
        }
        else
        {
            count = map[arr1[i]];
            map[arr1[i]];
        }
    }
    for (int i = 0; i < size2; i++)
    {
        if(map.count(arr2[i]) > 0)
        {
            int count=map[arr2[i]];
            if(count !=0)
            {
                V.push_back(arr2[i]);
                map[arr2[i]]=count-1;
            }

        }
    }
    return V;
}
int main()
{

    int arr1[] = {2, 3, 4, 4, 5, 6, 6, 5};
    int arr2[] = {3, 2, 2, 3, 4, 6, 6, 6};
    int size1 = 8;
    int size2 = 8;
    vector<int> vec=Intersection(arr1, arr2, size1, size2);
    for(auto &i: vec)
    {
        cout<<i<<" ";
    }
    return 0;
}