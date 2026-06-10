class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas = 0;
        int totcost = 0;
        for (int val : gas) {
            totgas += val;
        }

        for (int val : cost) {
            totcost += val;
        }

        if (totcost > totgas) {
            return -1;
        }

        int srt = 0;
        int currgas = 0;

        for (int i = 0; i < gas.size(); i++) {
            currgas += (gas[i] - cost[i]);

            if (currgas < 0) {
                srt = i + 1;
                currgas = 0;
            }
        }

        return srt;
    }
};