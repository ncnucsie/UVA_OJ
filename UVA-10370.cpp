#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int cases;
    cin >> cases;

    while(cases--)
    {
        int n;
        cin >> n;

        int grade[n];
        double sum = 0, mean;
        for (int i=0; i<n; i++)
        {
            cin >> grade[i];
            sum += grade[i];
        }

        mean = sum / n;

        int num_above = 0;
        for (int i=0; i<n; i++)
        {
            if (grade[i] > mean)
                num_above++;
        }

        double percent_above = (double) num_above / n;

        printf("%.3f\%\n", percent_above*100);
    }

    return 0;
}
