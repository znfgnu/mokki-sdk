FROM debian

WORKDIR /home/dev

RUN cd /home/dev
RUN apt-get update
RUN apt-get install -y --no-install-recommends wget bzip2;
RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/7-2018q2/gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2 --no-check-certificate
RUN tar xjf gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2
RUN rm gcc-arm-none-eabi-7-2018-q2-update-linux.tar.bz2