# Nationalcybersikkerhed virtual training


## Setup your system

### Install Kali Linux
You need access to a Kali setup, so if you have it already setup, you can skip this step. Otherwise follow these instructions:
1. Download VirtualBox [here](https://www.virtualbox.org/wiki/Downloads), follow the relevant link for your operating system. Also download the [Extension pack](https://download.virtualbox.org/virtualbox/6.1.32/Oracle_VM_VirtualBox_Extension_Pack-6.1.32.vbox-extpack).
2. Install VirtualBox: click on the install package and follow the instructions.
3. Install the extension pack: open the file Oracle_VM_VirtualBox_Extension_Pack-6.0.24.vbox-extpack from your download folder.
4. Download Kali Linux for VirtualBox, which you can find [here](https://www.kali.org/get-kali/). Open the tab "Kali Linux VirtualBox Images" and click on the link "Kali Linux VirtualBox 64-Bit (OVA)"
5. Install Kali Linux by opening the file that you downloaded. This will open VirtualBox with an "Import Virtual Appliance" window. Click on "Import".
6. You're done! now you can start Kali by clicking "Start" on VirtualBox.

### Install the necessary utilities

1. Login into your Kali Linux with username `kali` and password `kali`.
2. Open a terminal window. You can do this clicking on the "Terminal Emulator" icon on the top left (the fourth from the left) or by typing `ALT+F2` and then typing `qterminal` in the dialog window.
3. Install the software that we need for the session by entering the following commands (you can copy paste them from the browser into the terminal, then press Enter):
    ```
    sudo apt install -y gdb cmatrix ghidra
    wget -q -O- https://github.com/hugsy/gef/raw/master/scripts/gef.sh | sh
    sudo wget https://github.com/rizinorg/cutter/releases/download/v2.0.5/Cutter-v2.0.5-x64.Linux.appimage -O /usr/local/bin/cutter
    sudo chmod +x /usr/local/bin/cutter
    git clone https://github.com/hoheinzollern/workshop-cybersikkehed.git
    ```
4. To check that you have done everything correctly, type `cmatrix` and press Enter. Good job! (Press `CTRL+C` to exit)

## Workshop Day 1

This year we will cover the great material by [omu training](https://omu.rce.so/gcc-2022/) given at the [Global Cybersecurity Camp](https://gcc.ac/).
For the first day you don't really need the Kali VM, but it will be helpful for Saturday morning, so be prepared :)
On day 1 we will cover [Lesson 1: x86-64 Assembly](http://gcc.rce.so/lesson1/) and [Lesson 2: Linux Reverse-Engineering](http://gcc.rce.so/lesson2/)

## Workshop Day 2

On the second day we will cover [Lesson 3: Buffer overflows](http://gcc.rce.so/lesson3/) and we will go [from zero to hero](https://github.com/seal9055/PWN_Zero2Hero) with a cool set of challenges and the tools you have installed on your machine
