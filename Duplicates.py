def main():
	sentence = input()
	words = sentence.split()

	for i in range(len(words)):
		for j in range(len(words)):
			if(i == j):
				continue
			if(words[j] == words[i]):
				print("no")
				return

	print("yes")




if __name__ == '__main__':
	main()