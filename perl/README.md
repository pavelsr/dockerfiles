Slim Perl with some pre-installed libs, modules and utils:

```
✅ cpm
✅ gcc
✅ libz-dev
✅ libssl-dev
✅ curl
✅ iputils-ping
✅ nano
✅ jq
✅ procps (ps)
✅ IO::Socket::SSL (allow Mojo::UserAgent and LWP::UserAgent handle https requests)
✅ LWP::Protocol::https (depends on IO::Socket::SSL)
```

perldoc is also included

May add in future

```
net-tools (netstat)
iproute2 (ip)
dnsutils (dig)
libxml2 (xmllint)
yq (for parsing yaml files)
xq (for XPath)
whois
```

Compare to original perl image size this one is two times smaller (~300Mb against ~900MB)

Optimized for Selectel small storage droplets

Base image - perl-slim based on debian buster

Experiments with sizes (debian buster vs bullseye, perl 5.32 vs 5.34):

```
perl:5.32-slim-buster   ~298MB
perl:5.32-slim-bullseye ~357MB
perl:5.34-slim-buster   ~296MB ✅
perl:5.34-slim-bullseye ~355MB
```

You can save ~4Mb if you install `cpm` via curl like

```
curl -fsSL https://git.io/cpm -o /usr/local/bin/cpm && chmod +x /usr/local/bin/cpm
```

not via `cpanm App::cpm`
