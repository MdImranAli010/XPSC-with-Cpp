class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long max_sum=0;
        long sum=0;

        for (int i=0; i<K; i++){
            sum += Arr[i];
        }
        
        max_sum=sum;
        for (int i=K; i<N; i++){
            sum += Arr[i] - Arr[i - K]; 
            max_sum = max(max_sum, sum);
        }
        return max_sum;

    }
};
