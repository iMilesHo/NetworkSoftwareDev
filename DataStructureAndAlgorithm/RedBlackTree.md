# Red Black Tree (RBT)

Red Black Tree is a self-balancing binary search tree. It is a kind of binary search tree with one extra bit of storage per node: its color, which can be either red or black. The color is used to ensure that the tree remains approximately balanced during insertions and deletions. The balancing of the tree is not perfect but it is good enough to allow it to guarantee searching in O(log n) time, where n is the total number of elements in the tree.

There is a Key / Value pair in each node. The key is used to search for the node and the value is the data associated with the key.

## Application of Red Black Tree

- hashmap
- cfs (completely fair scheduler)
- epoll
- timer
- nginx
