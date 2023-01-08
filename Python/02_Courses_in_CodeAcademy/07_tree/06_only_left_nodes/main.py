'''   Time Complexity = O(N)
     Space Complexity = O(N)
     where N is the the number of nodes in the binary tree.
'''
import queue

# Binary TreeNode class
class BinaryTreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def leftViewUtil(node, level, maxLevel) :
    if (node == None) :
        return 0

    #print the first node of every level
    if (maxLevel < level) :
        print(node.data, end=" ")
        maxLevel = level
    
    maxLevel = max(maxLevel, leftViewUtil(node.left, level + 1, maxLevel))
    maxLevel = max(maxLevel, leftViewUtil(node.right, level + 1, maxLevel))
    return maxLevel

def leftView(root) :
    maxLevel = leftViewUtil(root, 1, 0) 


# To built the tree
def buildLevelTree(levelorder):
    index = 0
    length = len(levelorder)
    if length<=0 or levelorder[0]==-1:

        return None
    root = BinaryTreeNode(levelorder[index])
    index += 1
    q = queue.Queue()
    q.put(root)

    while not q.empty():

        currentNode = q.get()
        leftChild = levelorder[index]
        index += 1

        if leftChild != -1:

            leftNode = BinaryTreeNode(leftChild)
            currentNode.left =leftNode
            q.put(leftNode)

        rightChild = levelorder[index]
        index += 1

        if rightChild != -1:

            rightNode = BinaryTreeNode(rightChild)
            currentNode.right =rightNode
            q.put(rightNode)

    return root

# Main

levelOrder = [int(i) for i in input().strip().split()]
root = buildLevelTree(levelOrder)
leftView(root)
