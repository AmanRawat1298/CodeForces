#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    char ch;
    fstream infile;
    infile.open("aman.bin",ios::binary | ios::out );

    if(!infile.is_open())
    {
        cout<<"Coudnt open!";
    }
    else
    {
        // infile << "my name is aman"<<endl;
        // infile <<"i am giving  interview"<<endl;
        string s = "aman the great\n I am at the interview venue";
        for(int i=0; i<s.size(); i++)
            infile.put(s[i]);
        
    }
    infile.close();    
    infile.open("aman.bin", ios::binary|ios::in );


    if(!infile.is_open())
    {
        cout<<"Doesnt Exist!";
    }
    else
    {
       infile.seekg(0,ios::end);
       int pos = infile.tellg();
       
       pos--;
       infile.seekg(pos);
       while(infile.good())
       {
            infile.get(ch);
            cout<<ch;
            pos--;
            infile.seekg(pos);
       }
    }
    infile.close();
    

    return -1;
}