Problem strcpy()
===

Note
---
- `strcpy(destination, source)`
- [Reference](https://stackoverflow.com/questions/5339762/why-my-source-is-changing-when-using-strcpy-in-c/5339798) 
- Since you didn't allocate sufficent memory space for strcpy(), it takes and overwrites the memory space of other vairable on stack.
- To be precise, you can see the graph below
```
On stack memory:

low address                                 high address
    |                                            |
    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+
    | | | | |T|h|i|s| |i|s| |a| |s|t|r|i|n|g|.|\0|
    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+
             ^
           source

after strcpy()

    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+--+
    |T|h|i|s| |i|s| |a| |s|t|r|i|n|g|.|\0|n|g|.|\0|
    +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+--+
     ^       ^
   target  source
```

Output
---
```sh
i is 5
source is [ is a string.] 
destination is [This is a string.]
```

