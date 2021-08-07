# c-lang-clocktest

c-lang-clocktest is a script for testing clock_gettime with diffrent clock id

## Clock Id

* CLOCK_REALTIME
* CLOCK_MONOTONIC
* CLOCK_UPTIME

## Usage

Installation and Test
```
git clone https://github.com/gsnw/c-lang-clocktest.git
make clocktest
./bin/clocktest
```

Uninstall
```
make clean
```

Installation, Test and Uninstall
```
make all
```