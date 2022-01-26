# Helo! Welcome to the Help/Tutorial Page for ByteLock

So your probably here because you want to learn how to play the game, well your in the right place!

Heres a few concepts we should explain first:

![image](https://user-images.githubusercontent.com/57566773/151211712-cea742d1-12e3-4ce1-ab3d-9a29a4216397.png)

## 1: ByteCoins

This is a form of currency used in this game people store their "ByteCoins" On servers, ByteCoins can also be expressed as "Ł"

## 2: Servers

Servers can be used to run code.
For every core on a server you can run 100 processes but RAM depends on the contents of the code the script editor will tell you how much RAM a script will use while you are writing it

## 3: Hacking Skill

You have a hacking skill, this increases by `+0.01` everytime you hack a server and you will also gain the money that was stored on that server.

## 4: Terminal

This is the tab that allows you to interact with your servers, you can switch servers by going to the server tab and pressing the IP Adress of the server or by running the `connect < ip >` command

For more information on this refer to: [this page](https://docs.phazed.xyz/bytelock/os)

## 5: Script Editor

If you like coding, this is where you will be spending most of your time! Here you can edit scripts and save them to your server.

You can make a new script or open an existing script by using the `nano < filename >` command!



# Hacking our first server

![image](https://user-images.githubusercontent.com/57566773/151215328-6172b26c-56d4-4f8b-8979-846c44166c80.png)

Moving over to the terminal page you can test a command, try typing `help` next to the path at the bottom

This will list all the commands you can use, lets try running `scan` to see what servers you can find.

![image](https://user-images.githubusercontent.com/57566773/151215514-3e3950d0-a0a8-415b-af43-b18df7c6be97.png)

Here we go.

You can see there are two parts on each line.

IP and Server Strength

40.882.898.994 || Strength: 784

These are both very useful, but if you want more info you can run `port-scan < ip >`.

![image](https://user-images.githubusercontent.com/57566773/151215805-11660aa1-4ead-4729-a03d-6a60d4827dc7.png)

Here we can see a list of ports that are open on this server.

Sometimes if your user skill is to low you will get a message like this:
![image](https://user-images.githubusercontent.com/57566773/151215754-de59dd7e-3d81-4061-8c9d-d217b5ec0fd2.png)

But don't worry this just select a server with a lower strength and you will be able to see the ports

### Ok, but how do i hack the server?

Good question! First you want to find the ip of the server, in this case the ip is `98.469.259.634`

Now we want to run `attack 98.469.259.634`
![image](https://user-images.githubusercontent.com/57566773/151216294-f275abc7-2f84-40b7-8778-c62fda46695d.png)

When it has finished you should get a message like this telling you that the server has been hacked

Sometimes when your level is too low you will get a message like this:

![image](https://user-images.githubusercontent.com/57566773/151216392-22a67f8b-8947-44d9-a41e-a5872ff662fd.png)

But don't worry this just try again with a server with lower strength.

Now we can head over to the "Servers" tab and click the start button next to our server
![image](https://user-images.githubusercontent.com/57566773/151216618-26dad7ad-906e-4e23-acd0-ec35aee2326d.png)

There you go you hacked your first server!
