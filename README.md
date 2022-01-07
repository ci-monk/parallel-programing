<p align="center">
  <img alt="openmp" src="https://upload.wikimedia.org/wikipedia/commons/e/eb/OpenMP_logo.png" width="250px" float="center"/>
</p>

<h1 align="center">💻 Parallel Programing with OpenMP 💻</h1>

<p align="center">
  <strong>Some parallel programing implementations using OpenMP + Docker + Docker Compose</strong>
</p>

<p align="center">
  <a href="https://github.com/lpmatos/parallel-programing">
    <img alt="Open Source" src="https://badges.frapsoft.com/os/v1/open-source.svg?v=102">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing/graphs/contributors">
    <img alt="GitHub Contributors" src="https://img.shields.io/github/contributors/lpmatos/parallel-programing">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing">
    <img alt="GitHub Language Count" src="https://img.shields.io/github/languages/count/lpmatos/parallel-programing">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing">
    <img alt="GitHub Top Language" src="https://img.shields.io/github/languages/top/lpmatos/parallel-programing">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing/stargazers">
    <img alt="GitHub Stars" src="https://img.shields.io/github/stars/lpmatos/parallel-programing?style=social">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing/commits/master">
    <img alt="GitHub Last Commit" src="https://img.shields.io/github/last-commit/lpmatos/parallel-programing">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing">
    <img alt="Repository Size" src="https://img.shields.io/github/repo-size/lpmatos/parallel-programing">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing/issues">
    <img alt="Repository Issues" src="https://img.shields.io/github/issues/lpmatos/parallel-programing">
  </a>

  <a href="https://github.com/lpmatos/parallel-programing/blob/master/LICENSE">
    <img alt="MIT License" src="https://img.shields.io/github/license/lpmatos/parallel-programing">
  </a>
</p>

<p align="center">
  <a href="#-how-to-contribute">How to contribute</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-license">License</a>
</p>

## ▶️ Getting Started

To use this repository you need to make a **git clone**:

```bash
git clone --depth 1 https://github.com/lpmatos/parallel-programing.git -b master
```

Pull requests are welcome. If you'd like to support the work and buy me a ☕, I greatly appreciate it!

<a href="https://www.buymeacoffee.com/EatdMck" target="_blank"><img src="https://www.buymeacoffee.com/assets/img/custom_images/orange_img.png" alt="Buy Me A Coffee" style="height: 41px !important;width: 100px !important;box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;-webkit-box-shadow: 0px 3px 2px 0px rgba(190, 190, 190, 0.5) !important;" ></a>

## OpenMP Functions

### Para execução do Ambiente

**Name**  |  **Description**
:---:  |  :---:
**omp_set_num_threads**  |  Define o número de threadhs em regiões paralelas futuras a menos que seja substituído pela cláusula num_threads
**omp_get_num_threads**  |  Retorna o número de threads dentro da região paralela
**omp_get_thread_num**   |  Retorna o ID da thread em execução.
**omp_get_num_procs**    |  Retorna o número de processadores disponível no momento em que a função é chamada.

## Para rotinas de tempo

**Name**  |  **Description**
:---:  |  :---:
**omp_get_wtime**  |  Retorna um valor em segundos do tempo decorrido de algum ponto
**omp_get_wtick**  |  Retorna o número de segundos entre os clocks do processador

## 🐋 Development with Docker

Steps to build a Docker Image.

### Build

```bash
docker image build -t <IMAGE_NAME> -f <PATH_DOCKERFILE> <PATH_CONTEXT_DOCKERFILE>
docker image build -t <IMAGE_NAME> . (This context)
```

### Run

Steps to run a Docker Container.

* **Linux** running:

```bash
docker container run -d -p <LOCAL_PORT:CONTAINER_PORT> <IMAGE_NAME> <COMMAND>
docker container run -it --rm --name <CONTAINER_NAME> -p <LOCAL_PORT:CONTAINER_PORT> <IMAGE_NAME> <COMMAND>
```

* **Windows** running:

```
winpty docker.exe container run -it --rm <IMAGE_NAME> <COMMAND>
```

For more information, access the [Docker](https://docs.docker.com/) documentation or [this](docs/docker.md).

## 🐋 Development with Docker Compose

Build and run a docker-compose.

```bash
docker-compose up --build
```

Down all services deployed by docker-compose.

```bash
docker-compose down
```

Down all services and delete all images.

```bash
docker-compose down --rmi all
```

## Link Reference

* http://www.inf.ufsc.br/~bosco.sobral/ensino/ine5645/Exemplos-Diretivas-Clausulas.pdf
* https://docs.microsoft.com/en-us/cpp/parallel/openmp/reference/openmp-functions?view=vs-2019

## ➤ Author <a name = "author"></a>

👤 Hey!! If you like this project or if you find some bugs feel free to contact me in my channels:

>
> * Linktree: https://linktr.ee/lpmatos
>

## ➤ Versioning <a name = "versioning"></a>

To check the change history, please access the [**CHANGELOG.md**](CHANGELOG.md) file.

## ➤ Project status <a name = "project-status"></a>

This repository is a study project, therefore, it will not always be maintained 👻.

## ➤ Donations <a name = "donations"></a>

<p align="center">
  <a href="https://www.blockchain.com/pt/btc/address/bc1qn50elv826qs2qd6xhfh6n79649epqyaqmtwky5">
    <img alt="BTC Address" src="https://img.shields.io/badge/BTC%20Address-black?style=for-the-badge&logo=bitcoin&logoColor=white">
  </a>

  <a href="https://live.blockcypher.com/ltc/address/ltc1qwzrxmlmzzx68k2dnrcrplc4thadm75khzrznjw/">
    <img alt="Litecoin Address" src="https://img.shields.io/badge/Litecoin%20Address-black?style=for-the-badge&logo=litecoin&logoColor=white">
  </a>
</p>

## ➤ Show your support <a name = "show-your-support"></a>

<div align="center">

Give me a ⭐️ if this project helped you!

<p>
  <img alt="gif-header" src="https://www.icegif.com/wp-content/uploads/baby-yoda-bye-bye-icegif.gif" width="350px" float="center"/>
</p>

Made with 💜 by [me](https://github.com/lpmatos) 👋 inspired on [readme-md-generator](https://github.com/kefranabg/readme-md-generator)

</div>
