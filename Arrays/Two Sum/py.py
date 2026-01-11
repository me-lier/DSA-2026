def two_sum(arr, target):
    hash_map = {}
    for i in range(len(arr)):
        sum = target - arr[i]
        if sum in hash_map.keys():
            return [hash_map.get(sum), i]
        hash_map[arr[i]] = i
        
    return [-1, -1]

def main():
    arr = list(map(int, input().split()))
    target = int(input())
    res = two_sum(arr, target)
    print(res)
    
if __name__ == "__main__":
    main()