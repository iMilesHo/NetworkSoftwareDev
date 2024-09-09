# B-tree and B+-tree

## Application of B tree and B+ tree

## The difference between B tree and B+ tree

- B-tree: all the nodes store data
- B+-tree: only the leaf nodes store data and the non-leaf nodes are used for searching and indexing.

## B tree

- The comparison times are the height of the tree, so we want to minimize the height of the tree (i.e., maximize the number of keys in each node).
- If one node is stored in one disk block, the computer have to read the disk block from the disk to the memory, which is slow. So we want to maximize the number of keys in each node.
