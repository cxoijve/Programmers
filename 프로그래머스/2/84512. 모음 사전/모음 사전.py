def solution(word):
    answer = 0
    dictionary = []
    words = 'AEIOU'

    def dfs(cnt, w):
        # 최대 길이는 5
        if cnt == 5:
            return
        for i in range(len(words)):
            dictionary.append(w + words[i])
            dfs(cnt+1, w + words[i])
    dfs(0, '')
    return dictionary.index(word) + 1