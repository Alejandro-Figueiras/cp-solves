#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);

  int A = 'a';

  int n; cin >> n;
  int words[26] = { 0 };

  for (int i = 0; i < n; i++) {
    string word, word2;
    cin >> word >> word2;
    int lengthA = word.length();
    int wordsA[26] = { 0 };
    for (int j = 0; j < lengthA; j++) {
      int valor = word[j] - A;
      wordsA[valor]++;
    }

    int wordsB[26] = { 0 };
    int lengthB = word2.length();
    for (int j = 0; j < lengthB; j++) {
      int valor = word2[j] - A;
      wordsB[valor]++;
    }

    for (int j = 0; j < 26; j++)
      words[j] += max(wordsA[j], wordsB[j]);
  }

  for (int i = 0; i < 26; i++) {
    cout << words[i] << endl;
  }

  return 0;
}