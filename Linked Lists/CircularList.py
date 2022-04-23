class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Circular:
    def __init__(self):
        self.head = None

    def insert(self, data):
        node = Node(data)
        temp_node = self.head

        node.next = self.head

        if self.head is not None:
            while temp_node.next != self.head:
                temp_node = temp_node.next

            temp_node.next = node

        else:
            node.next = node

        self.head = node

    def printNodes(self):
        while self.head:
            print(self.head.data, end=" ")
            self.head = self.head.next

            if self.head.next == self.head:
                break

if __name__ == "__main__":
    circular = Circular()

    circular.insert(34)
    circular.insert(56)
    circular.insert(0)

    
    print("Contents of circular linked list: \n")
    circular.printNodes()