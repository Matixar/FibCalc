FROM alpine:3.17

RUN apk --update add g++
WORKDIR /usr/src/FibCalc
COPY . .

RUN g++ -o FibCalc src/main.cpp

CMD ["./FibCalc"]
