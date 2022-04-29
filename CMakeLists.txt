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


set(example_programs    built_inLiteral
    templateFunctionTemplates
    enum
    vectorConstructor
    refactor3
    stringNumericConversion
    templateClassTemplate
    override
    stringConstructor
    operatorOverloadingCall
    perfectForwarding
    string
    explicit
    IOStreamsInOut
    dotProduct
    rawString
    stringComparisoConcatenation
    methodThisPointer
    stlAlgorithmsTransform
    delete
    templateDefaultArguments
    typeTraitsGcd
    stringSizeCapacity
    promiseFuture
    templateSpecializationTypeTraits
    uniformInitialization
    singleton
    raii
    methodConstexpr
    methodConst
    lambdaFunctionClosure
    bigArray
    stlAlgorithms
    auto
    IOStreamsOutput
    IOStreamsFormatter
    vectorModify
    uniqueLock
    templateAutomaticReturnType
    constructorInitializer
    stringAccess
    stlContainerAssignmentAndSwap
    stlContainerComparison
    constructorDelegation
    stringView
    uniquePtr
    mutex
    rangeBasedForLoop
    safeInitializationCallOnce
    inheritanceAccessRights
    lambdaFunctionGeneric
    constructorInheriting
    autoExplicit
    threadOperations
    stlOrderedAssoziativeContainerAssoziativeArray
    destructor
    memberFunctionVirtual
    initializerList
    stlContainerConstructor
    lambdaFunctionCapture
    templateSpecialization
    typeTraitsTypeCategories
    stringModification
    classMemberInitializer
    lambdaFunction
    swap
    memoryAccess
    threadLifetime
    operatorOverloading
    regexMatch
    userDefinedLiteral
    automaticReturnType
    overrideFinal
    classMemberInitializerWidget
    refactor1
    copyMoveSemantics
    refactor2
    templateSpecializationFull
    overloadNewAndDelete2
    stlContainerSearchRange
    constExpression
    functionOverloading
    structuredBinding
    operatorOverloadingAssignment
    constructor
    stlAlgorithmsRemove
    sharedPtr
    stlOrderedAssoziativeContainerModify
    constExpressionCpp14
    promiseFutureSynchronize
    regexReplace
    readerWriterLock
    unorderedMapMultimap
    cyclicReference
    templateTypes
    regexIterator
    templateFunctionTemplatesOverloading
    inheritance
    threadCreate
    safeInitializationStatic
    templateTypeParameter
    IOStreams
    overloadNewAndDelete
    regexMatchObject
    decltype
    threadArguments
    stlAlgorithmsForEach
    fillGCC
    templateClassTemplateMemberFunctions
    stringCverusC++
    templateArgumentDeduction
    regexSearch
    templateTemplateTemplatesParameter
    IOStreamsInputFormatted
    sharedPtrDeleter
    typeTraitsCopy
    inheritanceAbstractBase
    methodStatic
    constructorExplicit
    weakPtr
    final
    stlAlgorithmsAllAnyNone
    default
    rvalueReference
    lockGuard
    asyncLazyEager
    conditionVariable
    stlContainerSize
   )

foreach(example_program ${example_programs})
  set(sources ${example_program}.cpp)
  source_group("Source Files" FILES{sources})
  add_executable(${example_program} ${sources})
endforeach()