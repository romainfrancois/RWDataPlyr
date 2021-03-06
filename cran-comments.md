## Resubmission

In this resubmission, I have:

* ensured that no functions write to the user's file space by default
* ensured all tests, examples, and vignettes only write to `tempdir()`

In previous resubmissions, I have:

* addressed comments on quoting software names, and reducing the number of examples that use `\dontrun{}`. 

## Test environments
* local Windows 10 Enterprise, R 3.4.4, R 3.5.1
* ubuntu 14.04 (on travis-ci), R 3.5.1, 3.4.4, and R-devel
* windows (on AppVeyor), R 3.5.1, R 3.4.4, and R-devel
* win-builder, R-release

## R CMD check results

0 ERRORs | 0 WARNINGs | 1 NOTE

The only note identifies that this is the first CRAN submission of this package.

## Downstream dependencies
There are currently no downstream dependencies for this package.
