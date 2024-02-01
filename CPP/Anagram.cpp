#include <iostream>
#include <algorithm>

using namespace std;

bool isAnagram(string str1, string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

string bubbleSortString(string str){
    for(int i = 0; i < str.length(); i++){
        for(int j = 0; j < str.length() - 1 - i; j++){
            if(str[j] > str[j+1]){
                swap(str[j], str[j+1]);
            }
        }
    }
    return str;
}

bool isAnagramBubbleSort(string str1, string str2){    
    return bubbleSortString(str1) == bubbleSortString(str2);
}

bool isAnagramCount(string str1, string str2){
    int length1 = str1.length();
    int length2 = str2.length();
    if(length1 != length2){
        return false;
    }
    int count[128] = {};
    for(int i = 0; i < length1; i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for(int i = 0; i < 128; i++){
        if(count[i]){
            return false;
        }
    }
    return true;
}

int main() {
    cout << isAnagram("listen", "silent") << endl;
	cout << isAnagram("angel", "glean") << endl;
	cout << isAnagram("brags", "grabs") << endl;
    
    cout << isAnagramBubbleSort("listen", "silent") << endl;
	cout << isAnagramBubbleSort("angel", "glean") << endl;
	cout << isAnagramBubbleSort("brags", "grabs") << endl;

    cout << isAnagramCount("listen", "silent") << endl;
	cout << isAnagramCount("angel", "glean") << endl;
	cout << isAnagramCount("brags", "grabs") << endl;
}