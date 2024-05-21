def find_pivot_node(num_nodes, num_edges, weights, edges):
    # Create arrays to store the cumulative sum of weights on the left and right sides.
    left_sum = [0] * num_nodes
    right_sum = [0] * num_nodes
    
    # Calculate the cumulative sums of weights for the left and right sides.
    for u, v in edges:
        left_sum[u - 1] += weights[v - 1]  # u is on the left of v
        right_sum[v - 1] += weights[u - 1]  # v is on the right of u
    
    # Initialize pivot_node to -1.
    pivot_node = -1
    
    # Loop through each node and find a perfect pivot.
    for i in range(num_nodes):
        diff = abs(left_sum[i] - right_sum[i])
        if diff == 0:
            pivot_node = i  # Convert from 0-based to 1-based indexing
            break
    
    return pivot_node

# Input example
num_nodes, num_edges = map(int, input().split())
weights = list(map(int, input().split()))
edges = [list(map(int, input().split())) for _ in range(num_edges)]

# Call the function to find the pivot node.
result = find_pivot_node(num_nodes, num_edges, weights, edges)
if result == -1:
    print("No perfect pivot node found.")
else:
    print("Perfect pivot node:", result)
