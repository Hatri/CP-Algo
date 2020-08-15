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
}