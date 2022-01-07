class Solution {
public:
    bool isAnagram(string s, string t) {
    
   int n = s.length();//length of first word
   int g = t.length();//length of second word
        
        
    if (n != g)//if the words arent the same length
    {
        return false;
    }
     
    //sorts letters in both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
        
        
     for (int i = 0; i < n; i++)//goes thru the first string
     {
         if (s[i] != t[i])//compares both strings and see if they dont have the same letters
         {
             return false;
         }
     }
     return true;
    }
};
