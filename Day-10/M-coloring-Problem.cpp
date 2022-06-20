bool isSafe(int node, int color[], vector<vector<int>> graph, int n, int col) {
  for (int k = 0; k < n; k++) {
    if (k != node && graph[k][node] == 1 && color[k] == col) {
      return false;
    }
  }
  return true;
}
bool solve(int node, int color[], int m, int N, vector<vector<int>> graph) {
  if (node == N) {
    return true;
  }

  for (int i = 1; i <= m; i++) {
    if (isSafe(node, color, graph, N, i)) {
      color[node] = i;
      if (solve(node + 1, color, m, N, graph)) return true;
      color[node] = 0;
    }

  }
  return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int N  = mat.size();
    int color[N] = {
    0
  };
  if (solve(0, color, m, N, mat)) return "YES";
  return "NO";
}