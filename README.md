# Word Substitute
A program that reads in a line of text and replaces all four-letter words with the word "love".

### Synopsis
The program reads in a line of text from the user and replaces all four-letter words with the word "love".<br />
If the four letter word starts with a capital letter, it will be replaced with by "Love", not by "love".

The program will repeat this action until the user says to quit.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/word-substitute.git
   ```
    or [download as ZIP](https://github.com/cramaechi/word-substitute/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd word-substitute
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./word_substite
```

Sample Output:
```
Enter line of text: My back is killing me! I need a doctor now!                                                       
                                                                                                                      
Your new text: My love is killing me! I love a doctor now!                                                            
                                                                                                                      
Would like to continue (y/n)? y                                                                                       
                                                                                                                      
Enter line of text: Hello Matt, how are you doing today?                                                              
                                                                                                                      
Your new text: Hello Love, how are you doing today?                                                                   
                                                                                                                      
Would like to continue (y/n)? y                                                                                       
                                                                                                                      
Enter line of text: I made up my mind that I will conquer the world.                                                  
                                                                                                                      
Your new text: I love up my love love I love conquer the world.                                                       
                                                                                                                      
Would like to continue (y/n)? n 
```
