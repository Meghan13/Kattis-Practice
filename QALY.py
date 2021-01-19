def main():

	periods = input()
	total = 0
	for i in range(int(periods)):
		info = input().split()
		quality = info[0]
		years = info[1]
		total += float(quality)*float(years)

	print(total)



if __name__ == '__main__':
	main()

