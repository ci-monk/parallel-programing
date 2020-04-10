<p align="center">
  <img alt="openmp" src="https://upload.wikimedia.org/wikipedia/commons/e/eb/OpenMP_logo.png" width="250px" float="center"/>
</p>

<h1 align="center">💻 Parallel Programing with OpenMP 💻</h1>

<p align="center">
  <strong>Simple repository with some parallel programing implementations using OpenMP</strong>
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
  <a href="#built-with">Technology</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#description">Description</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
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

## Functions (OpenMP)

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

Steps to build the Docker image.

### Build

```bash
docker image build -t <IMAGE_NAME> -f <PATH_DOCKERFILE> <PATH_CONTEXT_DOCKERFILE>
docker image build -t <IMAGE_NAME> . (This context)
```

### Run

Steps to run the container.

* **Linux** running:

```bash
docker container run -d -p <LOCAL_PORT:CONTAINER_PORT> <IMAGE_NAME> <COMMAND>
docker container run -it --rm --name <CONTAINER_NAME> -p <LOCAL_PORT:CONTAINER_PORT> <IMAGE_NAME> <COMMAND>
```

* **Windows** running:

```
winpty docker.exe container run -it --rm <IMAGE_NAME> <COMMAND>
```

For more information, access the [Docker](https://docs.docker.com/) documentation or [this](/docs/docker.md).

## 🐋 Development with Docker Compose

Steps to run this integration with docker-compose.

```bash
docker-compose up --build
```

Steps to down all services deployed by docker-compose.

```bash
docker-compose down
```

Down all services and delete all images.

```bash
docker-compose down --rmi all
```

## 🎒 How to contribute

1. Make a **Fork**.

2. Follow the project organization.

3. Add the file to the appropriate level folder - If the folder does not exist, create according to the standard.

4. Make the **Commit**.

5. Open a **Pull Request**.

6. Wait for your pull request to be accepted.. 🚀

Remember: There is no bad code, there are different views/versions of solving the same problem. 😊

## 🔔 Add to git and push

You must send the project to your GitHub after the modifications

```bash
git add -f .
git commit -m "Added - Fixing somethings"
git push origin master
```

## 📋 Versioning

- [CHANGELOG](CHANGELOG.md)

## 📜 License

Distributed under the MIT License. See [LICENSE](LICENSE) for more information.

## ☎️ Contacts

Hey!! If you like this project or if you find some bugs feel free to contact me in my channels:

* **Email**: luccapsm@gmail.com
* **Linkedin**: www.linkedin.com/in/lucca-pessoa-4abb71138/

[![Facebook](https://github.frapsoft.com/social/facebook.png)](https://www.facebook.com/lucca.pessoa.9)
[![Github](https://github.frapsoft.com/social/github.png)](https://github.com/lpmatos)

## ✨ Contributors

<table>
  <tr>
    <td align="center"><a href="https://github.com/lpmatos"><img src="https://avatars2.githubusercontent.com/u/58797390?s=400&v=4" width="100px;" alt=""/><br /><sub><b>Lucca Pessoa</b></sub></a><br /><a href="https://github.com/lpmatos/parallel-programing/commits?author=lpmatos" title="Code">💻</a></a></td>
  <tr>
</table>

## 🐯 Autor

<table>
  <tr>
    <td align="center"><a href="https://github.com/lpmatos"><img src="https://avatars2.githubusercontent.com/u/58797390?s=400&v=4" width="100px;" alt=""/><br /><sub><b>Lucca Pessoa</b></sub></a><br /><a href="https://github.com/lpmatos/parallel-programing/commits?author=lpmatos" title="Code">💻</a> <a href="#lpmatos" title="Design">🎨</a></td>
  <tr>
</table>

## Project Status

* 🔛 In production

---

<p align="center">Feito com ❤️ by <strong>Lucca Pessoa :wave:</p>
