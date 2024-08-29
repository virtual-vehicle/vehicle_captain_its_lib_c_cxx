# HOWTO Update the Library
Please follow those basic steps when updating the library
1. Do your updates to the code
2. Update the version number in the generator file X.Y.Z.
   1. Increment X for major versions
   2. Increment Y for major changes
   3. Increment Z for minor fixes
3. Generate the libraries and replace the release versions
   1. This verifies that the library can still be generated
   2. This updates the release version of the library
4. Run the demo docker to check if the library compiles
5. Update README.md to reflect the changes
