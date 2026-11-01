#include <iostream>
using namespace std;

void solve()
{
  long long employees, projects, months;
  cin >> employees >> projects >> months;

  long long answer = 0;
  long long d = projects - employees;

  while (months > 0)
  {
    if (employees > d)
    {
      answer += months * d;
      break;
    }

    answer += projects % employees;
    projects++;
    employees++;
    months--;
  }

  cout << answer << "\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}