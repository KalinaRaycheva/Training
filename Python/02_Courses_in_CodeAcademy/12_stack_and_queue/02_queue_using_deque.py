from collections import deque
from queue import Queue

#first way
q = deque()
q.append('a')
q.append('b')
q.append('c')

print(q.popleft())
print(q)

#second way
q2 = Queue()
q2.put('a')
q2.put('b')
q2.put('c')
print(q2.qsize())
print(q2.get())
print(q2.qsize())

