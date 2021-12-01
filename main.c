#include <stdio.h>
#include "my_mat.h"
#define V 10

int main()
{
    char input;
    int mat[V][V];
    int mat_dist[V][V];
    int i, j;

    scanf("%c", &input);
    while (input != "D")
    {
        if(input=="A"){
            mat = get_mat();
        }
        if(input=="B"){
            scanf("%d", &i);
            scanf("%d", &j);
            is_path(i, j);
            printf("\n");
        }
        if(input=="C"){
            scanf("%d", &i);
            scanf("%d", &j);
            shortest_path(i, j);
        }
        scanf("%c", &input);
    }
    return 0;
}
