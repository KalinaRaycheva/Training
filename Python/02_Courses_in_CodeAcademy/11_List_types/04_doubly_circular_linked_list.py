class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.previous = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None
        self.last_node = None

    def append(self, data):
        if self.last_node == None:
            self.head = Node(data)
            self.last_node = self.head
        else:
            new_node = Node(data)
            self.last_node.next = new_node
            new_node.previous = self.last_node
            new_node.next = self.head
            self.head.previous = new_node
            self.last_node = new_node

    def display(self, Type):
        if Type == 'Left_To_Right':
            current = self.head
            while current.next is not None:
                print(current.data)   
                current = current.next
                if current == self.head:
                    break
        elif Type == 'Right_To_Left':
            current = self.last_node
            while current.previous is not None:
                print(current.data)   
                current = current.previous
                if current == self.last_node:
                    break
        else:
            print('This is not correct input. You have to choose between \
                   Left_To_Right or Right_To_Right')
          

if __name__ == '__main__':
    L = DoublyLinkedList()
    L.append(1)
    L.append(2)
    L.append(3)
    L.append(4)
    L.display('Left_To_Right')
    L.display('Right_To_Left')