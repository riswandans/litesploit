### Litesploit
```
  _        _   _                          _           _   _   
 | |      (_) | |                        | |         (_) | |  
 | |       _  | |_    ___   ___   _ __   | |   ___    _  | |_ 
 | |      | | | __|  / _ \ / __| | '_ \  | |  / _ \  | | | __|
 | |____  | | | |_  |  __/ \__ \ | |_) | | | | (_) | | | | |_ 
 |______| |_|  \__|  \___| |___/ | .__/  |_|  \___/  |_|  \__|
                                 | |                          
                                 |_|    

```

Litesploit is a library and intepreter for penetration testing tools

### Requirements
```
* PHP 5 or higher
* GCC
* Zephir lang
* PHP-Dev
* libpcre3-dev
```

```
sudo apt-get install -y gcc make re2c php5-dev php5-curl php5-mysql php5-json libpcre3-dev
```

### Installation
this installation only work for Ubuntu and debian
```bash
git clone https://github.com/devilscream/litesploit.git
cd litesploit
./install
```

### Usage
```
root@user:~# litesploit
Litesploit > [exploit file]
```

Example :
```
root@user:~# litesploit
Litesploit > modem/router/zte/f660
```

### License

GNU GENERAL PUBLIC LICENSE V3