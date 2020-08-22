#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int div_l(int n){    
    for(int k=2; k*k<=n; k++){
        if(n%k==0){
            int val = n/k;
            if( n%val == 0){
                return val;
            }
        }
    }
    return 1;
}


int main() {

    int x;
    cin>>x;

    int y;
    cin>>y;
        
    if(x==y){
        cout<<0<<endl;
        return 0;
    }
    
    
    if(x<y)
    {
        swap(x, y);

    }
        

    vector <int> path1;
    vector <int> path2;
    
    int fact_path1 = div_l(x);
    
    path1.push_back(x);
    path1.push_back(fact_path1);
    
    while( fact_path1 != 1 ){

        fact_path1 = div_l(fact_path1);
        //fact_path1 = div_l(fa
        path1.push_back(fact_path1);
    }

    int fact_path2 = div_l(y);



    path2.push_back(y);
    path2.push_back(fact_path2);
    
    
    
    
    while( fact_path2 != 1){
        fact_path2 = div_l(fact_path2);
        path2.push_back(fact_path2);
    }

///////////////////////////////////////////////////////////////////////
    int size_p1, size_p2;
    size_p1 = path1.size(); size_p2 = path2.size();


    int i,j, result;
    i = j = 0;

    result = -1;
    while( i < size_p1 and j < size_p2 ){

        if( path1[i] == path2[j] ){
        
            result = i+j;
        
            break;
        }
        else if( path1[i]<path2[j] ){
            
            j++;
        }
        else {
            
            i++;
        }
    }

    cout<<result;
    cout<<"\n";
    return 0;
}




