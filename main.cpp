#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<stack>
#include <string.h>

using namespace std;

int main(){

	stack<char>cont;
	char x;
	int t,i,j;
	string cong;

	while(cin>>cong){
		if(cong.size()<=1000){
		for(i=0;i<cong.size();i++){
  			if(cong[i]=='(') cont.push(cong[i]);
			else if( cong[i]==')'){
				if(cont.size()!=0 && cont.top()=='('){
			 	cont.pop();
				}
				else cont.push(cong[i]);
			}
		}
	
		if(cont.size()==0)cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
        while(!cont.empty()) cont.pop();
	}
	}
	


	system("pause");
	return 0;
}

