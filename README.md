# Pricilla
a libadwaita compatable "clippy-like" manual tool for asking simple linux questions without braving the interwebs!

There is now code, any changes made in the future before or after a proper release are still under the GPL 3.0 license.


## TODO LIST

- [X] make list with numbers correlating to answers (e.g."1000 0001 use sudo apt update and sudo apt upgrade to upgrade your deb packages")
- [X] leave some numbers specifically for system specific answers (1000 for debian based, as an example)

- [ ] allow user to call number in list, and recieve the data (e.g. input number: 1000 0001 /N use sudo apt update and sudo apt upgrade to upgrade your deb packages)

- [ ] impliment voice-ng calls to 'say' answer to question

- [ ] make list with questions correlating to answer numbers. MUST ALLOW MULTIPLE QUESTIONS TO GET THE SAME ANSWER (e.g. 0001 how do I update, 0001 what command is update)

- [ ] make seperate list (which could be configured by users) for what distro is in use (e.g. 1000 debian, 1001 ubuntu, 2001, fedora, etc)

- [ ] replace number input with question sheet and distro sheet

- [ ] allow searching number sheet via fuzzy finder esque tool, grepping only distro specific answers as needed (maybe actually fuzzy finder?/fzf?)
- [ ] impliment libadwaita frontend, preferable to keep it away from terminal tool for potential qt/cosmic portage

- [ ] add cute/handsome character to make program approachable

- [ ] celebrate
