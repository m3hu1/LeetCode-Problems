<h2><a href="https://leetcode.com/problems/number-of-changing-keys">3019. Number of Changing Keys</a></h2><h3>Easy</h3><hr><p>You are given a <strong>0-indexed </strong>string <code>s</code> typed by a user. Changing a key is defined as using a key different from the last used key. For example, <code>s = &quot;ab&quot;</code> has a change of a key while <code>s = &quot;bBBb&quot;</code> does not have any.</p>

<p>Return <em>the number of times the user had to change the key. </em></p>

<p><strong>Note: </strong>Modifiers like <code>shift</code> or <code>caps lock</code> won&#39;t be counted in changing the key that is if a user typed the letter <code>&#39;a&#39;</code> and then the letter <code>&#39;A&#39;</code> then it will not be considered as a changing of key.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;aAbBcC&quot;
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
From s[0] = &#39;a&#39; to s[1] = &#39;A&#39;, there is no change of key as caps lock or shift is not counted.
From s[1] = &#39;A&#39; to s[2] = &#39;b&#39;, there is a change of key.
From s[2] = &#39;b&#39; to s[3] = &#39;B&#39;, there is no change of key as caps lock or shift is not counted.
From s[3] = &#39;B&#39; to s[4] = &#39;c&#39;, there is a change of key.
From s[4] = &#39;c&#39; to s[5] = &#39;C&#39;, there is no change of key as caps lock or shift is not counted.

</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;AaAaAaaA&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> There is no change of key since only the letters &#39;a&#39; and &#39;A&#39; are<!-- notionvc: 8849fe75-f31e-41dc-a2e0-b7d33d8427d2 --> pressed which does not require change of key.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 100</code></li>
	<li><code>s</code> consists of only upper case and lower case English letters.</li>
</ul>
