Docker image of https://github.com/google/cityhash

workdir: /app

Example:

```
docker run -it pavelsr/cityhash64 cityhash64 /var/cache/apk         # hash of folder
docker run -it pavelsr/cityhash64 cityhash64 /etc/apk/repositories  # hash of file
```

Main practical purpose: [get build id of Firefox](http://forums.mozillazine.org/viewtopic.php?p=14880915) for writing customized profiles.ini

Also thanks to:

https://stackoverflow.com/questions/25837980/how-to-use-cityhash128-in-c-code
