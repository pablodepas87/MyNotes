# Git Command List 

#### CLONE REMOTE REPOSITORY
To clone a remote repository into a current dir we have three methods http, ssh and cli. The command ever is made with **git clone** followed by repo link.

The example assume that the repository is on the github server.

Clone by https is possible executing the follow command line:

    git clone https://github.com/yourreponame/yourrepo_project_name.git

Clone by ssh is possible executing the follow command line(remember to configure your OS to use ssh key and openssl):
    
    git@github.com:yourreponame/yourrepo_project_name.git
   
Clone by ssh is possible executing the follow command line:

    gh repo clone corobsoftware/repo-corob


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

### UPDATE LOCAL BRANCH WITH REMOTE BRANCH CHANGES

When we have a branch with its remote branch often we need to update and sync the local branch with remote branch, if a member team has pushed some features , bugs fixes ecc.
To made it we can use the command **pull**, the command will made a download of each branch change and our local branch will be synchronized with remote branch.

    git pull



