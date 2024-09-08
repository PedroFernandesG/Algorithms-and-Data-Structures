/*
Number Of Provinces - LeetCode
Question 547
*/

class Solution {
public:

    void DFS(int v, bool visited[], vector<vector<int>>& isConnected,int n){

        visited[v] = true;

        for(int i = 0;i < n;i++){
            if(isConnected[v][i] == 1 && !visited[i]){
                DFS(i, visited, isConnected,n);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected){
        int n = isConnected.size();
        bool visited[n];

        for(int i = 0;i < n;i++)
            visited[i] = false;

        int comp = 0;

        for(int i = 0;i < n;i++){
            if(!visited[i]){
                comp++;

                DFS(i, visited, isConnected,n);
            }
        }
        return comp;
    }
};
