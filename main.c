#include <stdio.h>
#include "my_mat.h"

int main()
{
    char input;
    int mat[V][V];
    int mat_dist[V][V];
    int i, j;

    scanf("%c", &input);
    while (input != 'D')
    {
        switch (a)
            ​
            {
            case 'A':
                mat = get_mat();
                break;

            case 'B':
                scanf("%d", &i);
                scanf("%d", &j);
                is_path(i, j);
                printf("\n");
                break;
            case 'C':
                scanf("%d", &i);
                scanf("%d", &j);
                shortest_path(i, j);
                break;
            default:
                printf("input not corect")
            }
        scanf("%c", &input)
    }
    return 0;
}
