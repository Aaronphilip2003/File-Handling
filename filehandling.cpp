#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    fstream myFile;
    fstream writeFile;
    vector<int> v;
    myFile.open("Numbers.txt",ios::in);
    if (myFile.is_open())
    {
        string number;
        while(getline(myFile,number))
        {
            stringstream intconv(number);
            int x=0;
            intconv>>x;
            v.push_back(x);    
        }
        myFile.close();
    }

    sort(v.begin(),v.end());

    writeFile.open("SortedFile.txt",ios::out);

    if(writeFile.is_open())
    {
        for(int i=0;i<v.size();i++)
        {
            writeFile<<v[i]<<endl;
        }
    }

    return 0;
}