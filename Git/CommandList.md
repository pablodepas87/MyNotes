# Git Command List 

#### INIT A NEW LOCAL REPOSITORY
The first time if we want to use git is...crete the repository...so to made it we have to use the **init** after we open the terminal into the directory where will be the repository.

    git init

    
#### CLONE REMOTE REPOSITORY
To clone a remote repository into a current dir we have three methods http, ssh and cli. The command ever is made with **git clone** followed by repo link.

The example assume that the repository is on the github server.

Clone by https is possible executing the follow command line:

    git clone https://github.com/yourreponame/yourrepo_project_name.git

Clone by ssh is possible executing the follow command line(remember to configure your OS to use ssh key and openssl):
    
    git@github.com:yourreponame/yourrepo_project_name.git
   
Clone by ssh is possible executing the follow command line:

    gh repo clone corobsoftware/repo-corob


#### CREATE NEW BRANCH

To create a new branch in Git, you can use the following command:

    git branch <branch-name>

replace <branch-name> with desidered name for your new branch. For example if we want to create a branch
called "feature-branch" you would run:

     git branch feature-branch

This command creates a new branch with the specified name but does not switch to it. The new branch will have the same history
as the current branch.

If you want to switch to the newly created branch , use the command **git checkout** followed by the branch name:

    git checkout feature-branch

Alternatively, we can combine the creation and checkout of the new branch in a sigle command using **-b** flag

  git checkout -b feature-branch

This command creates the branch and immediately switches to it 

#### SHOW ALL BRANCH LIST (REMOTE AND LOCAL)

To show the list of all branch of the repository , remote and local , we have to execute the follow command line:

    git branch -a  or git branch --all  

#### UPDATE REMOTE BRANCH LIST

To Update the remote branch list of a local repository , we have to excute the follow command line:

    git remote update origin --prune 

an alternative is:

    git fetch --prune or git fetch -p    

#### RENAME LOCAL AND REMOTE BRANCH

To rename a local and remote branch we have to do some steps. These are :

1. **if it is your current branch, just do**

        git branch -m new_name

    **If it is another branch you want to rename**

        git branch -m old_name new_name

2. **Track a new remote branch**

    If your branch was pushed, then after renaming you need to delete it from the remote Git repository and ask your new local to track a new remote branch:

        git push origin :old_name
        git push --set-upstream origin new_name

#### DELETE LOCAL AND REMOTE BRANCH

When we delete a branch generally we should do it localy and remotly this is possible with follow command line:

**Deleting local branches in Git**

    git branch -d branch_name

Using the "-d" flag, you tell "git branch" which item you want to delete.

Note that you might also need the "-f" flag if you're trying to delete a branch that contains unmerged changes. Use this option with care because it makes losing data very easy.


**Deleting remote branches in Git**  

To delete a remote branch, we do not use the "git branch" command - but instead "git push" with the "--delete" flag:

    git push origin --delete feature/login 
    or 
    git push origin -d feature/login

#### UPDATE LOCAL BRANCH WITH REMOTE BRANCH CHANGES

When we have a branch with its remote branch often we need to update and sync the local branch with remote branch, if a member team has pushed some features , bugs fixes ecc.
To made it we can use the command **pull**, the command will made a download of each branch change and our local branch will be synchronized with remote branch.

    git pull

#### WHO HAS MADE IT?...SHOW WHO HAS MADE A CHANGE INTO FILE CODE ROW BY ROW

if we want to know who has made a change into a file row by row. We can use the command **blame** follow by file name

    git blame /path/of/myfile_name

the command after his execution will print all row of the file and for each of this the :

- commit ID that has made the change
- the author of the commit
- the date of the commit
- the number of the row
- the content of the row

#### Git Status Command , how to show current state of repository

The `git status` command is a fundamental feature of Git that provides an overview of the current state of your repository. When you run
    
    `git status`

Git will display information about:

- **Modified Files:** Files that have been modified but not yet staged for commit.
- **Staged Files:** Files that have been modified and staged for commit.
- **Untracked Files:** Files that are present in your working directory but have not yet been added to the Git repository.
- **Branch Information:** Information about the current branch and its relationship with the remote branch (if any).
- **Changes Ready to be Committed:** Summary of changes that are staged and ready to be committed.
- **Changes Not Staged for Commit:** Summary of changes that are modified but not staged for commit.
- **Untracked Files:** List of files in your working directory that are not being tracked by Git.

The `git status` command is useful for understanding the state of your repository, determining which files have been modified or staged, and deciding which changes to commit. It helps you keep track of your work and manage the version control process effectively.

#### Git Add Command

The `git add` command is used to stage changes for committing in Git. When you make modifications to files in your working directory, Git requires you to explicitly tell it which changes you want to include in the next commit. This is where the `git add` command comes into play.

###### Basic Usage:

To stage changes for commit using `git add`, you simply specify the files you want to stage. You can add individual files, multiple files, or even entire directories. Here are some common use cases:

- To stage a specific file:
  
    git add filename
    
- To stage all modified files:*/

    git add . 

- To stage specific files or directories:
  
    git add file1 file2 directory/

###### Staging Changes:

When you run `git add`, Git will add the specified files to the staging area, also known as the index. This means that the changes in those files are now ready to be included in the next commit. However, they are not committed yet; they are simply marked as "to be committed".

###### Committing Changes:

After using `git add` to stage your changes, you need to commit them to make them part of the repository's history. You can do this by running the `git commit` command, which will create a new commit containing the staged changes.

###### Summary:

In summary, the `git add` command is used to stage changes for committing in Git. It allows you to select which modifications you want to include in the next commit, providing a granular level of control over your version control workflow.
