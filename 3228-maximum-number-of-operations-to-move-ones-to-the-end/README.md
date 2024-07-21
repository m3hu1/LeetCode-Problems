<h2><a href="https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end">3228. Maximum Number of Operations to Move Ones to the End</a></h2><h3>Medium</h3><hr><p>You are given a <span data-keyword="binary-string">binary string</span> <code>s</code>.</p>

<p>You can perform the following operation on the string <strong>any</strong> number of times:</p>

<ul>
	<li>Choose <strong>any</strong> index <code>i</code> from the string where <code>i + 1 &lt; s.length</code> such that <code>s[i] == &#39;1&#39;</code> and <code>s[i + 1] == &#39;0&#39;</code>.</li>
	<li>Move the character <code>s[i]</code> to the <strong>right</strong> until it reaches the end of the string or another <code>&#39;1&#39;</code>. For example, for <code>s = &quot;010010&quot;</code>, if we choose <code>i = 1</code>, the resulting string will be <code>s = &quot;0<strong><u>001</u></strong>10&quot;</code>.</li>
</ul>

<p>Return the <strong>maximum</strong> number of operations that you can perform.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;1001101&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">4</span></p>

<p><strong>Explanation:</strong></p>

<p>We can perform the following operations:</p>

<ul>
	<li>Choose index <code>i = 0</code>. The resulting string is <code>s = &quot;<u><strong>001</strong></u>1101&quot;</code>.</li>
	<li>Choose index <code>i = 4</code>. The resulting string is <code>s = &quot;0011<u><strong>01</strong></u>1&quot;</code>.</li>
	<li>Choose index <code>i = 3</code>. The resulting string is <code>s = &quot;001<strong><u>01</u></strong>11&quot;</code>.</li>
	<li>Choose index <code>i = 2</code>. The resulting string is <code>s = &quot;00<strong><u>01</u></strong>111&quot;</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;00111&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li>
	<li><code>s[i]</code> is either <code>&#39;0&#39;</code> or <code>&#39;1&#39;</code>.</li>
</ul>
