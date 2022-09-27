# Left View Of a Binary Tree
## EASY
<div _ngcontent-serverapp-c188="" disableselect="" class="description prevent-select ng-star-inserted"><h4 id="you-have-been-given-a-binary-tree-of-integers-you-are-supposed-to-find-the-left-view-of-the-binary-tree-the-left-view-of-a-binary-tree-is-the-set-of-all-nodes-that-are-visible-when-the-binary-tree-is-viewed-from-the-left-side">You have been given a binary tree of integers. You are supposed to find the left view of the binary tree. The left view of a binary tree is the set of all nodes that are visible when the binary tree is viewed from the left side.</h4>

<h5 id="example">Example:</h5>

<p><img src="https://files.codingninjas.in/leftview_0-6345.png" alt="example"></p>

<pre><code>The left view of the above binary tree is  {5, 7, 14, 25}.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

The only line of each test case contains elements in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place. So -1 would not be a part of the tree nodes.

For example, the input for the tree depicted in the below image will be:
</code></pre>

<p><img src="https://files.codingninjas.in/0000000000004189.png" alt="alt text"></p>

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

<pre><code>For each test case, print the left view of the given binary tree separated by a single space.

Print the output of each test case in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You don’t need to print anything; It has already been taken care of.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 100
0 &lt;= N &lt;= 3000
1 &lt;= data &lt;= 10^5 and data!=-1

Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and “data” is the value of the binary tree node

Time Limit: 1 sec
</code></pre>
</div>