#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int hit=0;
        int A,B,C;
        cin>>A>>B>>C;
        if(A>=B && A>=C)
        {
            hit+=A;
            if(B>=C)
                hit+=B;
                
            else
                hit+=C;
        }
        else if(B>=C &&B>=A)
        {
            hit+=B;
            if(A>=C)
                hit+=A;
                
            else
                hit+=C;
        }
        else
        {
            hit+=C;
            if(B>=A)
                hit+=B;
                
            else
                hit+=A;
        }
        cout<<hit<<endl;
    }
    
	return 0;
}
