#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z,w;
        cin>>x>>y>>z>>w;
        int s=(x-z);
        int p=(y-w);
        if(s>p){
            cout<<"second"<<endl;
        }else if(p>s){
            cout<<"first"<<endl;
        }else{
            cout<<"any"<<endl;
        }
    }

	// your code goes here
	return 0;
}
