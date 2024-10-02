#define e endl;
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int,int> hash;
        set<int> setArr(arr.begin(),arr.end()); 
        int rank = 1;
        for(int i: setArr){
            hash[i] = rank++;
        }
        for(int i=0;i<arr.size();i++){
            arr[i] = hash[arr[i]];
        }
        return arr;
    }
};