from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)
    
    def addEdge(self, u, v):
        self.graph[u].append(v)
    
    def BFS(self, u):
        visited = [False] * (max(self.graph) + 1)
        queue = []
        queue.append(u)
        visited[u] = True
        while queue:
            u = queue.pop(0)
            print(u, end = " ")
            for it in self.graph[u]:
                if visited[it] == False:
                    queue.append(it)
                    visited[it] = True

    """
    #несвързана графика:
    def BFS(self.graph, V):
    visited = [False] * V                                        
	bfs_traversal = []
	for u in range(V):
		if (visited[u] == False):
			queue = []
			queue.append(u)
			visited[u] = True
			while (len(queue)):
				u = queue.pop(0)
				bfs_traversal.append(u)
				for it in self.graph[u]:
					if visited[it] == False:
						visited[it] = True
						queue.append(it)

	return bfs_traversal
    """


g = Graph()
g.addEdge(0, 1)
g.addEdge(0, 2)
g.addEdge(1, 2)
g.addEdge(2, 0)
g.addEdge(2, 3)
g.addEdge(3, 3)
 
print("Following is Breadth First Traversal"
      " (starting from vertex 2)")
g.BFS(2)