<h2><a href="https://leetcode.com/problems/sorting-the-sentence">1859. Sorting the Sentence</a></h2><h3>Easy</h3><hr><p>A <strong>sentence</strong> is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.</p>

<p>A sentence can be <strong>shuffled</strong> by appending the <strong>1-indexed word position</strong> to each word then rearranging the words in the sentence.</p>

<ul>
	<li>For example, the sentence <code>&quot;This is a sentence&quot;</code> can be shuffled as <code>&quot;sentence4 a3 is2 This1&quot;</code> or <code>&quot;is2 sentence4 This1 a3&quot;</code>.</li>
</ul>

<p>Given a <strong>shuffled sentence</strong> <code>s</code> containing no more than <code>9</code> words, reconstruct and return <em>the original sentence</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;is2 sentence4 This1 a3&quot;
<strong>Output:</strong> &quot;This is a sentence&quot;
<strong>Explanation:</strong> Sort the words in s to their original positions &quot;This1 is2 a3 sentence4&quot;, then remove the numbers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = &quot;Myself2 Me1 I4 and3&quot;
<strong>Output:</strong> &quot;Me Myself and I&quot;
<strong>Explanation:</strong> Sort the words in s to their original positions &quot;Me1 Myself2 and3 I4&quot;, then remove the numbers.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= s.length &lt;= 200</code></li>
	<li><code>s</code> consists of lowercase and uppercase English letters, spaces, and digits from <code>1</code> to <code>9</code>.</li>
	<li>The number of words in <code>s</code> is between <code>1</code> and <code>9</code>.</li>
	<li>The words in <code>s</code> are separated by a single space.</li>
	<li><code>s</code> contains no leading or trailing spaces.</li>
</ul>