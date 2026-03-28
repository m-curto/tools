# sandbox

Lightweight Docker setup to identify required dependencies for running a project.

```
mkdir -p src/target
```

Place your files inside `target` like this:

```
.
├── Makefile
└── src
    ├── Dockerfile
    └── target
        ├── inc
        ├── Makefile
        └── src
```

You can now add dependencies in the `Dockerfile`.

```
make build
make run
```
