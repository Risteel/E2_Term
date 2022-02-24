################################################################################
#   Copyright (c) [2017-2019] [Radisys]                                        #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################

# This is makefile for DU APP

include ../common/rsys_fancy.mak
include ../common/env.mak
COLOR=$(COLOR_RED)

SRC_DIR=$(ROOT_DIR)/src/du_app/F1AP
C_SRCS=$(wildcard $(SRC_DIR)/*.c)
C_OBJS=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_SRCS))
LOG_FILES=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.i,$(C_SRCS))
BAK_FILES=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.i.bak,$(C_SRCS))
DB_FILES =$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.i.db,$(C_SRCS))

# prepare the list of common header files
HDR_FILES+=$(wildcard $(CM_DIR)/env*.[hx])
HDR_FILES+=$(wildcard $(CM_DIR)/gen*.[hx])
HDR_FILES+=$(wildcard $(CM_DIR)/ssi*.[hx])
HDR_FILES+=$(wildcard $(CM_DIR)/cm*.[hx])
HDR_FILES+=$(wildcard $(CM_DIR)/lkw*.[hx])
HDR_FILES+=$(wildcard $(CM_DIR)/lrg*.[hx])


lib: $(LIB_DIR)/libf1ap.a
include $(COM_BUILD_DIR)/compile.mak

I_OPTS+=-I$(ROOT_DIR)/src/mt
I_OPTS+=-I$(ROOT_DIR)/src/du_app
I_OPTS+=-I$(ROOT_DIR)/src/cu_stub #TODO: Remove this dependency
I_OPTS+=-I$(ROOT_DIR)/src/du_app/F1AP/asn


#-------------------------------------------------------------#
#Linker macros
#-------------------------------------------------------------#
$(LIB_DIR)/libf1ap.a:$(C_OBJS) $(C_WO_PED_OBJS)
		  @echo -e "Creating Archive $(COLOR) $@ $(REVERT_COLOR)"
		  $(Q)ar -cr $(LIB_DIR)/libf1ap.a $(C_OBJS) $(C_WO_PED_OBJS)

#-------------------------------------------------------------#
#Clean macros
#-------------------------------------------------------------#
clean:
		  @echo -e "$(COLOR_RED)Cleaning F1AP$(REVERT_COLOR)"
		  @echo $(SRC_DIR) $(CM_DIR)
		  $(Q)\rm -f $(LIB_DIR)/libf1ap.a $(C_OBJS) $(C_WO_PED_OBJS) $(LOG_FILES) $(BAK_FILES)

