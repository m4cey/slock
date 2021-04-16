slock - simple screen locker
============================
simple screen locker utility for X.


Requirements
------------
In order to build slock you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock
(if necessary as root):

    make clean install


Running slock
-------------
Simply invoke the 'slock' command. To get out of it, enter your password.

Changes:
--------
- removed color indications
- read xresources
- screen dpms
- screenshot as background +(blur, pixelate)
- dmenu theme (customize in function `writemessage`)

![2021-04-16-161706_1600x900_scrot](https://user-images.githubusercontent.com/79314304/115055368-df334f00-9ed0-11eb-9ba8-196a084ebfee.png)
![2021-04-16-161658_1600x900_scrot](https://user-images.githubusercontent.com/79314304/115055394-e3f80300-9ed0-11eb-8e89-1b77b7ca2b7a.png)
