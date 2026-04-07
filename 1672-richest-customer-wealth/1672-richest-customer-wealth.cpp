class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth=0;
        for(const auto& customer: accounts){
            int currentCustomerWealth=0;
            for(int money:customer){
                currentCustomerWealth+=money;
            }
            if(currentCustomerWealth> maxWealth){
                maxWealth=currentCustomerWealth;
            }
        }
        return maxWealth;
    }
};