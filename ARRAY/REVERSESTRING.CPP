// Reverse a String
//User function Template for C++

string reverseWord(string str){
    
  string ans=str;
  int n=str.length();
  for(int i=0;i<n;i++)
      ans[i]=str[n-i-1];
  return ans;
}