Step 1: decide on a functional storage system for database that meets these criteria
    a: can provide answers for as many distros as people provide the answers to the questions for
    b: will allow multiple question prompts to lead to the same answer statement, to avoid redundancy
    c: can be run entirely offline after install, meaning that a user does not need internet to find the answer to their question
    d: can function within cli, without needing the functions of gtk, qt, cosmic, etc, so that it can be ported natively to a DE
    e: does not require llms/npus, so it can be run on legacy hardware, this shouldn't be taxing on a pentium, if it is, we suck
Step 2: create the search function that will allow the program to parse all databased questions without struggling, like fzf
Step 3: actually build a large list of questions and answers for the distros new users pick (ubuntu/debian, fedora, arch)
Step 4: build the libadwaita interface (can be prototyped earlier)
Step 5: publish to flathub
step 6: ???
step 7: profit