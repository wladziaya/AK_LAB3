# Laboratory work №3

### Samples
    $ ./output --help -h -v
    -h or --help => show very important commands list 
    -e or --echo => to echo useless text
    -v or --version => show the version of your life
    -s or --save => save smthn important for you but unimportant for me))
    Long help option
    It does`n matter who you are, your version need to be apdated
---
    $ ./output -hve"hello, dear"
    -h or --help => show very important commands list 
    -e or --echo => to echo useless text
    -v or --version => show the version of your life
    -s or --save => save smthn important for you but unimportant for me))
    Short help option
    It does`n matter who you are, your version need to be apdated
    You echoed this: hello, dear
--- 
    $ ./output -s"result.txt" -e"smthn for you"
    Saving data to = result.txt
    You echoed this: smthn for you
---
    $ ./output -e -s
    There is nothing to echo :(
    ./output: option requires an argument -- 's'
    Error, think first man and go to help!
---
    $ ./output --make-me-dinner -m
    ./output: unrecognized option '--make-me-dinner'
    Error, think first man and go to help!
    ./output: invalid option -- 'm'
    Error, think first man and go to help!


