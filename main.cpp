//
//  main.cpp
//  pokemon go probabilities
//
//  Created by Uri Hoch on 3/30/21.
//

#include <iostream>
#include <cmath>
using namespace std;
long factorial(long x){
    long answer=1;
    for(int i=1;i<=x;i++){
        answer *= i;
    }
    return answer;
}

int main() {
    double x = 0.008;//1/125- probability of a perfect 4* pokemon from a raid
    double y = 0.992;//124/125
    int numOfRaids=41;
    double sumValue=0;
    for(int n=1;n<=numOfRaids-3;n++){
        for(int k=floor(n/2);k<=n;k++){
            sumValue += pow(y,k)*pow(x,n-k)*(factorial(k+1)/((factorial(n-k))*(factorial(2*k-n+1))));
        }
    }
    double a1 = pow(x,2);
    double answer = a1*(1+y*(sumValue));
    cout<<answer;
    return 0;
}

