
def main():
	numLines = input()
	for i in range(int(numLines)):
		sentence = input()
		if('Simon says ' in sentence):
			print(sentence[11:])

if __name__ == '__main__':
	main()