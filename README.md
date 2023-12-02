# ImageGame 🖼

This is the repository for the **ImageGame**.

## Getting Started

This section describes the components used by this repository to build the software.

### Directory Structure

* `/`: The root directory of this repository contains general files like the main `CMakeLists.txt` file describing how to build this software
* `/doc/`: This directory contains documentation files
* `/out/`: This directory contains the (auto-generated) plantuml png diagrams
* `/src/`: This directory contains the source code for the **ImageGame**
* `/test/`: This directory contains the test source code

### Required Tools

To build the software (and edit the source code) the **ImageGame** depends on the following tools:

![RequiredTools](out/doc/RequiredTools/RequiredTools.png)

* **CMake**: [CMake](https://cmake.org/download/#latest) is used to describe how to build the provided source code from this repository into an executable
* **Visual Studio Code**: [VS Code](https://code.visualstudio.com/) is the preferred IDE to modify the source code (although this is not strictly required - you're free to use whichever IDE you like 😎)
* **Compiler**: To create an executable from the source code you need a compiler. [Gcc](https://gcc.gnu.org/) or [Clang](https://clang.llvm.org/) might be good options.
* **vcpkg**: To manage/gather the external dependencies of the **ImageGame** the tool [vcpkg](https://vcpkg.io/en/) is used.

### ImageGame Repository Structure

The source code of the **ImageGame** repository is structure as follows

![RepositoryStructure](out/doc/RepositoryStructure/RepositoryStructure.png)

* **ImageGameLib**: This *library* contains the central logic of the game
* **DearImGui**: The GUI is realized by the [Dear ImGui](https://github.com/ocornut/imgui) library. This ibrary is gathered by the vcpkg dependency manager automatically.
* **ImageGame**: This is the final *executable* of the game. It makes use of the *ImageGameLib* and the *Dear ImGui*.
* **GoogleTest**: The tests use the [GoogleTest](https://github.com/google/googletest) framework. This ibrary is gathered by the vcpkg dependency manager automatically.

### Building the **ImageGame** executable
