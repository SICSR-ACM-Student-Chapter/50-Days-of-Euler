# The 50 Days of Euler Challenge

50 Days of Euler is a series of random questions from [Project Euler](https://projecteuler.net/) which are to be solved programmatically. It is organized by the Student Chapters of ACM & ACM-W at Symbiosis Institute of Computer Studies and Research and will begin 30 March 2020 onwards.

This repository contains the questions which will be released on a daily basis for participants to attempt and post completion the best answers among all the solutions.

> If you are new to GitHub, do go through [Getting started with GitHub](https://help.github.com/en/github/getting-started-with-github). We recommend the quickstart, GitHub Desktop, Git cheatsheet for starters!

Join us on discord, [click here](https://discord.gg/PuQRAFr)!

## Table of Contents
- [How to Join](#how-to-join)
- [Rules](#rules)
- [Instructions to Submit an Answer](#instructions-to-submit-an-answer)
- [Judging Criteria](#judging-criteria)
- [How do I keep my fork updated?](#how-do-i-keep-my-fork-updated)
- [Still Have Questions? Ask Us](#still-have-questions-ask-us)

## How to Join

1. Create a new Issue with the `Registration` template.
    - If you need help regarding how to create an Issue, go through [Creating an issue - GitHub](https://help.github.com/en/github/managing-your-work-on-github/creating-an-issue)
2. Ensure all the details mentioned in the template are filled.
3. Make a note of the Issure ID via the 3 numbers after the `#`.

## Rules

1. The competition will begin on 30 March 2020 and end on 19 May 2020.
2. One can register any time he/she wants while the competition is ongoing.
3. All programs must be written in `C` or `Python`, though we recommend `C`.
4. The answers can only be submitted in the same sequence as the questions and need to be marked as `accepted` before moving on to next submission. Refer to `Rule 8` for acceptance criteria.
5. There is no-time limit per answer, one can take as long as the competition runs for completing an answer as required considering `Rule 4` is followed.
6. Every submission should contain a `README.md` that explains how the program should be executed, any inputs if required and how will the output be generated.
    - Details on how to submit an answer can be found [here](#instructions-to-submit-an-answer).
7. There will be strict plagarism checks for all submissions. If the plagarism is found to be above 60%, the contestant will be disqualified. 
    - If the user has posted his/her code somewhere else, please ensure that it is mentioned in the `README.md` file. Verification of the same will also be performed.
8. Only answers with less than ~15% plagarism will be accepted as valid submissions. Acceptance of an answer will be denoted by the Pull Request being marked approved.
9. Strictly ensure that no details that compromise your privacy are present in the submissions.
10. The best answer for each question will be merged into the repo at the end of the competition!

## Instructions to Submit an Answer

1. Create a fork of the respository on your account.
    - If you need help regarding how to create a fork, go through [Fork a repo - GitHub](https://help.github.com/en/github/getting-started-with-github/fork-a-repo)
2. Create a branch in the fork with the naming convention `first_name-last_name-question_number(#issue_id)`.
	- The `question_number` refers to the Question number on the respository, indicated by the folder name.
	- The `issue_id` is the id of the issue indicated by the `#` of your issue.
	- E.g.: `john-doe-1(#002)` is the branch name for a participant by the name of **John Doe** for question number **1** with his registration issue id being **#002**.
	- If you need help regarding how to create a branch, go through [Git Branch Cli Guide](https://www.atlassian.com/git/tutorials/using-branches) or [Branches in GitHub Desktop](https://help.github.com/en/desktop/contributing-to-projects/creating-a-branch-for-your-work) depending on what you are using.
3. In the branch create an `Answer` folder in the respective question's folder and add all the relevant code files to it.
4. Once you are confident with your submission, open a Pull Request on the repository with the correct branch.
	- Please fill in all the information as mentioned in the template.
	- Your Pull Request won't be verified with missing information.
	- Feel free to open a draft PR incase your submission is Work in Progress.
	- Ensure your submission follows all the [Rules](#rules).
	- If you need help regarding how to create a Pull Request, go through [Creating a Pull Request](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request) and [Creating a Pull Request from a fork](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request-from-a-fork)
5. A volunteer from the Verification team will approve the validity of your answer.

## Judging Criteria

Marking will be performed at the end of the 50 days by the judges based on the following criteria:
1. Documentation and Code Readability.
2. Consistency within the Code, e.g. Coding Standards.
3. Performance of the Program based on CPU Usage, Memory Usage and Time taken.

## How do I keep my fork updated?
In order to obtain the latest questions on your fork, a procedure known as a `Rebase` needs to be performed. Here are the basic steps to follow:
1. You need to add a **remote** to your fork's clone. We will call it upstream following the convention. The command is:
```shell
$ git remote add upstream https://github.com/SICSR-ACM-Student-Chapter/50-Days-of-Euler.git
```
2. Check if the command is succesful via:
```shell
$ git remote
```
3. Next, run `git fetch` to update your local Git Database with all the history from all your remotes.
```shell
$ git fetch upstream
```
4. Now, ensure you are on the `master` branch of your repository by using: 
```shell
$ git checkout master
```
5. Now perform a rebase by using the `--rebase` flag while pulling. Then push the changes to your GitHub.
```shell
$ git pull --rebase upstream master
$ git push
```

## Still have questions? Ask us
Please connect with us via the Discord server and ask your questions in the `#support` text channel.

If you are new to Discord, we recommend going through [Getting Started - Discord](https://support.discordapp.com/hc/en-us/articles/360033931551-Getting-Started).
