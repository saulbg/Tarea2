# Tarea

# Chapter 2

## Create a repository of git ## 

#### git 
Used at the beggining in each command 
#### git init 
Is to initialize the repo 
#### git add 
Is to add a file to the repo 
#### git add * 
Is to add all the files on the location 
#### git status 
Say the status of your files 
#### git commit -m "first commmit" 
Is use it to save the information and the user give a name
#### git clone [url] [name]
Is use it to obtain a copy of a repository and you can contribute 
#### git clone [url] [name] 
// Obtain the information and version of a repository and change the name //
#### git config --global user.name 
// Is to introduce your user //
#### git config --global user.email 
//Is to introduce your email //
#### git checkout 
//serves to undo a modified file or to recover files //
#### git commit --amend 
//serves to redo the confirmation //
#### git reset HEAD <file>
//serves to undo the preparation //
#### git revert 
// it is for return to an operation //
#### git commit
// to write a mensage or to confirm cato write a message or to confirm changes //
#### git remote
//show each of the remotes in your repository //
#### git remote -v 
// To show the URLs that git has associated with the name //
#### git remote add 
//to add a new remote //
#### git pull 
// serves to automatically bring and combine the remote branch with your current branch //
#### git push origin master 
//it is used to share a remote file and send it to the origin of a server //
#### git remote show 
//serves to see more information from a particular remote //
#### git remote rename
// serves to rename a remote //
#### git remote rm 
// to delate a remote //
tracked files//Is to see tracked files (is not a command) //
Untracked files// Is to see untracked files (Is not a command) //
#### cat.ignore 
//list files you don't want to appear //
#### git diff 
//it's to know that you've modified it into a file //
#### git rm 
// used to remove git files (remove them from the preparation area) //
#### git rm --cached 
//it serves to remove a file from your preparation area but without deleting it from your working directory //
#### git mv 
// serves to rename a file //
#### git clone 
// serves to clone a project // 
#### git log 
//serves to view the history of confirmation //
#### git log -p 
// Shows the differences entered in each confirmation //
#### git log --stat 
// serves to view statistics about modified files in each confirmation //
#### git log --shortstat 
//serves to view statistics on modified files in each summarized confirmation //
#### git log --name-only 
// serves to display the list of affected files //
#### git log --name-status 
//serves to display the list of affected, added, modified or deleted files //
#### git log --abbrev-commit 
//shows only the first few characters of the SHA-1 sum //
#### git log --relative-date 
//shows documents from a certain time //
#### git log --graph 
//serves to show an ASCII graph with the history of the ramifications and unions //
#### git log --pretty 
//shows confirmations using an alternative format //
#### git log --since
// show confirmations since a point of time //
#### git log --until 
// show the confirmation until a point of time //

## Fundamentals of git tagged ##
#### git tag 
//is to list available tagged in git //
#### git tag -l 
//it's used to look for tagged with a similar pattern //
#### git tag -a 
//serves to create an annotated tagged //
#### git tag -a v1.4 -m"
// -m serves to write a message //
#### git show 
//serves to display the tagged information // 
#### git tag [Tagged] 
//  it is to create a lightweight tag //
#### git push origin [Tagged] 
//it serves to share a tag //
#### git push origins --tags 
//it serves to share some tags //

## Git alias ##
#### git config --global alias.co cheackout
//serves to convert cheackout in an alias .co //
#### git config --global alias.br branch 
// serves to convert branch in an alias .br //
#### git config --global alias.ci commit 
// serve to convert commit in an alias .ci //
#### git config --global alias.st status 
// serve to convert status in an alias .st //


#Chapter 3

#### git branch [name] 
// This creates a new pointer to the same confirmation //
#### git log -oneline --decorate
// Show you where the branch is aiming //
#### git checkout 
// We use it to jump from one branch to another //
#### git log -oneline --decorate --graph --all 
// Shows the history of your confirmations indicating where  are your pointers to the branches //
#### git checkout -b [] 
// Creates a new branch and jumps into in just one step //
#### git checkout master 
// Jump to master branch //
#### git merge 
// It is used to merge one or more branches within which you are //
#### git mergetool 
// Starts the corresponding visualization tool and allows you to resolve conflicts in it //
#### git branch 
// Without parameters, this give you a list of branches on your project //
#### git branch -v 
// Shows tha last confirmation of changes in each branch //
#### git --merged 
// Shows the merged branches to which it is activated //
#### git --no-merged 
// Shows all branches containing un merged jobs //
#### git remote 
// List the remote connections you have with other repositories //
#### git remote add 
// Create a new connection to a remote repository //
#### git fetch [] 
// Retrieve all content from remote //
#### git push [remote] [branch] 
//throws the branch into the remote //
#### git -vv 
// Shows you the monitoring branches you have assigned //
#### git push origin --delete [name] 
// Delete remotes branches //
#### git rebase 
// Collect one by one the changes confirmed in one branch, and reapply them on another//
#### git branch -d client 
// Removes the client branch //
#### git branch -d server 
// Removes the server branch //
#### git push --force 
// Overwrites the registry on the server in the case of your partner back of and reorganize his work //
#### git config --global pull.rebase true 
// Is to have the option --rebase activated by default //
#### git rebase --onto master server client 
// Grab the changes that are not on the server and reapply them on the main branch //


