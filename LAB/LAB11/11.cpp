#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void SetWeight(int *Town, int n, int i, int j, int Weight);
int *Dijkstra(int *L, int n);
void InitializeGraph(int *g, int n, int value);
void PrintGraph(int *g, int n);
void PrintArrayAndMax(int *arr, int size);
int *KnapsackGreedy(int *w, int *v, int n, int wx);

int main() {
    printf("Greedy Algorithm : Shortest Path\n");
    int n = 5, i, j, *d, *g, km;

    g = (int *)malloc(n * n * sizeof(int));

    printf("Enter town : ");
    scanf("%d", &n);

    InitializeGraph(g, n, -1);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter km [%d, %d] : ", i, j);
            scanf("%d", &km);
            SetWeight(g, n, i, j, km);
        }
    }

    PrintGraph(g, n);

    d = Dijkstra(g, n);
    PrintArrayAndMax(d, n - 1);

    printf("\nGreedy Algorithm : Knapsack Problem\n");
    int wx = 11, ans = 0;
    n = 5;

    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter wx : ");
    scanf("%d", &wx);

    int *w = (int *)malloc(n * sizeof(int));
    int *v = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("weight for item %d : ", i);
        scanf("%d", &w[i]);
    }

    for (i = 0; i < n; i++) {
        printf("value for item %d : ", i);
        scanf("%d", &v[i]);
    }

    int *x = KnapsackGreedy(w, v, n, wx);
    for (i = 0; i < n; i++) printf("%d ", x[i]);

    for (i = 0; i < n; i++) {
        if (x[i] == 1) ans += v[i];
    }

    printf("\nValue = %d\n", ans);

    free(w);
    free(v);
    free(x);
    free(g);
    free(d);

    return 0;
}

//----| Greedy Algorithm : Shortest Path
void SetWeight(int *Town, int n, int i, int j, int Weight) {
    *(Town + i * n + j) = Weight;
}

int *Dijkstra(int *L, int n) {
    int *dist = new int[n] ;
    int *visited = new int[n];
    int INF = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[0] = 0;

    for (int i = 0; i < n - 1; i++) {
        int minDist = INF, minIndex;
        
        for (int j = 0; j < n; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                minIndex = j;
            }
        }

        visited[minIndex] = 1;

        for (int j = 0; j < n; j++) {
            if (*(L + minIndex * n + j) != -1 && dist[minIndex] + *(L + minIndex * n + j) < dist[j]) {
                dist[j] = dist[minIndex] + *(L + minIndex * n + j);
            }
        }
    }

    free(visited);
    return dist;
}

void InitializeGraph(int *g, int n, int value) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(g + i * n + j) = value;
        }
    }
}

void PrintGraph(int *g, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", *(g + i * n + j));
        }
        printf("\n");
    }
}

void PrintArrayAndMax(int *arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (arr[i] > max) max = arr[i];
    }
    printf("\nTotal Range = %d\n", max);
}

//----| Greedy Algorithm : Knapsack Problem
int *KnapsackGreedy(int *w, int *v, int n, int wx) {
    int *x = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        x[i] = 0;
    }

    int *ratio = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        ratio[i] = v[i] / w[i];  // Greedy ratio: value per unit weight
    }

    // Greedy algorithm: select items with the highest value-to-weight ratio
    for (int i = 0; i < n; i++) {
        if (w[i] <= wx) {
            wx -= w[i];
            x[i] = 1;  // Include the item
        }
    }

    free(ratio);
    return x;
}


