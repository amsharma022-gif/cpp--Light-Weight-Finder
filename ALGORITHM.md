# 8-Ball Puzzle

The 8-ball puzzle is a classic problem-solving challenge that involves determining the identity of a unique heavier ball from a set of eight identical-looking balls using a minimal number of weighings.

## Puzzle Logic
The core logic of the puzzle is based on the idea that one of the balls in the group of eight is heavier than the others. The challenge lies in discovering which one it is through a series of strategic weighings.

## Weighing Strategy
The optimal strategy for solving the 8-ball puzzle involves using a balance scale to compare the weights of the balls. Here’s the step-by-step strategy:  
1. **Divide the balls into three groups**: Group A (3 balls), Group B (3 balls), and Group C (2 balls).  
2. **First Weighing**: Compare Group A and Group B.  
   - If one group is heavier, the heavier ball is in that group.  
   - If they balance, the heavier ball is in Group C.  
3. **Second Weighing**: If the heavier ball was in Group A or B (the group of 3), take 2 balls from that group and weigh them against each other.  
   - If one is heavier, that’s the unique ball.  
   - If they balance, the heavier ball is the unweighed ball from that group.  
4. If the heavier ball is in Group C, weigh the 2 balls against each other to find the heavier one directly.

## Algorithm Complexity
The time complexity of the algorithm for solving the 8-ball puzzle is O(1) as the number of operations required to identify the heavier ball is fixed (only 2 to 3 weighings). The space complexity is also O(1), since we are not using any additional data structures that grow with the size of the input.

## Implementation
The game implements this classic puzzle through an interactive interface where players can choose which balls to weigh against each other based on the results of previous weighings. The goal is to use logical reasoning and deduction to find the heavier ball in as few moves as possible.