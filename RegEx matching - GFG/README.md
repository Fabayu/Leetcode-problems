# RegEx matching
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a pattern string and a test string, If the pattern is preceded by a ^, the pattern(excluding the ^)&nbsp;will be matched with the starting position of the text string. Similarly, if it is preceded by a $, the pattern(excluding the ^)&nbsp;will be matched with the ending position of the text string. If no such markers are present, it will be checked whether pattern is a substring of test.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
P = </strong>"^coal"
<strong>S = </strong>"coaltar"
<strong>Output</strong>:
1
<strong>Explanation:</strong>
The pattern "coal" is present at the
beginning of the string, so Output is 1.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
P = </strong>"tar$"
<strong>S = </strong>"coaltar"
<strong>Output</strong>:
1
<strong>Explanation:</strong> 
The pattern "tar" is present at the
end of the string, so Output is 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 3:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
P = </strong>"rat"
<strong>S = </strong>"algorate"
<strong>Output</strong>:
1
<strong>Explanation:</strong>
The pattern "rat" is present as a
substring of the string S,
so Output is 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 4:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
P = </strong>"abcd"
<strong>S = </strong>"efgh"
<strong>Output</strong>:
0
<strong>Explanation:</strong>
There is no substring which is equal
to P in string S, so output is 0.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>isPatternPresent()</strong> which takes Strings P and S as input and returns 0 or 1.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|P|*|S|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S| &lt;= 10<sup>5</sup><br>
1 &lt;= |P| &lt;= 10<br>
String S may contain both Uppercase and Lowercase letters.</span></p>
 <p></p>
            </div>