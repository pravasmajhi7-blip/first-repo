class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
    while(numBottles>=numExchange){
        numBottles-=numExchange;
        ans+=1;
        numExchange+=1;
        numBottles+=1;
    }
  return ans; }
};