#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // 8的倍数
    if ((s.size()) % 8 == 0)
    {
        // cout<<(s.size()) % 8;
        int loop = s.size() / 8;
        for (int j = 0; j < loop; j++)
        {
            if (j != 0)
            {
                cout << endl;
            }

            for (int i = (0 + j * 8); i < (8 + (j * 8)); i++)
            {
                cout << s[i];
            }
        }
    }

    // 不是8的倍数
    else
    {
        // 不够8
        if (s.size() <= 8)
        {
            int needc = 8 - s.size();
            string nc = "0";
            for (int i = 0; i < needc; i++)
            {
                s = s + nc;
            }
            // 新s走上面循环
            int loop = 1;
            for (int j = 0; j < loop; j++)
            {
                if (j != 0)
                {
                    cout << endl;
                }

                for (int i = (0 + j * 8); i < (8 + (j * 8)); i++)
                {
                    cout << s[i];
                }
            }
        }
        // 大于8
        else
        {
            int needc = (s.size()) % 8;
            string nc = "0";
            for (int i = 0; i < 8 - needc; i++)
            {
                s = s + nc;
            }
            // 新s走上面循环
            int loop = s.size() / 8;
            for (int j = 0; j < loop; j++)
            {
                if (j != 0)
                {
                    cout << endl;
                }

                for (int i = (0 + j * 8); i < (8 + (j * 8)); i++)
                {
                    cout << s[i];
                }
            }
        }
    }
}