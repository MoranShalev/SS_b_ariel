/* the function get mat value from the user*/
int get_mat();
    /* check if there is a path between two points*/
    void is_path(int i, int j);
    /* return the shortest path between two points*/
    /* if there is not a path return -1*/
    int shortest_path(int i, int j);
    /*calc a new matrix that contains the shortest distance between two points from the origin matrix: the row (i) and the column (j) */
    void calc_dist();
