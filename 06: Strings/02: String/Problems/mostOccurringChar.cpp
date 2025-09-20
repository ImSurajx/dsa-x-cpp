/*
ques: given a string consisting of lowercase english alphabets. print the character that is occuring most number of times
*/
#include <iostream>
#include<vector>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    // useless method:
    // int max = 0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     char ch = str[i];
    //     int count = 1;
    //     for (int j = i + 1; j < str.length(); j++)
    //     {
    //         if (str[j] == str[i])
    //             count++;
    //     }
    //     if (max < count)
    //         max = count;
    // }
    // for (int i = 0; i < str.length(); i++)
    // {
    //     char ch = str[i];
    //     int count = 1;
    //     for (int j = i + 1; j < str.length(); j++)
    //     {
    //         if (str[j] == str[i])
    //             count++;
    //     }
    //     if (count == max)
    //     {
    //         cout << ch << " " << max << endl;
    //     };
    // }
    // optimized method
    vector<int>freq(26,0);
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        int ascii = (int)ch;
        freq[ascii-97]++;
    }
    int max = INT_MIN;
    for(int i = 0; i < freq.size(); i++){
        if(freq[i]>max) max = freq[i];
    }
    for(int i = 0; i < freq.size(); i++){
        if(freq[i]==max) {
            cout<<"character that is occuring most : "<<char(i+int('a'))<<endl;
        }
    }

}