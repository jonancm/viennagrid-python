# Code examples of `viennagrid.wrapper`

This directory contains code examples on how to use `viennagrid.wrapper`.

In general, you will prefer to use `viennagrid` over `viennagrid.wrapper`, since `viennagrid` provides a higher-level interface which is more powerful and comfortable to use.

These are all currently available examples in the suggested order of reading:

* `domain_setup.py`: Shows you how to setup a mesh by defining a domain and a segmentation, with vertices, segments and cells. It also shows commonly used attributes and methods on the aforementioned objects.
* `algorithms.py`: Shows you how to apply algorithms to different mesh objects (domains, segments, cells, vertices) in order to process the mesh or to compute relevant information.
* `io.py`: Shows you how to read and write mesh files using ViennaGrid's readers and writers. It also shows how to read/write scalar data from vertices and the cells from/to the mesh file.
* `io_stats.py`: Similar to `io.py`, but also computes some statistics, like the time elapsed reading the mesh file and how many vertices and segments have been read.
* `accessors.py`: Shows you how to assign scalar data to vertices and cells. This can be then used to store relevant information which can also be read/written from/to mesh files using ViennaGrid's readers and writers.
