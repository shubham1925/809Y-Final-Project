##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Final-Project-Group5
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/home/kartik/Documents/gg/Final-Project-Group5
ProjectPath            :=/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5
IntermediateDirectory  :=../build-$(ConfigurationName)/Final-Project-Group5
OutDir                 :=../build-$(ConfigurationName)/Final-Project-Group5
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=kartik venkat
Date                   :=02/12/19
CodeLitePath           :=/home/kartik/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
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
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -Wmain -g -O0 -std=c++14 -std=c++11 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Final-Project-Group5/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/Final-Project-Group5"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/Final-Project-Group5"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/Final-Project-Group5/.d:
	@mkdir -p "../build-$(ConfigurationName)/Final-Project-Group5"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix): src/LandBasedTracked/landbasedtracked.cpp ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/src/LandBasedTracked/landbasedtracked.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix): src/LandBasedTracked/landbasedtracked.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(DependSuffix) -MM src/LandBasedTracked/landbasedtracked.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(PreprocessSuffix): src/LandBasedTracked/landbasedtracked.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedTracked_landbasedtracked.cpp$(PreprocessSuffix) src/LandBasedTracked/landbasedtracked.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix): src/LandBasedWheeled/landbasedwheeled.cpp ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/src/LandBasedWheeled/landbasedwheeled.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix): src/LandBasedWheeled/landbasedwheeled.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(DependSuffix) -MM src/LandBasedWheeled/landbasedwheeled.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(PreprocessSuffix): src/LandBasedWheeled/landbasedwheeled.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedWheeled_landbasedwheeled.cpp$(PreprocessSuffix) src/LandBasedWheeled/landbasedwheeled.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(ObjectSuffix): src/Maze/maze.cpp ../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/src/Maze/maze.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Maze_maze.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(DependSuffix): src/Maze/maze.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(DependSuffix) -MM src/Maze/maze.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(PreprocessSuffix): src/Maze/maze.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/src_Maze_maze.cpp$(PreprocessSuffix) src/Maze/maze.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix): src/LandBasedRobot/landbasedrobot.cpp ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/src/LandBasedRobot/landbasedrobot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(DependSuffix): src/LandBasedRobot/landbasedrobot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(DependSuffix) -MM src/LandBasedRobot/landbasedrobot.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(PreprocessSuffix): src/LandBasedRobot/landbasedrobot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/src_LandBasedRobot_landbasedrobot.cpp$(PreprocessSuffix) src/LandBasedRobot/landbasedrobot.cpp

../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(ObjectSuffix): src/API/api.cpp ../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/src/API/api.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_API_api.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(DependSuffix): src/API/api.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(DependSuffix) -MM src/API/api.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(PreprocessSuffix): src/API/api.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/src_API_api.cpp$(PreprocessSuffix) src/API/api.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(ObjectSuffix): src/Algorithm/algorithm.cpp ../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/kartik/Documents/gg/Final-Project-Group5/Final-Project-Group5/src/Algorithm/algorithm.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Algorithm_algorithm.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(DependSuffix): src/Algorithm/algorithm.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(DependSuffix) -MM src/Algorithm/algorithm.cpp

../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(PreprocessSuffix): src/Algorithm/algorithm.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Final-Project-Group5/src_Algorithm_algorithm.cpp$(PreprocessSuffix) src/Algorithm/algorithm.cpp


-include ../build-$(ConfigurationName)/Final-Project-Group5//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


