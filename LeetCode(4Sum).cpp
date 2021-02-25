class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        vector<vector<int>> res;
        
        int n = num.size();
        if(num.empty()){
            return res;
        }
        sort(num.begin(),num.end());
        
        for(int i=0;i<n;i++){
            for(int j = i+1; j<n; j++){
                int target_2 = target - num[i] - num[j];
                
                int front = j+1;   // Creating two pointer
                int back = n-1; 
                
                while(front<back){
                    int sum_front_back = num[front] + num[back];
                    if(sum_front_back < target_2){
                        front++;
                    }
                    else if(sum_front_back > target_2){
                        back--;
                    }
                    else{
                        vector<int> quadruplet(4,0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);   // push four element that four value some is equal to the target 
                        
                        
                        // Handle the duplicate value of front
                        // i j front  front             back
                        // 1 1 3     3    3 4 4 5 5      1 1 3 5 
                        while(front<back  and num[front] == quadruplet[2]){
                            front++;
                        }
                        
                        // Handle the duplicate value of back
                        
                        while(front<back and num[back] == quadruplet[3]){
                            back--;
                        }

                    }
                }
                
                // Handle the duplicate value of j 
                while(j+1<n and num[j] == num[j+1]){
                    j++;
                }
                
            }
            
            // Handle the duplicate value of i
            while(i+1<n and num[i] == num[i+1]){
                i++;
            }
        }
        vector<vector<int>> result(res.begin(),res.end());
        return result;
        
    }
};