# encoding utf-8
# luogu p1009

def fac(x):
    result = 1
    for i in range(x):
        result *= (i + 1)
    return result


def main():
    n = int(input())
    sum = 0
    for i in range(n):
        sum += fac(i + 1)
    print(sum)


if __name__ == "__main__":
    main()
