#include <iostream>
#include <string>

using namespace std;

//MATCH STRING
//Returns first index if string is found in target

int StringMatch(string target, string key)
{
    int startingIndex;
    int result = -1;
    for(int i = 0; i < target.length(); i++)
    {
        if(key[0] == target[i])
        {
            startingIndex = i;
            for(int j = 1; j < key.length(); j++)
            {   
                if(key[j] == target[i + j])
                {
                    continue;
                }
                else 
                {
                    startingIndex = 0;
                    break;
                }
            }
        }
    }
    if(startingIndex > 0){
        result = startingIndex;
    }

    return result;
}

int main()
{
    string a = "Jyothish was here";
    string b = "xa";

    cout << StringMatch(a,b) << endl;

    return 0;
}