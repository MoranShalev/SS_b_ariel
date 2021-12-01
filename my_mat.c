#include <stdio.h>
#define V 10
#define INF 99999
#include "my_mat.h"

int mat[V][V];
int mat_dist[V][V];

int get_mat()
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    calc_dist();
    return 0;
}

void is_path(int i, int j)
{

    if ((mat_dist[i][j] != 0) && (mat_dist != 99999))
    {
        printf("True\n");
    }
    printf("False\n");
}

void calc_dist()
{
    int i, j, k;
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            mat_dist[i][j] = mat[i][j];
        }
    }
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (mat_dist[i][k] + mat_dist[k][j] < mat_dist[i][j])
                {
                    mat_dist[i][j] = mat_dist[i][k] + mat_dist[k][j];
                }
            }
        }
    }
}

int shortest_path(int i, int j)
{
    if (is_path(i, j) == false)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", mat_dist[i][j]);
    }
    return 0;
}
