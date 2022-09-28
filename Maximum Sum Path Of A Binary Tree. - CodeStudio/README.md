# Maximum Sum Path Of A Binary Tree.
## HARD
<div _ngcontent-serverapp-c188="" disableselect="" class="description prevent-select ng-star-inserted"><h4 id="you-are-given-a-binary-tree-having-39-n-39-nodes-each-node-of-the-tree-has-an-integer-value-your-task-is-to-find-the-maximum-possible-sum-of-a-simple-path-between-any-two-nodes-possibly-same-of-the-given-tree">You are given a binary tree having 'N' nodes. Each node of the tree has an integer value. Your task is to find the maximum possible sum of a simple path between any two nodes (possibly same) of the given tree.</h4>

<h4 id="a-simple-path-is-a-path-between-any-two-nodes-of-a-tree-such-that-no-edge-in-the-path-is-repeated-twice-sum-of-a-simple-path-is-defined-as-the-summation-of-all-node-values-in-a-path">A simple path is a path between any two nodes of a tree, such that no edge in the path is repeated twice. Sum of a simple path is defined as the summation of all node values in a path.</h4>

<h5 id="input-format">Input Format</h5>

<pre><code>The first line of input contains an integer 'T' representing the number of test cases. Then the test cases follow.
The only line of each test case contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 on its place.
For example, the input for the tree depicted in the below image would be :
</code></pre>

<p><img src="https://files.codingninjas.in/binarytree3-5126.png" alt="Example Input"></p>

<pre><code>1
2 3
4 -1 5 6
-1 7 -1 -1 -1 -1
-1 -1
</code></pre>

<h4 id="explanation">Explanation :</h4>

<pre><code>Level 1 :
The root node of the tree is 1

Level 2 :
Left child of 1 = 2
Right child of 1 = 3

Level 3 :
Left child of 2 = 4
Right child of 2 = null (-1)
Left child of 3 = 5
Right child of 3 = 6

Level 4 :
Left child of 4 = null (-1)
Right child of 4 = 7
Left child of 5 = null (-1)
Right child of 5 = null (-1)
Left child of 6 = null (-1)
Right child of 6 = null (-1)

Level 5 :
Left child of 7 = null (-1)
Right child of 7 = null (-1)

The first not-null node(of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level and so on.
The input ends when all nodes at the last level are null(-1).
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>The above format was just to provide clarity on how the input is formed for a given tree. 
The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:

1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case, print the maximum sum of a simple path between any two nodes of the given tree.
Print the output of each test case in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You don’t need to print anything; It has already been taken care of.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 100
1 &lt;= N &lt;= 3000
-10^5 &lt;= data &lt;= 10^5 and data!=-1

Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and 'data' is the value of the binary tree node

Time Limit: 1 sec
</code></pre>
</div>