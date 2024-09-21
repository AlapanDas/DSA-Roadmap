class Tree:
    def __init__(self,val=None):
        self.value = val
        if self.value:
            self.left = Tree()
            self.right = Tree()
        else:
            self.left = None
            self.right = None
    def empty(self):
        return (self.value==None)
    def insert(self,val):
        if(self.empty()):
            self.value=val
            self.left=Tree()
            self.right=Tree()
        elif(val<self.value):
            self.left.insert(val) # type: ignore
            return
        else:
            self.right.insert(val); # type: ignore
            return
    def printTree(self):
        if self.empty():
            return []
        else:
            return self.left.printTree() + [self.value] + self.right.printTree() # type: ignore
    def find(self,val):
        if self.value==val:
            print("FOUND")
            return True
        if self.empty():
            print("NOT FOUND")
            return False
        if val<self.value:
            self.left.find(val) # type: ignore
        else:
            self.right.find(val) # type: ignore
        




nodes=[16,8,24,6,12,18,28,4,6,14,26,30]
root=Tree(nodes[0])
for item in nodes:
    root.insert(item)
print(root.printTree())
print(root.find(30))