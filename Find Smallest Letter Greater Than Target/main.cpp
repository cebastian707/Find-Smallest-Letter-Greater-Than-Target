/*By Cebastian Santiago
* Leetcode 744
*/
#include<iostream>
#include<vector>



char nextGreatestLetter(std::vector<char>&letters, char target) {
	//loop through the vector 
	for (size_t i = 0; i < letters.size(); i++) {
		//since the vector is sorted just compare when 
		//we find an element bigger then the target
		if (letters[i] > target) {
			return letters[i];
		}

	}

	return letters[0];
}


int main(int argc, char* argv[]) {
	std::vector<char> letters = {'c', 'f', 'j'};
	nextGreatestLetter(letters, 'd');
	return 0;
}