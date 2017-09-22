/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 22, 2017, 12:51 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string pangram;
    getline(cin,pangram);
    int a;
    int b; 
    int c; 
    int d; 
    int e; 
    int f; 
    int g; 
    int h;
    int i;
    int j;
    int k; 
    int l;
    int m;
    int n;
    int o;
    int p;
    int q;
    int r;
    int s;
    int t;
    int u;
    int v;
    int w;
    int x;
    int y;
    int z;
    for (int i = 0; i < pangram.size(); i++)
    {
    if(pangram.find('a') != string::npos)
        a++;
    if(pangram.find('A') != string::npos)
        a++;
    if(pangram.find('b') != string::npos)
        b++;
    if(pangram.find('B') != string::npos)
        b++;
    if(pangram.find('c') != string::npos)
        c++;
    if(pangram.find('C') != string::npos)
        c++;
    if(pangram.find('d') != string::npos)
        d++;
    if(pangram.find('D') != string::npos)
        d++;
    if(pangram.find('e') != string::npos)
        e++;
    if(pangram.find('E') != string::npos)
        e++;
    if(pangram.find('f') != string::npos)
        f++;
    if(pangram.find('F') != string::npos)
        f++;
    if(pangram.find('g') != string::npos)
        g++;
    if(pangram.find('G') != string::npos)
        g++;
    if(pangram.find('h') != string::npos)
        h++;
    if(pangram.find('H') != string::npos)
        h++;
    if(pangram.find('i') != string::npos)
        a++;
    if(pangram.find('I') != string::npos)
        a++;
    if(pangram.find('j') != string::npos)
        j++;
    if(pangram.find('J') != string::npos)
        j++;
    if(pangram.find('k') != string::npos)
        k++;
    if(pangram.find('K') != string::npos)
        k++;
    if(pangram.find('m') != string::npos)
        m++;
    if(pangram.find('M') != string::npos)
        m++;
    if(pangram.find('n') != string::npos)
        n++;
    if(pangram.find('N') != string::npos)
        n++;
    if(pangram.find('o') != string::npos)
        o++;
    if(pangram.find('O') != string::npos)
        o++;
    if(pangram.find('p') != string::npos)
        p++;
    if(pangram.find('P') != string::npos)
        p++;
    if(pangram.find('q') != string::npos)
        q++;
    if(pangram.find('Q') != string::npos)
        q++;
    if(pangram.find('r') != string::npos)
        r++;
    if(pangram.find('R') != string::npos)
        r++;
    if(pangram.find('s') != string::npos)
        s++;
    if(pangram.find('S') != string::npos)
        s++;
    if(pangram.find('t') != string::npos)
        t++;
    if(pangram.find('T') != string::npos)
        t++;
    if(pangram.find('u') != string::npos)
        u++;
    if(pangram.find('U') != string::npos)
        u++;
    if(pangram.find('v') != string::npos)
        v++;
    if(pangram.find('V') != string::npos)
        v++;
    if(pangram.find('w') != string::npos)
        w++;
    if(pangram.find('W') != string::npos)
        w++;
    if(pangram.find('x') != string::npos)
        x++;
    if(pangram.find('X') != string::npos)
        x++;
    if(pangram.find('y') != string::npos)
        y++;
    if(pangram.find('Y') != string::npos)
        y++;
    if(pangram.find('z') != string::npos)
        z++;
    if(pangram.find('Z') != string::npos)
        z++;
    }
    if (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z == 1)
    cout << "Pangram" << endl;
    return 0;
}

