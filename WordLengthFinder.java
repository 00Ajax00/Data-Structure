public class WordLengthFinder {
    public static void main(String[] args) {
        String sentence = "Find the largest and smallest length word in this sentence";
        String[] words = sentence.split(" ");
        String largestWord = "";
        String smallestWord = words[0];
        for (String word : words) {
            if (word.length() > largestWord.length()) {
                largestWord = word;
            }
            if (word.length() < smallestWord.length()) {
                smallestWord = word;
            }
        }
        System.out.println("Largest word: " + largestWord);
        System.out.println("Smallest word: " + smallestWord);
    }
}