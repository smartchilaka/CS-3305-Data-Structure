##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab4
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Dell/Documents/myWorksSpace
ProjectPath            :=C:/Users/Dell/Documents/myWorksSpace/Lab4
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Dell
Date                   :=25/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Lab4.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++17 -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/sequence2.cpp$(ObjectSuffix) $(IntermediateDirectory)/sequence_exam2.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/sequence2.cpp$(ObjectSuffix): sequence2.cpp $(IntermediateDirectory)/sequence2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dell/Documents/myWorksSpace/Lab4/sequence2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sequence2.cpp$(DependSuffix): sequence2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sequence2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sequence2.cpp$(DependSuffix) -MM sequence2.cpp

$(IntermediateDirectory)/sequence2.cpp$(PreprocessSuffix): sequence2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sequence2.cpp$(PreprocessSuffix) sequence2.cpp

$(IntermediateDirectory)/sequence_exam2.cpp$(ObjectSuffix): sequence_exam2.cpp $(IntermediateDirectory)/sequence_exam2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dell/Documents/myWorksSpace/Lab4/sequence_exam2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence_exam2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sequence_exam2.cpp$(DependSuffix): sequence_exam2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sequence_exam2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sequence_exam2.cpp$(DependSuffix) -MM sequence_exam2.cpp

$(IntermediateDirectory)/sequence_exam2.cpp$(PreprocessSuffix): sequence_exam2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sequence_exam2.cpp$(PreprocessSuffix) sequence_exam2.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


