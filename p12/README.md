Problem strcpy()
===

Note
---
- `strcpy(destination, source)`
- [Reference](https://stackoverflow.com/questions/5339762/why-my-source-is-changing-when-using-strcpy-in-c/5339798) 
- Since you didn't allocated sufficent memory space to strcpy(), so undefined behavior occurs. 

Output
---
```sh
i is 5
source is [ is a string.]
destination is [This is a string.]
```

