void floodfill(int r, int c, int color){ // COLOR IS THE ACCEPTED FLOOR CHARACTER

    if (

        (r < 0 || r >= row_num || c < 0 || c >= col_num)  // if out of bounds

        || grid[r][c] != color  // wrong color

        || visited[r][c]  // already visited this square

    ) return;


    visited[r][c] = true; // mark current square as visited

    curr_size++; // increment the size for each square we visit


    // recursively call flood fill for neighboring squares

    floodfill(r, c + 1, color);

    floodfill(r, c - 1, color);

    floodfill(r - 1, c, color);

    floodfill(r + 1, c, color);

}
