n = int(input())


faces = {
    "Tetrahedron": 4,
    "Cube": 6,
    "Octahedron": 8,
    "Dodecahedron": 12,
    "Icosahedron": 20
}

ans = 0
for i in range(n):
    
    name = input().strip()
  
    ans += faces[name]

print(ans)