### What is Litesploit?
Litesploit is a library and intepreter for penetration testing tools. This includes exploits, tools and litepreter.

Litesploit support for Linux like ubuntu or debian, and more distro penetration testing like BackBox and Kali Linux.

|   Platform    |    Support  |
|---------------|-------------|
| Linux Ubuntu  |    Yes      |
| Linux Debian  |    Yes      |
| Microsoft Windows       | No |

### Requirements
* PHP 5 or higher
* GCC
* Zephir lang
* PHP-Dev
* libpcre3-dev

```
sudo apt-get install -y gcc make re2c php5-cli php5-dev php5-curl php5-json libpcre3-dev
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