Problem 29 Function Overloading and Bool
===

Note
---
- Weird behavior of bool
    - https://en.wikipedia.org/wiki/Boolean_data_type#C.2C_C.2B.2B.2C_Objective-C.2C_AWK
    - bool behaves almost like an int

- Output Explained
    - the reason why the output is short version is because string constant does not have type `string`
      thus it's taken as bool,  ended up in the short version funcion
    - here's an example to clarify things
    ```cpp
    using std::string;
    void add_argument(string name, string long_name, string desc, bool required = false) {
      std::cout << "long version " << required << std::endl;
    }
    void add_argument(string name, string desc, bool required = false) {
      std::cout << "short version " << required << std::endl;
    }
    int main() {
        string t = "definitely a string";
        add_argument("-h", "--help", t);   // t has string type, long version will be used, no confusion
        add_argument("-h", "--help", "Show Help Menu"); // short version
    }
    
    ```

Output
---
```sh
short version 1
```