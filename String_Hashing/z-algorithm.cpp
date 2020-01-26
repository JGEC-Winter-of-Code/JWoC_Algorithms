//Description: This is an algorithm to find a word in the input string. The word can be a part of another word.
//Example. "ring" word is found the sentence "String is a data type in C++."

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
bool zAlgorithm(string pattern, string target)
{
    string s = pattern + '$' + target;
    int n = s.length();
    vector<int> z(n, 0);
    int goal = pattern.length();
    int r = 0, l = 0, i;
    for (int k = 1;  k < n; k++)
    {
        if (k > r)
        {
            for (i = k; i < n && s[i] == s[i - k]; i++);
	    if (i > k)
            {
                z[k] = i - k;
                l = k;
                r = i - 1;
            }
        }
        else
        {
            int kt = k - l, b = r - k + 1;
            if (z[kt] > b)
            {
                for (i = r + 1; i < n && s[i] == s[i - k]; i++);
                z[k] = i - k;
                l = k;
                r = i - 1;
            }
        }
         if (z[k] == goal)
            return true;
    }
    return false;
}

int main()
{
    string tar;
    string pat;
    cin<<tar<<pat;
    if (zAlgorithm(pat, tar))
        cout<<"'"<<pat<<"' found in string '"<<tar<<"'"<<endl;
    else
        cout<<"'"<<pat<<"' not found in string '"<<tar<<"'"<<endl;

    return 0;
    }
    
 //   INPUT / OUTPUT FORMAT: First input the string in which you want to find the word.
 //   Then enter the word.
    
 //   SAMPLE INPUT: 
 //   san and linux training
    
 //  SAMPLE OUTPUT:
 //  'lin' found in string 'san and linux training'
    
