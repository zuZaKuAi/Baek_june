#include<iostream>
#include <queue>
using namespace std;
int main()
{
    int n, x, y;;
    queue<int> deck;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        deck.push(i);
    }
    while (deck.size() > 1)
    {
        deck.pop();
        deck.push(deck.front());
        deck.pop();
    }
    cout << deck.front();
}