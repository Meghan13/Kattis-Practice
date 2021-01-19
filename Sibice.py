import math

def main():
	info = input().split()

	numberMatches = int(info[0])
	width = info[1]
	length = info[2]
	hypot = math.sqrt(math.pow(int(width),2) + math.pow(int(length),2))
	matches = []

	for i in range(int(numberMatches)):
		matches.append(input())
		if(int(matches[i])> hypot):
			print("NE")
		else:
			print("DA")

if __name__ == '__main__':
	main()