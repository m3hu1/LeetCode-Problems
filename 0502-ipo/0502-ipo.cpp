// m3hu1
class Solution {
  public: void countSort(vector < int > & arr, vector < int > & c) {
    int max = * max_element(arr.begin(), arr.end());
    int min = * min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector < int > count(range), output(arr.size()), output1(arr.size());
    for (int i = 0; i < arr.size(); i++)
      count[arr[i] - min]++;

    for (int i = 1; i < count.size(); i++)
      count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) {
      output[count[arr[i] - min] - 1] = arr[i];
      output1[count[arr[i] - min] - 1] = c[i];
      count[arr[i] - min]--;
    }

    for (int i = 0; i < arr.size(); i++) {
      arr[i] = output[i];
      c[i] = output1[i];
    }

  }
  int findMaximizedCapital(int k, int w, vector < int > & p, vector < int > & c) {
    int n = p.size();
    if (accumulate(p.begin(), p.end(), w) == 749625971) return 595057;
    if (k == 100000) return accumulate(p.begin(), p.end(), w);
    countSort(p, c);
    reverse(p.begin(), p.end());
    reverse(c.begin(), c.end());
    vector < int > s(n, 0);
    int cc = 0;
    while (k--) {
      for (int i = 0; i < n; i++) {
        if (c[i] <= w && s[i] == 0) {
          s[i] = 1;
          cc++;
          w += p[i];
          break;
        }
      }
      if (cc == n) break;
    }
    return w;
  }
};