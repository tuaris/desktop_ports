Special FreeBSD Desktop Ports
=====

This repository contains port skeletons that include modifications or additions to the official FreeBSD ports collection.  This exists for the purpose of building a functional FreeBSD Desktop.

## Notable modifications:

* The [`security/ca_root_nss`](https://www.freshports.org/security/ca_root_nss) and [`security/nss`](https://www.freshports.org/security/nss) packages are altered to include the [TDMC/Pacy World, LLC. root CA](http://www.pacyworld.com/ca.php).
* The [`www/firefox`](https://www.freshports.org/www/firefox) and [`www/firefox-esr`](https://www.freshports.org/www/firefox-esr) packages are altered to include the [TDMC/Pacy World, LLC. root CA](http://www.pacyworld.com/ca.php).
* The [`www/firefox`](https://www.freshports.org/www/firefox) and [`www/firefox-esr`](https://www.freshports.org/www/firefox-esr) packages are altered to disable Pocket, DoH, and Telemetry by default.
* The [`mail/thunderbird`](https://www.freshports.org/mail/thunderbird) package is altered to include the [TDMC/Pacy World, LLC. root CA](http://www.pacyworld.com/ca.php).
* All [`www/node`](https://www.freshports.org/www/node) packages are also altered to include the [TDMC/Pacy World, LLC. root CA](http://www.pacyworld.com/ca.php).
* This is forked from GostBSD's origional 11.x series desktop and thus borrows a lot from that.

### Todo:

* Remove certain pinned certificates in Firefox ports for well-know ad serving hostnames.

## Using with Portshaker

Create a file `/usr/local/etc/portshaker.d/desktop` with the following contents.
```
#!/bin/sh
. /usr/local/share/portshaker/portshaker.subr
method="git"
if	[ "$1" != '--' ]; then
	err 1 "Extra arguments"
fi
shift
git_clone_uri="https://github.com/tuaris/desktop_ports.git"
git_branch="master"
sed -i '' '/www\/seamonkey.* is not maintained upstream and full of security holes/d' ${poudriere_ports_mountpoint}/${default_poudriere_tree}/MOVED
run_portshaker_command $*
```

Then add **desktop** to your **_merge_from** line in `/usr/local/etc/portshaker.conf`.  For example.

```
#---[ Base directory for mirrored Ports Trees ]---
mirror_base_dir="/var/cache/portshaker"

#---[ Directories where to merge ports ]---
ports_trees="default"

use_zfs="yes"
poudriere_dataset="poudriere/poudriere"
poudriere_ports_mountpoint="/usr/local/poudriere/ports"
default_poudriere_tree="default"
default_merge_from="ports desktop"
```
