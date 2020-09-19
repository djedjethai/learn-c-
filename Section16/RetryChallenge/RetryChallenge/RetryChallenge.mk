##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=RetryChallenge
ConfigurationName      :=Debug
WorkspacePath          :=/Users/jerome/Documents/cpp/Section18/Section18
ProjectPath            :=/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=jerome
Date                   :=17/09/2020
CodeLitePath           :="/Users/jerome/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
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
ObjectsFileList        :="RetryChallenge.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
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
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/InsufficientFundsException.cpp$(ObjectSuffix) $(IntermediateDirectory)/IllegalBalanceException.cpp$(ObjectSuffix) $(IntermediateDirectory)/SavingAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/Iprintable.cpp$(ObjectSuffix) $(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) $(IntermediateDirectory)/Utile.cpp$(ObjectSuffix) 



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
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/InsufficientFundsException.cpp$(ObjectSuffix): InsufficientFundsException.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/InsufficientFundsException.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/InsufficientFundsException.cpp$(DependSuffix) -MM InsufficientFundsException.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/InsufficientFundsException.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/InsufficientFundsException.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/InsufficientFundsException.cpp$(PreprocessSuffix): InsufficientFundsException.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/InsufficientFundsException.cpp$(PreprocessSuffix) InsufficientFundsException.cpp

$(IntermediateDirectory)/IllegalBalanceException.cpp$(ObjectSuffix): IllegalBalanceException.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/IllegalBalanceException.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/IllegalBalanceException.cpp$(DependSuffix) -MM IllegalBalanceException.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/IllegalBalanceException.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/IllegalBalanceException.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/IllegalBalanceException.cpp$(PreprocessSuffix): IllegalBalanceException.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/IllegalBalanceException.cpp$(PreprocessSuffix) IllegalBalanceException.cpp

$(IntermediateDirectory)/SavingAccount.cpp$(ObjectSuffix): SavingAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SavingAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SavingAccount.cpp$(DependSuffix) -MM SavingAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/SavingAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SavingAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SavingAccount.cpp$(PreprocessSuffix): SavingAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SavingAccount.cpp$(PreprocessSuffix) SavingAccount.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix): CheckingAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CheckingAccount.cpp$(DependSuffix) -MM CheckingAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/CheckingAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CheckingAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix): CheckingAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CheckingAccount.cpp$(PreprocessSuffix) CheckingAccount.cpp

$(IntermediateDirectory)/Iprintable.cpp$(ObjectSuffix): Iprintable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Iprintable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Iprintable.cpp$(DependSuffix) -MM Iprintable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/Iprintable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Iprintable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Iprintable.cpp$(PreprocessSuffix): Iprintable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Iprintable.cpp$(PreprocessSuffix) Iprintable.cpp

$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix): TrustAccount.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TrustAccount.cpp$(DependSuffix) -MM TrustAccount.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/TrustAccount.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TrustAccount.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TrustAccount.cpp$(PreprocessSuffix): TrustAccount.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TrustAccount.cpp$(PreprocessSuffix) TrustAccount.cpp

$(IntermediateDirectory)/Utile.cpp$(ObjectSuffix): Utile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Utile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Utile.cpp$(DependSuffix) -MM Utile.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/jerome/Documents/cpp/Section16/RetryChallenge/RetryChallenge/Utile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Utile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Utile.cpp$(PreprocessSuffix): Utile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Utile.cpp$(PreprocessSuffix) Utile.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


