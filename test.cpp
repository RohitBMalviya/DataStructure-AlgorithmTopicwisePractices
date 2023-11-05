#include <iostream>
#include <string>
#include<map>
#include<vector>
using namespace std;
string stringify(vector<string> &v){
  string s="";
  s+=v[0];int n=v.size();
  for(int i=1;i<n;i++)s+="."+v[i];
  return s;
}
int main()
{
  int n,q,ind=-1;
  char ch;
  cin>>n>>q>>ws;
  vector<string> tags;
  map<string,string> mp;
  string k,w,s;
  while(n--){
    w="";k="";s="";ind=-1;
    while(1){
      cin>>noskipws>>ch;
      if(ch=='\n')break;
      if(ch=='/'){
        tags.pop_back();
        while(ch!='\n')cin>>noskipws>>ch;
        break;
      }
      if(ch=='<'|ch=='>'||ch=='='||ch=='"'||ch==' '){
        if(w.size()==0)continue;
        ind++;
        if(ind==0){
          tags.push_back(w);
          k=stringify(tags)+"~";
          w="";
        }else if(ind%2){
          s=k+w;
          w="";
        }else{
          mp[s]=w;
          w="";
        }
      }else{
        w+=ch;
      }
    }
  }
  while(q--){
    getline(cin>>ws,k);
    mp.count(k)?cout<<mp[k]<<endl:cout<<"Not Found!"<<endl;
  }
  return 0;
}