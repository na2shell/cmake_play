FROM --platform=linux/x86_64 centos:7

RUN yum update -y
RUN yum install -y gcc-c++ cmake make