#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>


int main(){
    int t;
    cin >> t;

    while(t--){

        int num;
        cin >> num;

        int count=0;
        bool exists=true;

        while(num!=1){

            if(num%6==0){
                num=num/6;
                count++;
            }
            else if(num%6==4 || num%6==2 || num==2 ||num==4){
                exists=false;
                num=1;             //ye is liye kiya hai k bas while loop break kr jae
            }
            else{
                num=num*2;
                count++;
            }
    }

    if(exists==false) 
      {   cout << -1 << endl;
    }
    else cout << count << endl;

    }

}










//4 Multiply by 2 Divide by 6.cpp