# Punkt 3
Żeby procedura budowania obrazu zakończyła się powodzeniem musiałem zmodyfikować plik Dockerfile, plik używany w punkcie 2 jest zapisany pod nazwą ```Dockerfile_p1```.

Do dodania tagów użyłem polecenia ```git tag numer_wersji```

Do nazewnictwa obrazów zgodnie z metodą semver użyłem reguły MAJOR.MINOR.PATCH czyli w przypadku zmian w kodzie bez nowej funkcjonalności zwiększamy numer PATCH,
w przypadku nowej funkcjonalności zwiększamy MINOR, a w MAJOR zmieniamy gdy wersja jest niekompatybilna z API, 
np. 1.0.0

Żeby skorzystać z repo ghcr należy dodać action z logowaniem do GitHub Packages:
```
      - name: Login to GitHub Packages
        uses: docker/login-action@v2
        with:
          registry: ghcr.io
          username: ${{github.repository_owner}}
          password: ${{secrets.GITHUB_TOKEN}}
```

Z repo ghcr pobieramy metadane do przypisania podczas budowania obrazu:
```
        name: Docker meta
        id: meta
        uses: docker/metadata-action@v4
        with:
          images: |
            ghcr.io/matixar/fibcalc
          tags: |
            type=ref,event=branch
            type=ref,event=pr
            type=semver,pattern={{version}}
            type=semver,pattern={{major}}.{{minor}}
```

Później przy budowaniu obrazu wykorzystujemy otrzymane dane aby uzupełnić tagi ```tags: ${{ steps.meta.outputs.tags }}``` i ```labels: ${{ steps.meta.outputs.labels }}```
