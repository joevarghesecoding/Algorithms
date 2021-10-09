#include <iostream>
#include <list>
#include <algorithm>
#include <cmath>

using namespace std;

//FINDS THE DISTANCE BETWEEN TWO CLOSEST POINTS IN THE PLANE BY BRUTE FORCE

struct point {
    int x;
    int y;
};


int BruteForceClosestPair(list<point> p)
{
    int d = 1000;
    int current = d;
    int square_root;
    for(list<point>::iterator i = p.begin(); i != p.end(); ++i)
    {   
        list<point>::iterator j = i; //IF I PUT ++i, it goes FOREVER
        ++j;
        if(++j == p.end()) //DONT GO BEYOND LIST SIZE
            break;
        square_root = sqrt(pow( i->x - j->x, 2.0) + pow((i->y - j->y),2.0));
        d = min(d, square_root);
        
    }

    return d; 
}


int main()
{
    point point1;
    point point2;
    point point3;
    point point4;
    point point5;

    list<point> p_list;

    point1.x = 4;
    point1.y = 5;

    point2.x = 2;
    point2.y = 5;

    point3.x = 4;
    point3.y = 8;
  
    point4.x = 1;
    point4.y = 3;
    
    point5.x = -4;
    point5.y = 5;
 

    p_list.push_back(point1);
    p_list.push_back(point2);
    p_list.push_back(point3);
    p_list.push_back(point4);
    p_list.push_back(point5);

    // for(list<point>::iterator it = p_list.begin(); it != p_list.end(); ++it)
    // {
       
    //         list<point>::iterator j = it;
    //         ++j;
    //         if(++j == p_list.end())
    //             break;
    //         cout << " it " << it->x << ' ' << it->y;
    //         cout << " j " << j->x  << ' ' << j->y;
        
    // }

    cout << BruteForceClosestPair(p_list) << endl;
    
}