General instructions
- controllo della signature [shasum Born2beroot.vdi]

Project overview
- come funziona una macchina virtuale
- perche' ho scelto Debian
- principali differenze tra Rocky e Debian
- scopo della macchina virtuale
- differenza tra apt e aptitude
- cosa e' APPArmor
- controllo della comparsa dello script ogni 10 min

Simple setup
- controllo che la macchina non abbia un ambiente grafico
- richiesta password
- connessione all'user (no root)
- controllo password come richiesta dal subject
- controllo che l'UFW sia attivo [sudo service ufw status / sudo ufw status verbose]
- controllo che l'SSH sia attivo [sudo service ssh status]
- controllo che ci sia Debian come OS [uname -v]

User
- controllo che l'user sia gfalorsi [whoami] [sudo adduser gfalorsi]
- controllo che l'user appartenga ai gruppi "sudo" e "user42" [getent group sudo/user42]
- controllo che la policy della password sia stata impostata (vim /etc/pam.d/common-password)
- creare un nuovo user + password [sudo adduser prova]
- spiegare come impostare la policy della password (vim /etc/login.defs)
- creare un nuovo gruppo "evaluating" [sudo groupadd evaluating]
- aggiungere il nuovo user al gruppo [sudo adduser prova evaluating]
- controllo che il nuovo user sia nel gruppo [sudo getent group evaluating]
- spiegare i vantaggi e gli svantaggi della policy della password

Hostname and partitions
- controllo che l'hostname sia gfalorsi42 [hostname]
- modificare l'hostname con quello del correttore [sudo hostnamectl set-hostname prova42]
- riavviare la macchina [sudo reboot]
- controllare che l'hostname sia stato aggiornato
- controllare le partizioni della macchina [lsblk]
- spiegare come il LVM funziona e di cosa si tratta

Sudo
- controllo che il programma "sudo" sia installato nella macchina [sudo -V]
- aggiungere il nuovo user al gruppo "sudo" [sudo adduser prova sudo]
- spiegare il valore e la funzionalita' di sudo
- controllo che le regole per sudo siano state implementate [vim /etc/sudoers.d/sudo_config]
- controllo che esista la cartella "var/log/sudo" e che contenga almeno un file [cd /var/log/sudo]
- controllo del contenuto del file in questa cartella: deve mostrare la storia dei comandi usati con sudo [vim /var/log/sudo/sudo_config]
- provare un comando con sudo
- controllo se il contenuto del file e' stato aggiornato

UFW
- controllo che UFW sia installato nella macchina [sudo ufw enable]
- controllo che UFW funzioni [sudo ufw status]
- cosa e' UFW e quale e perche' si usa
- elencare le regole attive in UFW
- controllo che esista una regola per la porta 4242
- aggiungere una nuova regola per aprire la porta 8080 [sudo ufw allow 8080]
- controllo che questa regola sia stata aggiunta nella lista delle regole attive [sudo ufw status numbered]
- eliminare la nuova regola [sudo ufw delete 2]

SSH
- controllo che l'SSH sia installato [sudo service ssh status]
- controllo che l'SSH funzioni
- cosa e' l'SSH e perche' si usa
- controllo che l'SSH usi solo la porta 4242
- usare l'SSH per fare il login con il nuovo user [ssh gfalorsi@ipaddress -p 4242]
- controllo di non poter usare l'SSH con l'user root [ssh root@ipaddress -p 4242]

Script monitoring
- spiegare come funziona lo script mostrando il codice
- cosa e' cron
- spiegare come e' stato implementato lo script in modo tale che compaia ogni 10 min [vim /home/gfalorsi/monitoring.sh]
- implementare che lo script compaia ogni minuto [crontab -u root -e e mettere 1 al posto di 10]
- fermare lo script: non deve piu' comparire all'accensione della macchina ma non deve essere modificato [metti commento/sudo service cron stop e start per riavviare]
- riavviare la macchina
- controllo che lo script esista nello stesso posto e che non sia stato modificato

