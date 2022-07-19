#include <bits/stdc++.h>

using namespace std;

class stock{
    public:
        int total;
        queue<int> q;
        float sum = 0;

        float update(int i){
            if(q.size() < total)
            {
                q.push(i);
                sum += i;
                return sum/q.size();
            }
            else
            {
                q.push(i);
                sum += i;
                sum -= q.front();
                q.pop();
                return sum/total;
            }        
        }

};

int main()
{
    int total;
    stock s1;
    cout << "Enter no of periods of EMA to calculate" << endl;
    cin >> total;
    s1.total = total;

    int temp = 0;
    while( temp != -1 )
    {
        cin >> temp;
        if(temp != -1)
            printf("New %d Moving average = %f \n", total , s1.update(temp) );
    }

    cout << "Program stopped";

    return 0;
}