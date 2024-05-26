<h2><a href="https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice">3158. Find the XOR of Numbers Which Appear Twice</a></h2><h3>Easy</h3><hr><p>You are given an array <code>nums</code>, where each number in the array appears <strong>either</strong><em> </em>once<em> </em>or<em> </em>twice.</p>

<p>Return the bitwise<em> </em><code>XOR</code> of all the numbers that appear twice in the array, or 0 if no number appears twice.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,1,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">1</span></p>

<p><strong>Explanation:</strong></p>

<p>The only number that appears twice in&nbsp;<code>nums</code>&nbsp;is 1.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3]</span></p>

<p><strong>Output:</strong> <span class="example-io">0</span></p>

<p><strong>Explanation:</strong></p>

<p>No number appears twice in&nbsp;<code>nums</code>.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,2,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">3</span></p>

<p><strong>Explanation:</strong></p>

<p>Numbers 1 and 2 appeared twice. <code>1 XOR 2 == 3</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 50</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 50</code></li>
	<li>Each number in <code>nums</code> appears either once or twice.</li>
</ul>
