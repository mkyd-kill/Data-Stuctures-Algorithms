class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def printList(self): # linked list traversal
        """ Printing all contents inside the linked lists """
        while self.head:
            print(self.head.data, end=" ")
            self.head = self.head.next


if __name__ == '__main__':
    linked_list = LinkedList()

    linked_list.head = Node(3)
    second = Node(4)
    third = Node(5)

    '''
    ## The representation
    
    linked_list.head    second            third
         |                |                  |
         |                |                  |
    +----+------+     +----+------+     +----+------+
    | 1  | None |     | 2  | None |     |  3 | None |
    +----+------+     +----+------+     +----+------+

    # We have only assigned data to the nodes but have not linked them
    '''

    # linking the nodes
    linked_list.head.next = second
    second.next = third

    '''
    # After linking

    linked_list.head    second              third
         |                |                  |
         |                |                  |
    +----+------+     +----+------+     +----+------+
    | 1  |  o-------->| 2  |  o-------->|  3 | null |
    +----+------+     +----+------+     +----+------+
    '''

    linked_list.printList()