func findAllRecipes(r []string, ing [][]string, ss []string) []string {
  d := make(map[string][]string)
  od := make(map[string]int)
  for i := 0; i < len(r); i++ {
    for _, ing := range ing[i] {
      d[ing] = append(d[ing], r[i])
      od[r[i]]++
    }
  }

  mp := make(map[string]struct{})
  for _, recipe := range r {
    mp[recipe] = struct{}{}
  }

  var q []string
  q = append(q, ss...)
  var ans []string
  var curr string

  for len(q) != 0 {
    curr, q = q[0], q[1:]
    if _, ok := mp[curr]; ok {
      ans = append(ans, curr)
    }
    for _, dep := range d[curr] {
      od[dep]--
      if od[dep] == 0 {
        q = append(q, dep)
      }
    }
  }

  return an
}