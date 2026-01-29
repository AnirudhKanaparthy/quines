# Quines
Implementation of quine in various languages. A quine is a not empty self-replicating piece of code that takes no inputs and only outputs itself. There are three key points here:
1. Self replication
2. Not empty
3. No inputs
4. Only outputs itself

The implications of these rules are as such:
1. You cannot inspect your own source code. If the code does so, it has an input file, i.e. "itself". Another way of phrasing it is that once the program has been loaded into the computer memory it depends on an external file and that file is itself. This is a bit easier to grasp in compiled languages where the executable is distinct from the source code. But it can get a bit tricky to convince yourself that you are cheating when you read yourself. This rules out most self-replicating viruses which use self-inspection as a method to replicate itself.
2. No empty source code. Is nothing a valid piece of code? It could be, if you define code as a language by which to communicate with the computer, non-existence of anything is in itself a piece of information being conveyed. As such, it is a valid piece of code. But, we are only dealing with non-empty code here.
