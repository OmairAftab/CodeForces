
#include <iostream>
using namespace std;
#include <string>
#include <algorithm> //required for find method
#include <vector>



int main (){

    int t;
    cin >> t;


    while(t--){

        vector<int> v={1,2,3,4,5,6,7,8,9,10,11,12};
        vector<int>sub;

         string answer="NO";

        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        if (a < b) {
            for (int i = a; i <= b; i++) {
                 sub.push_back(i);
            }
        }
        else if (b < a) {
            for (int i = b; i <= a; i++) {
                sub.push_back(i);
            }
        }


        if(find(sub.begin(), sub.end(), c) != sub.end() && find(sub.begin(), sub.end(), d) == sub.end()){     //mtlb agar jo c hai wo a&b ki values k drmyaan main se koi hua and d un k drmyaan exist nhi krta to zaahri baat hai line intersect kr jae gi jab c d se milaya jae ga.... DRAW KR K DEKH LO
            answer="YES";
        }
        else if(find(sub.begin(), sub.end(), d) != sub.end() && find(sub.begin(), sub.end(), c) == sub.end()){   ////mtlb agar jo d hai wo a&b ki values k drmyaan main se koi hua and c un k drmyaan exist nhi krta to zaahri baat hai line intersect kr jae gi jab c d se milaya jae ga.... DRAW KR K DEKH LO
            answer="YES";
        }



        cout << answer << endl;
    }
}



//AND AGAR c&d dono a&b k beech wale numbers hain to wo intersect nhi kr sken ge draw kr k dekh lo




// 10 Clock and String.cpp