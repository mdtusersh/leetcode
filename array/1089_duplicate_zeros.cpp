class Solution {
    public:
        void duplicateZeros(vector<int>& arr) {
            for(int i = 1; i < arr.size(); i++) {
                if(arr[i-1] == 0) {
                    for(int j = arr.size() - 1; j >= i; j--) {
                        arr[j] = arr[j-1];
                    }
                    i++;
                }
            }
        }
    };