################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
User/%.obj: ../User/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="D:/00 Project/DSP_28335_PZ/WorkSpace_CCS9.0_28335_Practice/Example02_DSP28335_LED" --include_path="D:/00 Project/DSP_28335_PZ/WorkSpace_CCS9.0_28335_Practice/Example02_DSP28335_LED/User" --include_path="D:/00 Project/DSP_28335_PZ/WorkSpace_CCS9.0_28335_Practice/Example02_DSP28335_LED/Include" --include_path="D:/ti/ccs930/ccs/tools/compiler/ti-cgt-c2000_18.12.4.LTS/include" -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="User/$(basename $(<F)).d_raw" --obj_directory="User" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


