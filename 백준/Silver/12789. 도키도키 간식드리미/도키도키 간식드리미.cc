#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>st1;
    stack<int>st2;
    int n, x,now=1,len;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        
        st1.push(st.top());
        st.pop();
    }
    len = st1.size();
    while (now<=len)
    {
        if ((!st2.empty()) && (st2.top() == now))
        {
            st2.pop();
            now++;
        }
        else
        {
            while ((!st1.empty()) && (st1.top() != now))
            {
                st2.push(st1.top());
                st1.pop();
            }

            if ((!st1.empty()) && (st1.top() == now))
            {
                st1.pop();
                now++;
            }
            else if ((!st2.empty()) && (st2.top() == now))
            {
                st2.pop();
                now++;
            }
            else
                break;
        }
    }
    if (now > len)
        cout << "Nice";
    else
        cout << "Sad";

    return 0;
}