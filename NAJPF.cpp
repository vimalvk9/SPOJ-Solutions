#include <bits/stdc++.h>
using namespace std;

 
void computeLPSArray(string &pat, int M, vector <int> &lps);
 
// Prints occurrences of txt[] in pat[]
void KMPSearch(string &pat, string &txt,vector<int> &v)
{
    int M = pat.length();
    int N = txt.length();
 
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    vector <int> lps(M);
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    int j  = 0;  // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
 
        if (j == M)
        {
            //printf("Found pattern at index %d \n", i-j);
              v.push_back(i-j+1);
              j = lps[j-1];
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
}
 
// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(string &pat, int M, vector <int> &lps)
{
    // length of the previous longest prefix suffix
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar 
            // to search step.
            if (len != 0)
            {
                len = lps[len-1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main()
{
  int t;
  scanf("%d",&t);
   
  string x , y ;

  while(t--)
    {
         cin >> x >> y;
         vector <int> v;   
         KMPSearch(y,x,v);
       
         if(v.size() == 0)
           cout << "Not Found" << endl;
         else
           {
              cout << v.size() << endl;
              for(int i=0;i<v.size();i++)
                    cout << v[i] << " ";
                   
              cout << endl; 

           }
    }

}













 
