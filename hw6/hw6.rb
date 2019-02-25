=begin
  Micah Tobon
  CS 3560 Spring 2019
  Homework 6
=end
continue = "no"
loop do # Create a loop to continue inputting words
  puts "Enter a word."
  word = gets.chomp.downcase # Receive word from user
  if word[0] === "f" # Check to see if first letter is an f
    word[0]= "gh" # If there is then replace it
  end
  if word[word.length - 2] === "s" && word[word.length - 1] === "h" # Check to see if last two letters are sh
    word[word.length - 2] = "t" # If there is then replace it
    word[word.length - 1] = "i"
  end

  i = 1 # Create a loop to see if there are i's in the middle
  loop do
    if word[i] === "i"
      word[i] = "o" # If there is then replace it
    end

    i += 1

    if i === word.length - 1  # Leave loop when you hit the end of the word
      break
    end
  end
  puts word # Print the new manipulated word

puts "Do you want to enter another word? (Yes/No)" # Ask the user if they want to enter more words
continue = gets.chomp.downcase
  if continue === "no" # Leave loop if they are done
    break
  end
end
