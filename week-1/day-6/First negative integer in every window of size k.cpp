vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    vector<long long> result;
    deque<long long> negIndices;

    for (long long i = 0; i < K; ++i) {
        if (A[i] < 0)
            negIndices.push_back(i);
    }

    for (long long i = K; i <= N; ++i) {
        if (!negIndices.empty())
            result.push_back(A[negIndices.front()]);
        else
            result.push_back(0);

        if (!negIndices.empty() && negIndices.front() <= i - K)
            negIndices.pop_front();

        if (i < N && A[i] < 0)
            negIndices.push_back(i);
    }

    return result;                                             
 }
