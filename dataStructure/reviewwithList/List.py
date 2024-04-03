class Node:
    def __init__(self, elem, link):
        self.data = elem
        self.link = link

    def append(self, node):
        if node is not None:
            node.link = self.link
            self.link = node

    def popNext(self):
        next = self.link
        if next is not None:
            self.link = next.link
        return next
    
class LinkedList(Node):
    def __init__(self):
        self.head = None

    def isEmpty(self):
        return self.head == None
    
    def isFull(self):
        return False
    
    def getNode(self, pos):
        if pos < 0 : return None
        ptr = self.head
        for i in range(pos):
            if ptr == None:
                return None
            ptr = ptr.link
        return ptr
    
    def getEntry(self, pos):
        ptr = self.getNode(pos)
        if ptr is not None:
            return ptr.data
        else:
            return None
    
    def insert(self, pos, e):
        node = Node(e, None)
        before = self.getNode(pos-1)
        if before == None:
            node.link = self.head
            self.head = node
        else:
            before.append(node)
        
    def delete(self, pos):
        before = self.getNode(pos-1)
        if before == None:
            before = self.head
            if self.head is not None:
                self.head = self.head.link
            return before
        else:
            return before.popNext()
        
    def size(self):
        ptr = self.head
        count = 0
        while ptr != None:
            ptr = ptr.link
            count += 1
        return count
    
    def display(self, msg):
        ptr = self.head
        print(msg)
        while ptr is not None:
            print(ptr.data, end='->')
            ptr = ptr.link
        print('None')

    def replace(self, pos, e):
        ptr = self.getNode(pos)
        if ptr is not None:
            ptr.data = e


s = LinkedList()
s.display('연결리스트(초기): ')
s.insert(0, 10)
s.insert(0, 20)
s.insert(1, 30)
s.insert(s.size(), 40)
s.insert(2, 50)
s.display("연결리스트(삽입x5): ")
s.replace(2, 90)
s.display("연결리스트(삽입x5): ")