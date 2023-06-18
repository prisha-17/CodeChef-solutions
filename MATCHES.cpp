#include <iostream>
 using namespace std;
void func(int sum)
{
    int match=0;
    while(sum>0)
    {
        int div= sum%10;
        sum/=10;
        switch(div)
        {
            case 0:
                match+=6;
                break;
            case 1 :
                match+=2;
                break;
            case 2:
                match+=5;
                break;
            case 3:
                match+=5;
                break;
            case 4:
                match+=4;
                break;
            case 5:
                match+=5;
                break;
            case 6:
                match+=6;
                break;
            case 7:
                match+=3;
                break;
            case 8:
                match+=7;
                break;
            case 9:
                match+=6;
                break;
        }    
    }
    cout<<match<<endl;
}


int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=a+b;
	    func(sum);
	}
	return 0;
}
