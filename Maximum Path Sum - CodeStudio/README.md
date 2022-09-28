# Maximum Path Sum
## EASY
<div _ngcontent-serverapp-c188="" disableselect="" class="description prevent-select ng-star-inserted"><h4 id="you-are-given-an-n-ary-tree-consisting-of-n-nodes-your-task-is-to-return-the-maximum-sum-of-the-path-from-the-root-to-the-leaf-node">You are given an n-ary tree consisting of ‘N’ nodes. Your task is to return the maximum sum of the path from the root to the leaf node.</h4>

<h5 id="for-example">For example:</h5>

<pre><code>For the given tree:
</code></pre>

<p><img src="https://files.codingninjas.in/tree1-13653.png" alt=""></p>

<pre><code>The path 1 -&gt; 3 -&gt; 7 produces the maximum i.e, 11.
</code></pre>

<h5 id="input-format">Input Format:</h5>

<pre><code>The first line of the input contains a single integer 'T', representing the number of test cases.

The first line of each test case contains an integer 'N', which denotes the number of nodes in the tree.

The second line of each test case contains elements of the N-ary tree in the level order form. The line consists of values of nodes separated by a single space. In case a node is changed, we take -1. The first not-null node(of the previous level) is treated as the parent of the first node of the current level. The second not-null node (of the previous level) is treated as the parent node for the next nodes of the current level and so on.
</code></pre>

<h5 id="output-format">Output Format:</h5>

<pre><code>For each test case, print the maximum sum of the path from the root to the leaf node.

Print the output of each test case in a separate line.
</code></pre>

<h5 id="note">Note:</h5>

<pre><code>You don’t need to print anything, it has already been taken care of.
</code></pre>

<h5 id="constraints">Constraints:</h5>

<pre><code>1 &lt;= T &lt;= 10
1 &lt;= N &lt;= 5000
0 &lt;= DATA &lt;= 10^4

Where ‘T’ is the number of test cases, and ‘N’ is the total number of nodes in the binary tree, and “DATA” is the value of the tree node.

Time Limit: 1 sec
</code></pre>
</div>