<h2><a href="https://leetcode.com/problems/number-of-valid-words-in-a-sentence">2047. Number of Valid Words in a Sentence</a></h2><h3>Easy</h3><hr><p>A sentence consists of lowercase letters (<code>&#39;a&#39;</code> to <code>&#39;z&#39;</code>), digits (<code>&#39;0&#39;</code> to <code>&#39;9&#39;</code>), hyphens (<code>&#39;-&#39;</code>), punctuation marks (<code>&#39;!&#39;</code>, <code>&#39;.&#39;</code>, and <code>&#39;,&#39;</code>), and spaces (<code>&#39; &#39;</code>) only. Each sentence can be broken down into <strong>one or more tokens</strong> separated by one or more spaces <code>&#39; &#39;</code>.</p>

<p>A token is a valid word if <strong>all three</strong> of the following are true:</p>

<ul>
	<li>It only contains lowercase letters, hyphens, and/or punctuation (<strong>no</strong> digits).</li>
	<li>There is <strong>at most one</strong> hyphen <code>&#39;-&#39;</code>. If present, it <strong>must</strong> be surrounded by lowercase characters (<code>&quot;a-b&quot;</code> is valid, but <code>&quot;-ab&quot;</code> and <code>&quot;ab-&quot;</code> are not valid).</li>
	<li>There is <strong>at most one</strong> punctuation mark. If present, it <strong>must</strong> be at the <strong>end</strong> of the token (<code>&quot;ab,&quot;</code>, <code>&quot;cd!&quot;</code>, and <code>&quot;.&quot;</code> are valid, but <code>&quot;a!b&quot;</code> and <code>&quot;c.,&quot;</code> are not valid).</li>
</ul>

<p>Examples of valid words include <code>&quot;a-b.&quot;</code>, <code>&quot;afad&quot;</code>, <code>&quot;ba-c&quot;</code>, <code>&quot;a!&quot;</code>, and <code>&quot;!&quot;</code>.</p>

<p>Given a string <code>sentence</code>, return <em>the <strong>number</strong> of valid words in </em><code>sentence</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> sentence = &quot;<u>cat</u> <u>and</u>  <u>dog</u>&quot;
<strong>Output:</strong> 3
<strong>Explanation:</strong> The valid words in the sentence are &quot;cat&quot;, &quot;and&quot;, and &quot;dog&quot;.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> sentence = &quot;!this  1-s b8d!&quot;
<strong>Output:</strong> 0
<strong>Explanation:</strong> There are no valid words in the sentence.
&quot;!this&quot; is invalid because it starts with a punctuation mark.
&quot;1-s&quot; and &quot;b8d&quot; are invalid because they contain digits.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> sentence = &quot;<u>alice</u> <u>and</u>  <u>bob</u> <u>are</u> <u>playing</u> stone-game10&quot;
<strong>Output:</strong> 5
<strong>Explanation:</strong> The valid words in the sentence are &quot;alice&quot;, &quot;and&quot;, &quot;bob&quot;, &quot;are&quot;, and &quot;playing&quot;.
&quot;stone-game10&quot; is invalid because it contains digits.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence.length &lt;= 1000</code></li>
	<li><code>sentence</code> only contains lowercase English letters, digits, <code>&#39; &#39;</code>, <code>&#39;-&#39;</code>, <code>&#39;!&#39;</code>, <code>&#39;.&#39;</code>, and <code>&#39;,&#39;</code>.</li>
	<li>There will be at least&nbsp;<code>1</code> token.</li>
</ul>
