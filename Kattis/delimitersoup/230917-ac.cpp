#include <bits/stdc++.h>
using namespace std;
char cierre(char c) {
  switch (c) {
  case '(': return ')';
  case '{': return '}';
  case '[': return ']';
  }
  return ' ';
}
int main() {
  int n; cin >> n;
  char a; scanf("%c", &a); // El enter despues del N
  bool ok = true;
  stack<char> st;

  for (int i = 0; i < n; i++) {
    char c; scanf("%c", &c);
    if (c == '(' || c == '[' || c == '{') {
      st.push(c);
    } else if (c == ')' || c == ']' || c == '}') {
      if (st.empty() || c != cierre(st.top())) {
        printf("%c %d\n", c, i);
        ok = false; break;
      }
      st.pop();
    }
  }
  if (ok) printf("ok so far\n");

  return 0;
}
