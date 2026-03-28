FROM debian:latest

RUN apt-get update -y && apt-get install -y \
    && rm -rf /var/lib/apt/lists/*
#   ...

WORKDIR /app

COPY . .

RUN cd target && make

CMD ["tail", "-f"]