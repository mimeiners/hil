# MBSE Projekt: Gimbal - self stabilizing platform

[_Gimbal-Projektseite_](https://howtomechatronics.com/projects/diy-arduino-gimbal-self-stabilizing-platform/?utm_content=cmp-true)

[_MPU-6050 Tutorial_](https://howtomechatronics.com/tutorials/arduino/arduino-and-mpu6050-accelerometer-and-gyroscope-tutorial/)

## MBSE
-----------------
Zur Modellbasierten Systementwicklung wird die Software "No Magic" genutzt, welche auf der Systems Modelling Language - kurz SysML - basiert. 
</br></br>
-----------------
-----------------
## 3D Druck
-----------------

* Atakan Baydogan
* Yolande Maeva Pokam Fotue
* Yasincan Kahraman
</br></br>

[_Link zum 3D Druck README_](docs/chapter/03_prj.md)
-----------------
## Elektronik
-----------------

* Xie Yang
* Bola Poules
* Xingpeng Chen
* Qian Liu
</br></br>

* [_ESP8266 NodeMCU_](https://www.makershop.de/plattformen/esp8266/nodemcu-esp8266-dev-kit/)
* [_PIN-Belegung ESP8266_](https://unsinnsbasis.de/esp8266-pin-belegung/)
* [_PinOut ESP8266 NodeMCU_](https://edistechlab.com/esp8266-nodemcu-pin-out/?v=3a52f3c22ed6)
* [_Espressif 8266 Document Map_](https://bbs.espressif.com/viewtopic.php?f=67&t=225)

[_Link zum Elektronik README_](docs/chapter/04_prj.md)
------------------
## SSH/GitLab/Tortoise
------------------
Zur sicheren Kommunikation mit dem GitLab-Repo benötigt man ein SSH-Schlüsselpaar.
Dieses erzeugt man mittels
[_Git-SSH-KeyGen_](https://medium.com/devops-with-valentine/2021-how-to-your-ssh-key-for-gitlab-on-windows-10-587579192be0).
Zur Verwendung in 
[_Tortoise-Git-SSH_](https://stackoverflow.com/questions/13516119/tortoisegit-with-openssh-key-not-authenticating-using-ssh-agent)
muss im Pfad ".ssh/" eine "config" mit nachfolgendem Inhalt angelegt werden:

```shell
Host gitlab.fk4.hs-bremen.de
    User gitlab
    Port 222
    PreferredAuthentications publickey
    IdentityFile ~/.ssh/id_rsa
```
------------------

