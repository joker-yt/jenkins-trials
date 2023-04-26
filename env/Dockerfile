FROM jenkins/jenkins:lts

USER root
# ver2
RUN apt update
RUN apt install -y sudo make g++ googletest libgtest-dev libgmock-dev

# ver3
ENV USERNAME "test"

# ============================================
RUN useradd -m $USERNAME 
RUN echo $USERNAME:"test" | chpasswd
RUN usermod -aG sudo $USERNAME
# ============================================

# in case of no password
RUN echo "test ALL=NOPASSWORD:ALL" >> /etc/sudoers

# ver2
# Firstly, Convinced apt would be NOT available.
WORKDIR /tmp
RUN curl -L https://github.com/Kitware/CMake/releases/download/v3.26.3/cmake-3.26.3-linux-x86_64.tar.gz | tar -zxf - 
RUN cp -r /tmp/cmake-3.26.3-linux-x86_64/bin /usr/local/
RUN cp -r /tmp/cmake-3.26.3-linux-x86_64/share /usr/local/

USER jenkins