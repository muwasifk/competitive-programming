# CHECKING IF GRAPH IS DAG (DIRECTED ACYCLIC GRAPH)

void topological(int current){
    visited[current] = 1; // first visited state

    for (int adjacent = 1; adjacent <= n; adjacent ++){
        if (graph[current][adjacent] != 0){
            if (visited[adjacent] == 1){
                failed = true; // could not make topological sort because another node of state 1 has been found when there already exists one
                return;
            }

            if (visited[adjacent] == 0){
                topological(adjacent); // perform the sort on the enxt nodes
            }
        }
    }

    visited[current] = 2; // this node is done in the topological sort (will never come back here)
}
