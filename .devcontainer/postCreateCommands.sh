#!/bin/zsh zsh

repo=$(pwd)

sudo rm /bin/sh && sudo ln -s /bin/zsh /bin/sh
sudo rm -vf /etc/apt/sources.list.d/yarn.list
sudo add-apt-repository -y ppa:git-core/ppa

echo '.DS_Store\n.DS_Store?\n*/.DS_Store' >~/.gitignore_global
git config --global core.excludesfile ${HOME}/.gitignore_global
git config --global --add safe.directory '*'

sudo apt remove -y cmake && sudo apt update && sudo apt upgrade -y && sudo apt install -y ninja-build ccache &&
    cd ~ && wget https://github.com/Kitware/CMake/releases/download/v3.25.0/cmake-3.25.0-linux-x86_64.sh && sudo chmod +x cmake-3.25.0-linux-x86_64.sh &&
    sudo ./cmake-3.25.0-linux-x86_64.sh --skip-license --exclude-subdir --prefix=/usr/local && rm -f cmake-3.25.0-linux-x86_64.sh

cd ~/.oh-my-zsh/custom/plugins && git clone https://github.com/zsh-users/zsh-autosuggestions.git && git clone https://github.com/zsh-users/zsh-syntax-highlighting.git &&
    sed -i 's/plugins=(git)/plugins=(git zsh-autosuggestions zsh-syntax-highlighting)/' ~/.zshrc

cd ${repo} && git -c submodule."qmk_porting/keyboards_private".update=none submodule update --recursive --init

sudo ln -s ${repo}/utils/nrf-command-line-tools-10.19.0_linux-amd64/bin/mergehex /bin/mergehex
pip3 install -r ${repo}/mcuboot/scripts/requirements.txt

ccache -M 10G

echo "Configuration done!"
