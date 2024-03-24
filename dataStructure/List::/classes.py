class Node:
    def __init__(self, elem, link = None):
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
            if ptr == None: # 넘어가는 pos위치일때 None 반환
                return None
            ptr = ptr.link
        return ptr
    
    def getEntry(self, pos):
        node = self.getNode(pos)
        if node == None : return None   # 해당 노드가 없는 경우
        else : return node.data

    def insert(self, e, pos):
        node = Node(e, None)    # 새로 만들 노드 생성
        before = self.getNode(pos-1)
        if before == None :
            node.link = self.head
            self.head = node
        else : before.append(node)

    def delete(self, pos):
        before = self.getNode(pos-1)
        if before == None:
            before = self.head
            if self.head is not None :
                self.head = self.head.link  # 헤드 부분을 삭제한다면 머리 노드를 교체해야 하므로
            return before
        else : return before.popNext

    def size(self):
        count = 0
        ptr = self.head
        while ptr.link is not None:
            ptr = ptr.link
            count += 1
        return count

    def display(self, msg="LinkedList:"):
        print(msg, end=' ')
        ptr = self.head
        while ptr is not None:
            print(ptr.data, end='->')
            ptr = ptr.link
        print('None')