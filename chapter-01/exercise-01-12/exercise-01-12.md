# Solution Exercise 1.12

Assuming the situation that a group of attackers is trying to break the authentication of an email service to access mails that they do not have the right to read and discuss the issues.The attackers are in this case employees off the server maintenance company.

The attack can be prevented by ensuring that the authentication process follow some good practices:

- The passwords should be not be stored in plain text instead they should be hashed. This is a is a cryptographic process that can be used to validate the authenticity and integrity of various types of input. It is widely used in authentication systems to avoid storing plaintext passwords in databases. By hashing the passwords the attackers can in this case not get hold of the original password even if they hav access to the database where the passwords are stored.

- The access on to the email-accounts can rely on multi-factor authentication. This prevents breaking the authentication by in which a user is granted access to a website or application only after successfully presenting two or more pieces of evidence (or factors) to an authentication mechanism. For example so can it be required to present both a password that the user knows and also something that the user have such as electronic identity card, a third factor can be some personal trait of to the actual user such an finger print.