# MBSE Projekt: Gimbal - self stabilizing platform

Link zur Homepage: [_Gimbal-Homepage_](https://howtomechatronics.com/projects/diy-arduino-gimbal-self-stabilizing-platform/?utm_content=cmp-true)

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

[_Link zum 3D Druck README_](docs/class/03_prj.md)
-----------------
## Elektronik
-----------------

* Xie Yang
* Bola Poules
* Xingpeng Chen
* Qian Liu
</br></br>

[_Link zum Elektronik README_](docs/class/04_prj.md)
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

