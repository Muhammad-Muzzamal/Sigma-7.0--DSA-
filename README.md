    <h1>Learning Data Structures & Algorithms</h1>
    
    <p>A daily practice repository for mastering Data Structures and Algorithms through problem-solving on various coding platforms.</p>
    
    <h2>Objectives</h2>
    <ul>
        <li>Daily problem-solving practice</li>
        <li>Understanding core DSA concepts</li>
        <li>Improving algorithmic thinking</li>
        <li>Preparing for technical interviews</li>
    </ul>
    
    
    <h2>Tech Stack</h2>
    <p><strong>Languages:</strong> C++</p>
    <p><strong>Tools:</strong> Git, VS Code</p>
    <p><strong>Platforms:</strong> LeetCode, Codeforces, HackerRank</p>
    
    <h2>Daily Practice Routine</h2>
    <ol>
        <li>Solve at least 1 problem daily</li>
        <li>Add solution with time/space complexity</li>
        <li>Include problem statement and approach</li>
        <li>Update progress tracker</li>
    </ol>
    
    <h2>Solved Problems</h2>
    <table border="1">
        <tr>
            <th>Platform</th>
            <th>Easy</th>
            <th>Medium</th>
            <th>Hard</th>
            <th>Total</th>
        </tr>
        <tr>
            <td>LeetCode</td>
            <td>25</td>
            <td>15</td>
            <td>5</td>
            <td>45</td>
        </tr>
        <tr>
            <td>Codeforces</td>
            <td>30</td>
            <td>10</td>
            <td>2</td>
            <td>42</td>
        </tr>
        <tr>
            <td>HackerRank</td>
            <td>20</td>
            <td>5</td>
            <td>0</td>
            <td>25</td>
        </tr>
    </table>
    
    <h2>Sample Problem Format</h2>
    <pre><code>
# LeetCode #1: Two Sum
# Time: O(n), Space: O(n)

def twoSum(nums, target):
    num_map = {}
    for i, num in enumerate(nums):
        complement = target - num
        if complement in num_map:
            return [num_map[complement], i]
        num_map[num] = i
    return []
    </code></pre>
    
    <h2>How to Use</h2>
    <ol>
        <li>Clone the repo:
            <pre>git clone https://github.com/yourusername/learning-dsa.git</pre>
        </li>
        <li>Navigate to specific topic/platform</li>
        <li>Check solutions and explanations</li>
    </ol>
    
    <h2>Contribution</h2>
    <p>Contributions are welcome! Please:</p>
    <ol>
        <li>Fork the repository</li>
        <li>Create a new branch</li>
        <li>Add your solutions</li>
        <li>Submit a PR</li>
    </ol>
    
    <h2>License</h2>
    <p>MIT © Your Name</p>
    
    <hr>
    <p><em>"First solve the problem. Then, write the code."</em> - John Johnson</p>
</body>
</html>