FROM alpine

RUN apk update && apk upgrade

RUN apk add --no-cache openssh-client git
RUN apk --update add g++

RUN mkdir -p -m 0600 ~/.ssh && ssh-keyscan github.com >> ~/.ssh/known_hosts

WORKDIR /usr/src/FibCalc
RUN --mount=type=ssh git clone git@github.com:Matixar/FibCalc.git .

RUN g++ -o FibCalc src/main.cpp

CMD ["./FibCalc"]

LABEL Name=fibcalc Version=0.0.1
