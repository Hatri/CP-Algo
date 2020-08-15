#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int id;
    int solved;
    int penalty;
} team;

bool icpcCmp(team a, team b)
{
    if (a.solved != b.solved)
        return a.solved > b.solved;
    else if (a.penalty != b.penalty)

        return a.penalty < b.penalty;
    else
        return a.id < b.id;
}

int main()
{
    int arr[] = {10, 7, 2, 15, 4};
    vector<int> v(arr, arr + 5); // alternative constructor

    // sort descending with vector
    sort(v.rbegin(), v.rend()); // reverse iterator
    for (auto &val : v)
        printf("%d ", val); // access the values
    printf("\n");
    printf("==================\n");

    // sort descending with integer array
    sort(arr, arr + 5);    // ascending
    reverse(arr, arr + 5); // then reverse
    for (int i = 0; i < 5; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    printf("==================\n");

    shuffle(v.begin(), v.end(), default_random_engine()); // shuffle the content
    for (auto &val : v)
        printf("%d ", val);
    printf("\n");
    printf("==================\n");
    partial_sort(v.begin(), v.begin() + 2, v.end()); // partial_sort demo
    for (auto &val : v)
        printf("%d ", val);
    printf("\n");
    printf("==================\n");

    // sort ascending
    sort(arr, arr + 5);         // arr is sorted now
    for (int i = 0; i < 5; ++i) // 2, 4, 7, 10, 15
        printf("%d ", arr[i]);
    printf("\n");
    sort(v.begin(), v.end()); // sort a vector
    for (auto &val : v)       // 2, 4, 7, 10, 15 too
        printf("%d ", val);
    printf("\n");
    printf("==================\n");

    // multi-field sorting example, suppose we have 4 ICPC teams
    team nus[4] = {{1, 1, 10},
                   {2, 3, 60},
                   {3, 1, 20},
                   {4, 3, 60}};