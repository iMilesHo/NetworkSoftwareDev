# Environment Setup

1. vmware + ubuntu
2. samba + ssh
3. gcc
4. vscode + remote ssh

### Setting Up a Linux C/C++ Development Environment on VMware

**Introduction**
Setting up a proper development environment is crucial for learning and practicing programming effectively. This guide will show you how to set up a Linux C/C++ development environment using VMware, Ubuntu, Samba, SSH, GCC, and Visual Studio Code.

**1. VMware + Ubuntu**

- **Purpose**: Use VMware to virtualize Ubuntu, creating an isolated and replicable development environment.
- **Steps**:
  1. Install VMware on your host machine (Windows or macOS).
  2. Create a new virtual machine and install Ubuntu.
  3. Set the network adapter to Bridged Mode to integrate with your local network.

**2. Samba + SSH**

- **Purpose**: Use Samba for file sharing between Ubuntu and other systems, and SSH for secure remote access.
- **SSH Setup**:
  1. Install the SSH server on Ubuntu using `sudo apt install openssh-server`.
  2. Verify SSH is active: `sudo systemctl status ssh`.
  3. Configure the firewall to allow SSH: `sudo ufw allow ssh`.
- **Samba Setup**:
  1. Install Samba: `sudo apt install samba`.
  2. Configure your Samba settings in `/etc/samba/smb.conf`.
  3. Restart Samba and set up user access.

**3. GCC - GNU Compiler Collection**

- **Purpose**: Compile and execute C/C++ programs.
- **Installation**:
  1. Install GCC: `sudo apt install build-essential`.
  2. Verify installation: `gcc --version`.

**4. Clion (Jetbrain Gateway, click the ssh in the clion welcome page) + Remote SSH**

**Conclusion**
With VMware virtualization, Ubuntu Linux, Samba file sharing, secure SSH access, the GCC compiler, and VSCode with Remote SSH, you've built a robust, flexible, and efficient C/C++ development environment. This setup not only supports a wide range of development activities but also ensures that your projects are portable and your environment is easily replicable.
