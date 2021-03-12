# Nationalcybersikkerhed virtual training


## Setup your system

### Install Kali Linux
You need access to a Kali setup, so if you have it already setup, you can skip this step. Otherwise follow these instructions:
1. Download VirtualBox [here](https://www.virtualbox.org/wiki/Download_Old_Builds_6_0), follow the relevant link for your operating system. Also download the [Extension pack](https://download.virtualbox.org/virtualbox/6.0.24/Oracle_VM_VirtualBox_Extension_Pack-6.0.24.vbox-extpack).
2. Install VirtualBox: click on the install package and follow the instructions.
3. Install the extension pack: open the file Oracle_VM_VirtualBox_Extension_Pack-6.0.24.vbox-extpack from your download folder.
4. Download Kali Linux for VirtualBox, which you can find [here](https://www.offensive-security.com/kali-linux-vm-vmware-virtualbox-image-download/). Open the tab "Kali Linux VirtualBox Images" and click on the link "Kali Linux VirtualBox 64-Bit (OVA)"
5. Install Kali Linux by opening the file that you downloaded. This will open VirtualBox with an "Import Virtual Appliance" window. Click on "Import".
6. You're done! now you can start Kali by clicking "Start" on VirtualBox.

### Install the necessary utilities

1. Login into your Kali Linux with username `kali` and password `kali`.
2. Open a terminal window. You can do this clicking on the "Terminal Emulator" icon on the top left (the fourth from the left) or by typing `ALT+F2` and then typing `qterminal` in the dialog window.
3. Install the software that we need for the session by entering the following commands (you can copy paste them from the browser into the terminal, then press Enter):
    ```
    sudo apt install -y gdb cmatrix
    wget -q -O- https://github.com/hugsy/gef/raw/master/scripts/gef.sh | sh
    sudo wget https://github.com/rizinorg/cutter/releases/download/v1.12.0/Cutter-v1.12.0-x64.Linux.appimage -O /usr/local/bin/cutter
    sudo chmod +x /usr/local/bin/cutter
    git clone https://github.com/hoheinzollern/workshop-cybersikkehed.git
    ```
4. To check that you have done everything correctly, type `cmatrix` and press Enter. Good job! (Press `CTRL+C` to exit)

## Get support from us

Join our Discord Server for company and help! https://discord.gg/gQ6A9x7C

## Workshop Day 1

Inside the [day1](day1/) folder you find the material for the first day of the workshop.
You will find the [notebook](day1/presentation.ipynb) with the presentation for the day, as well as the exercises for each section.
The recording for the open parts of this session is available [here](https://use.vg/nnLu42hXPZFB).

## Workshop Day 2

TBD
