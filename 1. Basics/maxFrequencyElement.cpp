#include<bits/stdc++.h>
using namespace std;
int maxFrequencyEElement(vector<int> &arr){
    unordered_map<int,int> freq;
    for(int i=0;i<arr.size();i++){
        freq[arr[i]]++;
    }
    int maxFreq = 0;
    int maxFreqElement = arr[0];
    for(auto it:freq){
        if(it.second > maxFreq){
            maxFreq = it.second;
            maxFreqElement = it.first;
        }
    }
    return maxFreqElement;
}