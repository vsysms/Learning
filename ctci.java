//Implement an algorithm to determine if a string has all unique characters


public static boolean isUniqueChars2(String str) {
	boolean[] char_set = new boolean[256]; //A character array that represents all ASCII characters. If character set is not ASCII, increase array size.
	for (int i = 0; i < str.length(); i++) {
		int val = str.charAt(i); //Converts letter to ASCII value.
		if (char_set[val]) return false; //If the letter is in the array(char_set[val] returns true), then there are not all unique characters/
		char_set[val] = true; //Sets the letter to true in the ASCII array.
	}
	return true; //If all characters are unique in the array, return true.
}
