<h2><a href="https://leetcode.com/problems/substring-with-concatenation-of-all-words/?envType=study-plan-v2&envId=top-interview-150">30. Substring with Concatenation of All Words</a></h2><h3>Hard</h3><hr><p>You are given a string <code>s</code> and an array of strings <code>words</code>. All the strings of <code>words</code> are of <strong>the same length</strong>.</p>

<p>A <strong>concatenated substring</strong> in <code>s</code> is a substring that contains all the strings of any permutation of <code>words</code> concatenated.</p>

<ul>
	<li>For example, if <code>words = [&quot;ab&quot;,&quot;cd&quot;,&quot;ef&quot;]</code>, then <code>&quot;abcdef&quot;</code>, <code>&quot;abefcd&quot;</code>, <code>&quot;cdabef&quot;</code>, <code>&quot;cdefab&quot;</code>, <code>&quot;efabcd&quot;</code>, and <code>&quot;efcdab&quot;</code> are all concatenated strings. <code>&quot;acdbef&quot;</code> is not a concatenated substring because it is not the concatenation of any permutation of <code>words</code>.</li>
</ul>

<p>Return <em>the starting indices of all the concatenated substrings in </em><code>s</code>. You can return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;barfoothefoobarman&quot;, words = [&quot;foo&quot;,&quot;bar&quot;]
<strong>Output:</strong> [0,9]
<strong>Explanation:</strong> Since words.length == 2 and words[i].length == 3, the concatenated substring has to be of length 6.
The substring starting at 0 is &quot;barfoo&quot;. It is the concatenation of [&quot;bar&quot;,&quot;foo&quot;] which is a permutation of words.
The substring starting at 9 is &quot;foobar&quot;. It is the concatenation of [&quot;foo&quot;,&quot;bar&quot;] which is a permutation of words.
The output order does not matter. Returning [9,0] is fine too.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;wordgoodgoodgoodbestword&quot;, words = [&quot;word&quot;,&quot;good&quot;,&quot;best&quot;,&quot;word&quot;]
<strong>Output:</strong> []
<strong>Explanation:</strong> Since words.length == 4 and words[i].length == 4, the concatenated substring has to be of length 16.
There is no substring of length 16 in s that is equal to the concatenation of any permutation of words.
We return an empty array.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;barfoofoobarthefoobarman&quot;, words = [&quot;bar&quot;,&quot;foo&quot;,&quot;the&quot;]
<strong>Output:</strong> [6,9,12]
<strong>Explanation:</strong> Since words.length == 3 and words[i].length == 3, the concatenated substring has to be of length 9.
The substring starting at 6 is &quot;foobarthe&quot;. It is the concatenation of [&quot;foo&quot;,&quot;bar&quot;,&quot;the&quot;] which is a permutation of words.
The substring starting at 9 is &quot;barthefoo&quot;. It is the concatenation of [&quot;bar&quot;,&quot;the&quot;,&quot;foo&quot;] which is a permutation of words.
The substring starting at 12 is &quot;thefoobar&quot;. It is the concatenation of [&quot;the&quot;,&quot;foo&quot;,&quot;bar&quot;] which is a permutation of words.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= words.length &lt;= 5000</code></li>
	<li><code>1 &lt;= words[i].length &lt;= 30</code></li>
	<li><code>s</code> and <code>words[i]</code> consist of lowercase English letters.</li>
</ul>
