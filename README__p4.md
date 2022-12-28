# Punkt 4
Żeby zobaczyć obecność pliku fib.yml należy użyć komendy ```gh workflow list``` i ```gh workflow view``` gdzie gh workflow list pokazuje nam czy workflow jest aktywny i jego nr id,
view pokazuje nam ostatnie uruchomienia workflowa, oraz możliwość podejrzenia pliku YAML za pomocą ```gh workflow view fab.yml --yaml```

![This is an image](/screenshots/p4_1.png)

Żeby uruchomić workflow za pomocą gh należy użyć komendy ```gh workflow run nr_id``` gdzie w moim przypadku id to 44072757. Można podejrzeć działanie za pomocą ```gh run watch```

![This is an image](/screenshots/p4_2.png)

Aby pobrać obraz należy użyć komendy ```docker run -it --rm ghcr.io/matixar/fibcalc:latest```

![This is an image](/screenshots/p4_3.png)


[Link do repo ghcr](https://github.com/matixar/FibCalc/pkgs/container/fibcalc)

[Link do DockerHuba](https://hub.docker.com/repository/docker/matixar/fibcalc)

Podglądając jeden z wykonanych action można zauważyć, że podczas budowy obrazu jest wykorzystywany cache.

![This is an image](/screenshots/p4_4.png)
