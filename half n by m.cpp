 int ans = N;
        for(int i = 1; i < M; i++)
        {
            ans /= 2;
            if(ans == 0)  return 0;
        }
        return ans;
}
