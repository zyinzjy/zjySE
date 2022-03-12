#include <bits/stdc++.h>
using namespace std;

string prov,city;//province省份,city城市
int pati;//patient患病人数
int T=0;

map<int,string>name;
map<string,int>mp;
vector<pair<string,int>>arrary[500];//pair把城市和数据组成一个数据项

void output1(){
    for(int i=1;i<=T;i++){
        cout<<name[i]<<endl;
        for(int j=0;j<arrary[i].size();j++){
            cout<<arrary[i][j].first<<""<<arrary[i][j].second<<endl;
        }
        cout<<endl;
    }
}

int main(){
    freopen("yq_in.txt","r",stdin);//Import data file
	freopen("yq_out.txt","w",stdout);//Output data file
	for(int i = 1;i <= 500;i++) 
        arrary[i].clear();
	while(cin >> prov){//输入省
		cin >> city >> pati;//输入城市和患病人数
		if(!mp[prov]){
			T++;
			mp[prov] = T;
			name[T] = prov;   
		}
		arrary[mp[prov]].push_back(make_pair(city,pati));
        //把城市和数字弄成一对放进vector里，vector是个二维数组 就放在对应的T行里
    }
    output1();
	return 0;
}