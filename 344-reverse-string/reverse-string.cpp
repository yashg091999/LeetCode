class Solution {
public:

    void reverse1(vector<char>& s,int first,int last){
        if(first >= last){
            return;
        }

        swap(s[first],s[last]);
        reverse1(s,first+1,last-1);
    }

    void reverseString(vector<char>& s) {
       reverse1(s,0,s.size()-1);
    }
};