file = open("outs.txt") # Opens file
input = file.read() # Read input from file
list = input.split() # Makes a list of each word
index = list.index("total") # Finds the index of total
lines = list[index-3] # Set vars for the num of lines, words, and characters
words = list[index-2]
char = list[index-1]
print("Lines: {}".format(lines)) # Prints the number of lines/words/characters
print("Words: {}".format(words))
print("Characters: {}".format(char))
file.close() # Closes file
