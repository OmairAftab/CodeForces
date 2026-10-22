#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>



int main(){

    char direction;
    cin >> direction;

    string s;
    cin >> s;

    unordered_map<char,char> mapwhenR;
    unordered_map<char,char> mapwhenL;

mapwhenR['w']='q'; mapwhenR['e']='w'; mapwhenR['r']='e'; mapwhenR['t']='r'; mapwhenR['y']='t'; mapwhenR['u']='y'; mapwhenR['i']='u'; mapwhenR['o']='i'; mapwhenR['p']='o'; mapwhenR['[']='p'; mapwhenR[']']='['; mapwhenR['\\']=']';

mapwhenR['s'] = 'a'; mapwhenR['d'] = 's'; mapwhenR['f'] = 'd'; mapwhenR['g'] = 'f'; mapwhenR['h'] = 'g'; mapwhenR['j'] = 'h'; mapwhenR['k'] = 'j'; mapwhenR['l'] = 'k'; mapwhenR[';'] = 'l'; mapwhenR['\''] = ';';

mapwhenR['x'] = 'z'; mapwhenR['c'] = 'x'; mapwhenR['v'] = 'c'; mapwhenR['b'] = 'v'; mapwhenR['n'] = 'b'; mapwhenR['m'] = 'n'; mapwhenR[','] = 'm'; mapwhenR['.'] = ','; mapwhenR['/'] = '.';



mapwhenL['q'] = 'w'; mapwhenL['w'] = 'e'; mapwhenL['e'] = 'r'; mapwhenL['r'] = 't'; mapwhenL['t'] = 'y'; mapwhenL['y'] = 'u'; mapwhenL['u'] = 'i'; mapwhenL['i'] = 'o'; mapwhenL['o'] = 'p'; mapwhenL['p'] = '['; mapwhenL['['] = ']'; mapwhenL[']'] = '\\';

mapwhenL['a'] = 's'; mapwhenL['s'] = 'd'; mapwhenL['d'] = 'f'; mapwhenL['f'] = 'g'; mapwhenL['g'] = 'h'; mapwhenL['h'] = 'j'; mapwhenL['j'] = 'k'; mapwhenL['k'] = 'l'; mapwhenL['l'] = ';'; mapwhenL[';'] = '\'';

mapwhenL['z'] = 'x'; mapwhenL['x'] = 'c'; mapwhenL['c'] = 'v'; mapwhenL['v'] = 'b'; mapwhenL['b'] = 'n'; mapwhenL['n'] = 'm'; mapwhenL['m'] = ','; mapwhenL[','] = '.'; mapwhenL['.'] = '/';


    string ans;

    for(char c:s){
        if(direction=='L'){
            ans+=mapwhenL[c];
        }
        else{
            ans+=mapwhenR[c];
        }
    }


    cout<< ans << endl;

}





//6 Keyboard.cpp