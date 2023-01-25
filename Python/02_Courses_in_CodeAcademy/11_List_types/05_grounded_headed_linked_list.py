class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class GroundedHeadedLinkedList:
    def __init__(self):
        self.head = Node(0)
        self.last_node = self.head

    def append(self, data):
        self.last_node.next = Node(data)
        self.last_node = self.last_node.next

    def display(self):
        curent = self.head.next
        while curent is not None:
            print(curent.data)
            curent = curent.next

if __name__ == '__main__':
    L = GroundedHeadedLinkedList()
    L.append(1)
    L.append(2)
    L.append(3)
    L.append(4)
    L.display()