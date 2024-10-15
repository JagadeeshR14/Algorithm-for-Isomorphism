def isomorphic(graph1, graph2):
    # Check if the number of vertices is the same
    if len(graph1) != len(graph2):
        return False

    # Check if the degree sequence is the same
    degrees1 = {len(neighbors) for neighbors in graph1.values()}
    degrees2 = {len(neighbors) for neighbors in graph2.values()}

    return degrees1 == degrees2

def input_graph():
    graph = {}
    num_vertices = int(input("Enter the number of vertices: "))
    num_edges = int(input("Enter the number of edges: "))

    print("Enter the edges (vertex1 vertex2):")
    for _ in range(num_edges):
        vertex1, vertex2 = map(int, input().split())
        
        if vertex1 not in graph:
            graph[vertex1] = []
        if vertex2 not in graph:
            graph[vertex2] = []
        
        graph[vertex1].append(vertex2)
        graph[vertex2].append(vertex1)

    return graph

def main():
    print("Enter details for the first graph:")
    graph1 = input_graph()

    print("Enter details for the second graph:")
    graph2 = input_graph()

    if isomorphic(graph1, graph2):
        print("The graphs are isomorphic.")
    else:
        print("The graphs are not isomorphic.")

if __name__ == "__main__":
    main()
