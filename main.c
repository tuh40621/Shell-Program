#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <memory.h>
#include <dirent.h>
#include <sys/types.h> 
//code starts with a designated area that it is set in
// this case is where the code is saved: C:\\Into\\Shell Project>
int main(int argc, char **argv[]){
	char input[100];
	int c;
	int i = 0;
		//prints file location
			//(have to change that to a string to mess with later)
			
		printf("C:\\Into\\Shell Project>"); //look into building 2d array |||| building an array to hold strings
		i = 0;
		while(i < 99 && (c = getchar()) != '\n'){
			input[i++] = c;
			}
		input[i] = '\0';
		//figure out how to set an array
		
		for(int i=0; i<input.length; i++){
			if(input[i]==' '){
				wordCount++;
			}
		}
		parcer(input, wordCount);
		
		//while( strcmp(input,quit) )
		
		int result=strcmp(input,"quit");
		printf("\n The string is %s\n", input);
		
		if(result==0){
			printf("exit will occure");
		} 
	
		//code order is not important here, but will have:
			//cd,clr,dir,environ, echo, help, pause*, quit*.
			//* means that it is done
		
		
		else if(strcmp(input,"echo")==0 ){
			printf("%s\n" , input);
		}
		
		else if(strcmp(input, "pause")==0){
			printf("\nPaused, press enter to continue\n");
			while(i < 99 && (c = getchar()) != '\n'){
			//just waits for next instance of '\n'
			}
		}
		
		else if(strcmp(input, "cd")==0){
			printf("\nfound CD\n");
		}
		
		else if(strcmp(input, "dir")==0){
			
			DIR* newDir = opendir("/");			//ASK TA ABOUT SETTING ROOT DIRECTORY
			struct dirent* dirInfo;
			int i=0;
			//dirInfo=readdir(newDir);
			//printf("/n the first file is: %s \n\n ", dirInfo->d_name);
			while((dirInfo=readdir(newDir) )!= NULL ){
				
				printf("%s\n", dirInfo->d_name);
				
			}
			//return 0;
		}
		
		
		else if(strcmp(input, "clr")==0){
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		
		else{
			i=0;
			while(i<99 && input[i]!= '\0'){
				input[i]=' ';
				i++;			
			}
		}
		
	//create a while loop, so that while the code is going it will be waiting
	//for the next user input, on the main it will also be looking for the internal commands
	//and see if it matches any of them.
	
	
	//if not then it would go to a function where it will fork() or exec() programs as needed.
	
    return 0;

}


void parcer(char* parcer, int wordCount){
	char letter;
	for(int i=0; i<parcer.length; i++){
		
	}
	/* 
	 * string str = "Hello, how are you?";
	string tmp = "";
	int word_counter = 0;
	for (int i = 0; i < str.Length; i++) {
		if (str[i] == ' ') {
			word_counter++;
		}
	}
	
	 * string[] words = new string[word_counter + 1];
	int currentWordNo = 0; //at this index pointer
	for (int i = 0; i < str.Length; i++) {
    if (str[i] != ' ') {
        tmp = tmp + str[i];
        continue;
    }
    words[currentWordNo++] = tmp; //change your loop to this
    tmp = "";
}
words[currentWordNo++] = tmp; //do this for the last assignment*/
	
}