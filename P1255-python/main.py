# encoding utf-8
# luogu p1255

def main():
    before = 1
    after = 1
    n = int(input())
    tmp = 1
    for i in range(n - 1):
        tmp = before + after
        before = after
        after = tmp
    print(tmp)


if __name__ == "__main__":
    main()
