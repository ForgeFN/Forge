# Forge
Fortnite gameserver for 10.40.

Main features:

- proper looting
- chest stars
- vending machine colors
- teams
- reboot cards
- directional fix + weakspot fix
- vehicles
- semi working creative (framework.h)
- some little gameplay features
- pretty accurate harvesting rate
- run over ammo & mats
- pickup delay
- repairing
- team map markers
- killfeed works

## Credits

Zombie movement - Spooky<br>
Creative Islands - Ender<br>

# How to use the cheat commands

If you are hosting the server on a vps, then go to admin.h, it should be around line #17 and you should see "IPStr == "127.0.0.1".
Right after this you want to add || "YOURIPHERE". So it would look something like 	
```
if (IPStr == "127.0.0.1" || IPStr == "29.238.102.57" || .....)
```

Download this dll https://drive.google.com/file/d/17YLfiQXVqMCuT_b1heiBfL_xmAb2nRtg/view?usp=sharing
Now, inject this dll into the client. If you don't have an injector use UUU (https://mega.nz/file/MUhUlaqa#PI0ubSy_sQc4GouDPnZbulNSgQRUNIJeXNwLb2LnKhk).
Each time you open the ip you have to click "F2", wait a few seconds and then you have cheatmanager. You are now able to open console and type "cheat help".
