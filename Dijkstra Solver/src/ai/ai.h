#ifndef __AI__
#define __AI__

#include <stdint.h>
#include <unistd.h>
#include "node.h"
#include "priority_queue.h"
#include "../../include/sokoban.h"

void solve(char const *path, bool show_solution);

// Frees the array of maps and then frees the node
void free_node(sokoban_t *init_data, node_t *n);


#endif
