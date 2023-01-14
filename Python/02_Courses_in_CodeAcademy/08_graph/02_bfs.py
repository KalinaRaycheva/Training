from queue import Queue

def addEdge(adj, vertex, v):
    adj[vertex].append(v)

def BFSUtil(vertex, adj, visited):
    q = Queue()
    visited[vertex] = True
    q.put(vertex)

    while(not q.empty()):
        u = q.queue[0]
        print(u, end = " ")
        q.get()

        i = 0
        while i != len(adj[u]):
            if not visited[adj[u][i]]:
                visited[adj[u][i]] = True
                q.put(adj[u][i])
            i += 1

def BFS(adj, V):
    visited = [False] * V
    for vertex in range(V):
        if(visited[vertex] == False):
            BFSUtil(vertex, adj, visited)

if __name__ == '__main__':
    V = 5
    adj = [[] for i in range(V)]

    addEdge(adj, 0, 4)
    addEdge(adj, 1, 2)
    addEdge(adj, 1, 3)
    addEdge(adj, 1, 4)
    addEdge(adj, 2, 3)
    addEdge(adj, 3, 4)

    BFS(adj, V)
