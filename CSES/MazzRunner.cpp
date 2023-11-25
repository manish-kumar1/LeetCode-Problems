#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Point {
    int x, y, steps, blocked2;
};

int bfs(vector<vector<int>>& maze, pair<int, int> start, pair<int, int> target) {
    int rows = maze.size();
    int cols = maze[0].size();

    vector<vector<vector<int>>> visited(rows, vector<vector<int>>(cols, vector<int>(3, false)));

    queue<Point> q;
    q.push({start.first, start.second, 0, 0});

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        if (current.x == target.first && current.y == target.second) {
            return current.steps;
        }

        // Possible moves: Up, Down, Left, Right
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; ++i) {
            int nx = current.x + dx[i];
            int ny = current.y + dy[i];

            if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && maze[nx][ny] != 1 && !visited[nx][ny][current.blocked2]) {
                int blocked2 = current.blocked2;
                if (maze[nx][ny] == 2) {
                    blocked2++;
                }
                if (maze[nx][ny] == 3) {
                    blocked2 = 0;
                }

                if (blocked2 <= 2) {
                    visited[nx][ny][blocked2] = true;
                    q.push({nx, ny, current.steps + 1, blocked2});
                }
            }
        }
    }

    return -1;  // No path found
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> maze(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> maze[i][j];
        }
    }

    pair<int, int> start, target;
    cin >> start.first >> start.second;
    cin >> target.first >> target.second;

    int result = bfs(maze, start, target);

    if (result == -1) {
        cout << "STUCK" << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}