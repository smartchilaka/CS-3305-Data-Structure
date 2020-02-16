##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Assignment4
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/Dell/Documents/myWorksSpace
ProjectPath            :=C:/Users/Dell/Documents/myWorksSpace/Assignment4
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Dell
Date                   :=04/10/2019
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
ObjectsFileList        :="Assignment4.txt"
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
Objects0=$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(ObjectSuffix): ../../../Desktop/Assignment4/list.cpp $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dell/Desktop/Assignment4/list.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(DependSuffix): ../../../Desktop/Assignment4/list.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(DependSuffix) -MM ../../../Desktop/Assignment4/list.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(PreprocessSuffix): ../../../Desktop/Assignment4/list.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_list.cpp$(PreprocessSuffix) ../../../Desktop/Assignment4/list.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(ObjectSuffix): ../../../Desktop/Assignment4/node1.cxx $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dell/Desktop/Assignment4/node1.cxx" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(DependSuffix): ../../../Desktop/Assignment4/node1.cxx
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(DependSuffix) -MM ../../../Desktop/Assignment4/node1.cxx

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(PreprocessSuffix): ../../../Desktop/Assignment4/node1.cxx
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_node1.cxx$(PreprocessSuffix) ../../../Desktop/Assignment4/node1.cxx

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(ObjectSuffix): ../../../Desktop/Assignment4/try_list_methods.cpp $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dell/Desktop/Assignment4/try_list_methods.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(DependSuffix): ../../../Desktop/Assignment4/try_list_methods.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(DependSuffix) -MM ../../../Desktop/Assignment4/try_list_methods.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(PreprocessSuffix): ../../../Desktop/Assignment4/try_list_methods.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_try_list_methods.cpp$(PreprocessSuffix) ../../../Desktop/Assignment4/try_list_methods.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(ObjectSuffix): ../../../Desktop/Assignment4/utility.cpp $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dell/Desktop/Assignment4/utility.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(DependSuffix): ../../../Desktop/Assignment4/utility.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(DependSuffix) -MM ../../../Desktop/Assignment4/utility.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(PreprocessSuffix): ../../../Desktop/Assignment4/utility.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Assignment4_utility.cpp$(PreprocessSuffix) ../../../Desktop/Assignment4/utility.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


