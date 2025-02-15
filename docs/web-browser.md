# Web browser

[WebBrowser.py](../bin/Examples/WebBrowser.py) implements a
[NiceGUI](https://nicegui.io/)-based web interface to browse code and references
from an indexed database. The web browser also implements a feature [requested](https://x.com/eatonphil/status/1821573274582823247)
by Phil Eaton: being able to quickly find functions that share the same function signature.
The underlying analysis for finding same-typed functions is its own [tool](group-functions.md).



To run the web browser, first download a [pre-built release for Linux](https://github.com/trailofbits/multiplier/releases) of Multiplier. Then,
follow the [instructions to index a codebase](INDEXING.MD). In this example, I indexed OpenSSH.

If you're using a pre-built release extracted to `/path/to/multiplier/release`, then you'll want to set up a Python virtual environment as follows:

```shell
$ python3.12 -m venv /path/multiplier/release
$ source /path/multiplier/release/bin/activate
(multiplier) $
```

Next, install NiceGUI into the Python virtual environment:

```shell
(multiplier) $ python -m pip install nicegui
```

Finally, invoke [WebBrowser.py](../bin/Examples/WebBrowser.py) from a *source checkout* of Multiplier.

```shell
(multiplier) $ python /path/to/multiplier/source/bin/Examples/WebBrowser.py --db /tmp/openssh.db 
```

Using and indexed OpenSSH as an example, here is what the web browser looks like
when it is opened. The user is first presented with an file tree view, which
expands to show all files in the indexed database:

![File tree view](images/web-browser-0.png)

When a directory is expanded and a file clicked on, a syntax-highlighted form of
the code of that file is shown.

![File tree view](images/web-browser-1.png)

References are both clickable, triggering redirects to their definitions
(if present), and right-clickable, showing an selection of options:

![File tree view](images/web-browser-2.png)

Clicking each of the right click menu options for the `addr_unicast_masklen` function
shows the following for references to, references from, and same-typed functions:

![File tree view](images/web-browser-3.png)
