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
    unorderedOrderedContainerPerformance
    stringConstructor
    operatorOverloadingCall
    perfectForwarding
    string
    explicit
    IOStreamsInOut
    dotProduct
    callableUnitFunctionObject
    rawString
    stringComparisoConcatenation
    methodThisPointer
    stlAlgorithmsTransform
    callableUnitLambaFunction
    delete
    templateDefaultArguments
    typeTraitsGcd
    stringSizeCapacity
    promiseFuture
    templateSpecializationTypeTraits
    uniformInitialization
    singleton
    threadLocal
    raii
    methodConstexpr
    methodConst
    lambdaFunctionClosure
    bigArray
    stlAlgorithms
    stlContainersCommonInterface
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
    containerConstructionDestruction
    rangeBasedForLoop
    safeInitializationCallOnce
    inheritanceAccessRights
    lambdaFunctionGeneric
    constructorInheriting
    autoExplicit
    unorderedSetHashInfo
    stlOrderedAssoziativeContainerAssoziativeArray
    callableUnitFunction
    destructor
    memberFunctionVirtual
    initializerList
    stlContainerConstructor
    lambdaFunctionCapture
    templateSpecialization
    typeTraitsTypeCategories
    stringModification
    typeTraitsFill
    classMemberInitializer
    lambdaFunction
    swap
    memoryAccess
    operatorOverloading
    regexMatch
    userDefinedLiteral
    stlAlgorithmenAccumulate
    automaticReturnType
    overrideFinal
    classMemberInitializerWidget
    refactor1
    copyMoveSemantics
    refactor2
    templateSpecializationFull
    overloadNewAndDelete2
    constExpression
    functionOverloading
    regexWordStatistic
    structuredBinding
    operatorOverloadingAssignment
    constructor
    stlAlgorithmsRemove
    sharedPtr
    stlOrderedAssoziativeContainerModify
    typeModifications
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
    stlAlgorithmsSearchRange
    templateArgumentDeduction
    regexSearch
    templateTemplateTemplatesParameter
    IOStreamsInputFormatted
    sharedPtrDeleter
    inheritanceAbstractBase
    methodStatic
    constructorExplicit
    weakPtr
    final
    stlAlgorithmsAllAnyNone
    default
    rvalueReference
    lockGuard
    unorderedMap
    staticAssert
    asyncLazyEager
    conditionVariable
    stlContainerSize
   )

foreach(example_program ${example_programs})
  set(sources ${example_program}.cpp)
  source_group("Source Files" FILES{sources})
  add_executable(${example_program} ${sources})
endforeach()
