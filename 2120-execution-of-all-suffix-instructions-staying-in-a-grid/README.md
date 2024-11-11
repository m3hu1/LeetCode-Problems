<h2><a href="https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid">2120. Execution of All Suffix Instructions Staying in a Grid</a></h2><h3>Medium</h3><hr><p>There is an <code>n x n</code> grid, with the top-left cell at <code>(0, 0)</code> and the bottom-right cell at <code>(n - 1, n - 1)</code>. You are given the integer <code>n</code> and an integer array <code>startPos</code> where <code>startPos = [start<sub>row</sub>, start<sub>col</sub>]</code> indicates that a robot is initially at cell <code>(start<sub>row</sub>, start<sub>col</sub>)</code>.</p>

<p>You are also given a <strong>0-indexed</strong> string <code>s</code> of length <code>m</code> where <code>s[i]</code> is the <code>i<sup>th</sup></code> instruction for the robot: <code>&#39;L&#39;</code> (move left), <code>&#39;R&#39;</code> (move right), <code>&#39;U&#39;</code> (move up), and <code>&#39;D&#39;</code> (move down).</p>

<p>The robot can begin executing from any <code>i<sup>th</sup></code> instruction in <code>s</code>. It executes the instructions one by one towards the end of <code>s</code> but it stops if either of these conditions is met:</p>

<ul>
	<li>The next instruction will move the robot off the grid.</li>
	<li>There are no more instructions left to execute.</li>
</ul>

<p>Return <em>an array</em> <code>answer</code> <em>of length</em> <code>m</code> <em>where</em> <code>answer[i]</code> <em>is <strong>the number of instructions</strong> the robot can execute if the robot <strong>begins executing from</strong> the</em> <code>i<sup>th</sup></code> <em>instruction in</em> <code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/1.png" style="width: 145px; height: 142px;" />
<pre>
<strong>Input:</strong> n = 3, startPos = [0,1], s = &quot;RRDDLU&quot;
<strong>Output:</strong> [1,5,4,3,1,0]
<strong>Explanation:</strong> Starting from startPos and beginning execution from the i<sup>th</sup> instruction:
- 0<sup>th</sup>: &quot;<u><strong>R</strong></u>RDDLU&quot;. Only one instruction &quot;R&quot; can be executed before it moves off the grid.
- 1<sup>st</sup>:  &quot;<u><strong>RDDLU</strong></u>&quot;. All five instructions can be executed while it stays in the grid and ends at (1, 1).
- 2<sup>nd</sup>:   &quot;<u><strong>DDLU</strong></u>&quot;. All four instructions can be executed while it stays in the grid and ends at (1, 0).
- 3<sup>rd</sup>:    &quot;<u><strong>DLU</strong></u>&quot;. All three instructions can be executed while it stays in the grid and ends at (0, 0).
- 4<sup>th</sup>:     &quot;<u><strong>L</strong></u>U&quot;. Only one instruction &quot;L&quot; can be executed before it moves off the grid.
- 5<sup>th</sup>:      &quot;U&quot;. If moving up, it would move off the grid.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/2.png" style="width: 106px; height: 103px;" />
<pre>
<strong>Input:</strong> n = 2, startPos = [1,1], s = &quot;LURD&quot;
<strong>Output:</strong> [4,1,0,0]
<strong>Explanation:</strong>
- 0<sup>th</sup>: &quot;<u><strong>LURD</strong></u>&quot;.
- 1<sup>st</sup>:  &quot;<u><strong>U</strong></u>RD&quot;.
- 2<sup>nd</sup>:   &quot;RD&quot;.
- 3<sup>rd</sup>:    &quot;D&quot;.
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/12/09/3.png" style="width: 67px; height: 64px;" />
<pre>
<strong>Input:</strong> n = 1, startPos = [0,0], s = &quot;LRUD&quot;
<strong>Output:</strong> [0,0,0,0]
<strong>Explanation:</strong> No matter which instruction the robot begins execution from, it would move off the grid.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>m == s.length</code></li>
	<li><code>1 &lt;= n, m &lt;= 500</code></li>
	<li><code>startPos.length == 2</code></li>
	<li><code>0 &lt;= start<sub>row</sub>, start<sub>col</sub> &lt; n</code></li>
	<li><code>s</code> consists of <code>&#39;L&#39;</code>, <code>&#39;R&#39;</code>, <code>&#39;U&#39;</code>, and <code>&#39;D&#39;</code>.</li>
</ul>
