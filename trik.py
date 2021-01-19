def main():

	cupOrder = input()
	left = 1
	middle = 2
	right = 3
	position = left


	for letter in cupOrder:

		if letter == 'A' and position == left:
			position = middle
		elif letter == 'A' and position == middle:
			position = left
		elif letter == 'B' and position == middle:
			position = right
		elif letter == 'B' and position == right:
			position = middle
		elif letter == 'C' and position == right:
			position = left
		elif letter == 'C' and position == left:
			position = right

	print(position)

if __name__ == "__main__":
	main()