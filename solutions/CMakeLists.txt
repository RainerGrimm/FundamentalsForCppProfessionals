# Require a recent version of cmake
cmake_minimum_required(VERSION 2.8.4 FATAL_ERROR)

# This project is C++ based.
project(seminar)

if(${CMAKE_CXX_COMPILER_ID} STREQUAL GNU)
    set(CMAKE_CXX_FLAGS "-O3 -std=c++17 -pthread")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 8)
	    message(WARNING "!!!! GCC versions must be at least 8 !!!!")
        message(WARNING "!!!! Adust the makefile to build with a different compiler. !!!!")
    endif()
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL Clang)
    set(CMAKE_CXX_FLAGS "-O3 -std=c++17 -pthread")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 5)
        message(WARNING "!!!! Clang version must be at least 5 !!!!")
		message(WARNING "!!!! Adust the makefile to build with a different compiler. !!!!")
    endif()
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL MSVC)
    set(CMAKE_CXX_FLAGS "/Ox /EHsc")
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 19.15)    
        message(WARNING "!!!! MSVC version must be at least 19.15 !!!!")
    endif()	
else()
    message(WARNING "!!! You are using an unsupported compiler! Compilation has only been tested with GCC >= 8, Clang >= 5, or MSVC >= 19.15. !!!")
endif()
    

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")

set(CMAKE_VERBOSE_MAKEFILE on)


set(example_programs    userDefinedLiteralExtended
    enum
    refactor3
    countDown
    recursiveMutex
    makeUnique
    dispatchGeneric
    gcdVariations
    polymorph
    delete
    power3
    templateClassTemplateMethods
    operatorOverloadingLambda
    templateNonTypeParameter
    bigArray
    templateVariadicTemplates
    IOStreamsFraction
    power2
    stringInputOutput
    smartPointerPerformanceUnique
    containerConstructionDestruction
    stlAlgorithmenForEach
    constructorInheriting
    autoExplicit
    vectorSize
    power1
    stringFind
    IOStreamsStreamBuffer
    initializerList
    smartPointerPerformanceNative
    templateClassTemplateMethods3
    lambdaFunctionCapture
    templateClassTemplateMemberFunctions3
    printf
    constructorDelegationRecursive
    promiseFutureException
    automaticReturnType
    smartPointerPerformanceShared
    regexSearchEmail
    overrideFinal
    classMemberInitializerWidget
    refactor1
    refactor2
    threadHardwareConcurrency
    explicitToImplicit
    rangedBasedForLoop
    singletonMultithreading
    templateAutomaticReturnTypeTypeTraits
    typeModifications
    smallStringOptimization
    templateClassTemplateMethods2
    threadArgumentsVariation
    templateIsPointer
    templateTypes
    isSame
    regexReplaceDoubles
    templateClassTemplateMemberFunctions
    templateAdd
    overrideFinalNVI
    conditionVariablePingPong
    dotProductAsync
    constructorBalance
    lock
    dispatchPolymorph
    array
    sharedFuture
    lockGuard
   )

foreach(example_program ${example_programs})
  set(sources ${example_program}.cpp)
  source_group("Source Files" FILES{sources})
  add_executable(${example_program} ${sources})
endforeach()
