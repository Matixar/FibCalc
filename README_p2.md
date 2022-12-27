# Punkt 2
Do zbudowania obrazu użyto polecenia:
```
docker build -t matixar/fibcalc.v1 --ssh default=c:/Users/Matixar/.ssh/id_ed25519 .
```
Optymalnie w --ssh należałoby użyć zamiast ```default``` to ```github=$HOME/.ssh/id_ed25519```, jednak w moim przypadku spotkało się to z błędem Permission denied (publickey).

Do uruchomienia obrazu użyto polecenia:
```
docker run --rm -it matixar/fibcalc.v1:latest
```

Wynik działania:

![This is an image](/screenshots/p2.png)
