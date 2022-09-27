# Search In A 2D Matrix
## EASY
<div _ngcontent-serverapp-c188="" disableselect="" class="description prevent-select ng-star-inserted"><h4 id="you-have-been-given-a-2-d-array-39-mat-39-of-size-m-x-n-where-39-m-39-and-39-n-39-denote-the-number-of-rows-and-columns-respectively-the-elements-of-each-row-are-sorted-in-non-decreasing-order">You have been given a 2-D array 'MAT' of size M x N where 'M' and 'N' denote the number of rows and columns, respectively. The elements of each row are sorted in non-decreasing order.</h4>

<h4 id="moreover-the-first-element-of-a-row-is-greater-than-the-last-element-of-the-previous-row-if-exists">Moreover, the first element of a row is greater than the last element of the previous row (if exists).</h4>

<h4 id="you-are-given-an-integer-39-target-39-and-your-task-is-to-find-if-it-exists-in-the-given-39-mat-39-or-not">You are given an integer 'TARGET' and your task is to find if it exists in the given 'MAT' or not.</h4>

<h4 id="example">Example :</h4>

<pre><code>Given Matrix : 1 1 and Target : 8
               4 8 

The output should be "TRUE" as 8 is present in the Matrix.
</code></pre>

<h5 id="input-format">Input Format :</h5>

<pre><code>The first line of input contains an integer 'T' representing the number of test cases Then the test case follows :

The first line of each test case contains three space-separated integers 'M', 'N' and 'TARGET' where 'M' and 'N' denote the number of rows and columns of the 'MAT', respectively and 'TARGET' is the integer to be found.

From the second line of each test case, the next 'N' lines represent the rows of the 'MAT'. Every row contains 'M' single space-separated integers.
</code></pre>

<h5 id="output-format">Output Format :</h5>

<pre><code>For each test case, print “TRUE” if 'TARGET' is present in the 'MAT', else print “FALSE”.
</code></pre>

<h5 id="note">Note :</h5>

<pre><code>You do not need to print anything, it has already been taken care of. Just implement the function.
</code></pre>

<h5 id="constraints">Constraints :</h5>

<pre><code>1 &lt;= T &lt;= 10^2
1 &lt;= N &lt;= 50
1 &lt;= M &lt;= 50
-10^5 &lt;= MAT[i], TARGET &lt;= 10^5

Time Limit : 1 sec
</code></pre>

<h5 id="follow-up">Follow Up :</h5>

<pre><code>Can you solve this problem in less than O(M*N) time complexity ?
</code></pre>

<h5 id="sample-input-1">Sample Input 1 :</h5>

<pre><code>1
3 4 8
1 2 3 4
5 6 7 8
9 10 11 12
</code></pre>

<h5 id="sample-output-1">Sample Output 1 :</h5>

<pre><code>TRUE
</code></pre>

<h4 id="explanation-for-sample-input-1">Explanation For Sample Input 1 :</h4>

<pre><code>The 'TARGET' = 8 exists in the 'MAT' at index (1, 3).
</code></pre>

<h5 id="sample-input-2">Sample Input 2 :</h5>

<pre><code>2
3 3 78
1 2 4 
6 7 8
9 10 34
2 2 8
1 1
4 8
</code></pre>

<h5 id="sample-output-2">Sample Output 2 :</h5>

<pre><code>FALSE
TRUE
</code></pre>

<h4 id="explanation-for-sample-input-2">Explanation For Sample Input 2 :</h4>

<pre><code>The 'TARGET' = 78 do not exists in the 'MAT'.
The 'TARGET' = 8 exists in the 'MAT' at index (1, 1).
</code></pre>
</div>