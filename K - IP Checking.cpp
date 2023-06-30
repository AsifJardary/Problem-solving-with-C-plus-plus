#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int main()
{
    int T, it;
    string S,S_main,S_sec, a, b, c, d;
    cin >> T;
    for (it = 1; it <= T; it++)
    {
        cin >> S;
        cin >> S_sec;

        int pos = S.find('.');
        a = S.substr(0, pos);
        S[pos] = 'x';

        int pos2 = S.find('.');
        int f_pos = pos2 - pos;
        b = S.substr(pos + 1, f_pos - 1);
        S[pos2] = 'x';

        int pos3 = S.find('.');
        f_pos = pos3 - pos2;
        c = S.substr(pos2 + 1, f_pos - 1);
        S[pos3] = 'x';

        f_pos = S.length() - pos3;
        d = S.substr(pos3 + 1, f_pos);



        int a_int = stoi(a);

        int b_int = stoi(b);

        int c_int = stoi(c);

        int d_int = stoi(d);
        string s1, s2, s3, s4;
        if (a_int > 0)
        {
            while (a_int > 0)
            {
                int res = a_int % 2;
                string res_str = to_string(res);
                s1 = s1 + res_str;
                a_int = a_int / 2;

            }
            reverse(s1.begin(), s1.end());
            int s1_length = 8 - s1.length();
            if (s1_length == 7)
            {
                s1 ="0000000" + s1 ;
            }
            else if (s1_length == 6)
            {
                s1 = "000000"+ s1;
            }
            else if (s1_length == 5)
            {
                s1 ="00000"+ s1 ;
            }
            else if (s1_length == 4)
            {
                s1 = "0000" + s1;
            }
            else if (s1_length == 3)
            {
                s1 ="000" + s1;
            }
            else if (s1_length == 2)
            {
                s1 = "00" + s1;
            }
            else if (s1_length == 1)
            {
                s1 = "0" + s1;
            }
        }
        else if (a_int == 0)
        {
            s1 = "00000000" + s1;
        }

        S_main = s1 + ".";
        if (b_int > 0)
        {
            while (b_int > 0)
            {
                int res = b_int % 2;
                string res_str = to_string(res);
                s2 = s2 + res_str;
                b_int = b_int / 2;

            }
            reverse(s2.begin(), s2.end());
            int s2_length = 8 - s2.length();
            if (s2_length == 7)
            {
                s2 = "0000000" + s2;
            }
            else if (s2_length == 6)
            {
                s2 = "000000" + s2;
            }
            else if (s2_length == 5)
            {
                s2 = "00000" + s2;
            }
            else if (s2_length == 4)
            {
                s2 = "0000" + s2;
            }
            else if (s2_length == 3)
            {
                s2 = "000" + s2;
            }
            else if (s2_length == 2)
            {
                s2 = "00" + s2;
            }
            else if (s2_length == 1)
            {
                s2 = "0" + s2;
            }
        }
        else if (b_int == 0)
        {
            s2 = "00000000" + s2;
        }

        S_main = S_main + s2;

        S_main = S_main + ".";
        if (c_int > 0)
        {
            while (c_int > 0)
            {
                int res = c_int % 2;
                string res_str = to_string(res);
                s3 = s3 + res_str;
                c_int = c_int / 2;

            }
            reverse(s3.begin(), s3.end());
            int s3_length = 8 - s3.length();
            if (s3_length == 7)
            {
                s3 = "0000000" + s3;
            }
            else if (s3_length == 6)
            {
                s3 = "000000" + s3;
            }
            else if (s3_length == 5)
            {
                s3 = "00000" + s3;
            }
            else if (s3_length == 4)
            {
                s3 ="0000" + s3;
            }
            else if (s3_length == 3)
            {
                s3 ="000" + s3;
            }
            else if (s3_length == 2)
            {
                s3 = "00" + s3;
            }
            else if (s3_length == 1)
            {
                s3 ="0" + s3;
            }
        }
        else if (c_int == 0)
        {
            s3 ="00000000" + s3;
        }

        S_main = S_main + s3;
        S_main = S_main + ".";

        if (d_int > 0)
        {
            while (d_int > 0)
            {
                int res = d_int % 2;
                string res_str = to_string(res);
                s4 = s4 + res_str;
                d_int = d_int / 2;

            }
            reverse(s4.begin(), s4.end());
            int s4_length = 8 - s4.length();
            if (s4_length == 7)
            {
                s4 ="0000000" + s4;
            }
            else if (s4_length == 6)
            {
                s4 ="000000" + s4;
            }
            else if (s4_length == 5)
            {
                s4 ="00000" + s4;
            }
            else if (s4_length == 4)
            {
                s4 = "0000" + s4;
            }
            else if (s4_length == 3)
            {
                s4 ="000" + s4;
            }
            else if (s4_length == 2)
            {
                s4 ="00" + s4;
            }
            else if (s4_length == 1)
            {
                s4 = "0" + s4;
            }
        }
        else if (d_int == 0)
        {
            s4 = "00000000" + s4;
        }
        S_main = S_main + s4;

        if (S_main != S_sec)
        {
            cout << "Case " << it << ": " << "No" << "\n";
        }
        else
        {
            cout << "Case " << it << ": " << "Yes" << "\n";
        }



    }

}