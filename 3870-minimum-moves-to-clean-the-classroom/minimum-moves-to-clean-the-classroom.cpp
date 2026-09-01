class Solution {
public:
    int minMoves(vector<string>& c, int e) {
        int m = c.size();
        int n = c[0].size();
        int sx = 0, sy = 0;
        int cnt = 0;
        vector<vector<int>> id(m, vector<int>(n, -1));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (c[i][j] == 'S') {
                    sx = i;
                    sy = j;
                }
                if (c[i][j] == 'L') {
                    id[i][j] = cnt++;
                }
            }
        }
        if (cnt == 0) return 0;
        int fullMask = (1 << cnt) - 1;
        vector<vector<vector<vector<bool>>>> visited(m, vector<vector<vector<bool>>>(n, vector<vector<bool>>(e + 1, vector<bool>(1 << cnt, false))));
        queue<tuple<int, int, int, int>> q;
        q.push({sx, sy, e, fullMask});
        visited[sx][sy][e][fullMask] = true;
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        int moves = 0;
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                auto [x, y, currEnergy, mask] = q.front();
                q.pop();
                if (mask == 0) return moves;
                if (currEnergy == 0) continue;
                for (int k = 0; k < 4; k++) {
                    int nx = x + dx[k];
                    int ny = y + dy[k];
                    if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                    if (c[nx][ny] == 'X') continue;
                    int newEnergy = currEnergy - 1;
                    int newMask = mask;
                    if (c[nx][ny] == 'R') {
                        newEnergy = e;
                    }
                    if (c[nx][ny] == 'L') {
                        int bit = id[nx][ny];
                        newMask &= ~(1 << bit);
                    }
                    if (!visited[nx][ny][newEnergy][newMask]) {
                        visited[nx][ny][newEnergy][newMask] = true;
                        q.push({
                            nx, ny, newEnergy, newMask
                        });
                    }
                }
            }
            moves++;
        }
        return -1;
    }
};