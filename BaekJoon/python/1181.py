num = int(input())

word_list = []
for i in range(num):
    word = input()
    word_list.append(word)

word_list = list(set(word_list))
word_list.sort()
word_list.sort(key=len)
for i in range(len(word_list)):
    print(word_list[i])
