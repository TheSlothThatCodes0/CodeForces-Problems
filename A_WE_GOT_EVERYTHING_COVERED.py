def solve():
    a, b = map(int, input().split())

    alpha = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

    segment = ''.join(alpha[:b])

    for i in range(a):
        segment+= segment

    print(segment + "\n")

def main():
    c = int(input())
    while c > 0:
        solve()
        c -= 1

if __name__ == "__main__":
    main()
