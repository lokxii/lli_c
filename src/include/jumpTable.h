#define ENUM(s, product, data) CHAOS_PP_SEQ_CONCAT(product),
void* jumpTable[] = {

    GENERATE(ENUM,&&OPCODE_NOP,OPCODE_NOP_ARG())

    GENERATE(ENUM,&&OPCODE_MOV,OPCODE_MOV_ARG())
    GENERATE(ENUM,&&OPCODE_CPY,OPCODE_CPY_ARG())
    GENERATE(ENUM,&&OPCODE_VAR,OPCODE_VAR_ARG())
    GENERATE(ENUM,&&OPCODE_LOC,OPCODE_LOC_ARG())
    GENERATE(ENUM,&&OPCODE_ALLC,OPCODE_ALLC_ARG())
    GENERATE(ENUM,&&OPCODE_PUSH,OPCODE_PUSH_ARG())
    GENERATE(ENUM,&&OPCODE_POP,OPCODE_POP_ARG())
    GENERATE(ENUM,&&OPCODE_LTOF,OPCODE_LTOF_ARG())
    GENERATE(ENUM,&&OPCODE_FTOL,OPCODE_FTOL_ARG())
    
    GENERATE(ENUM,&&OPCODE_ADD,OPCODE_ADD_ARG())
    GENERATE(ENUM,&&OPCODE_SUB,OPCODE_SUB_ARG())
    GENERATE(ENUM,&&OPCODE_MUL,OPCODE_MUL_ARG())
    GENERATE(ENUM,&&OPCODE_DIV,OPCODE_DIV_ARG())
    GENERATE(ENUM,&&OPCODE_MOD,OPCODE_MOD_ARG())
    GENERATE(ENUM,&&OPCODE_INC,OPCODE_INC_ARG())
    GENERATE(ENUM,&&OPCODE_DEC,OPCODE_DEC_ARG())
    GENERATE(ENUM,&&OPCODE_ADDF,OPCODE_ADDF_ARG())
    GENERATE(ENUM,&&OPCODE_SUBF,OPCODE_SUBF_ARG())
    GENERATE(ENUM,&&OPCODE_MULF,OPCODE_MULF_ARG())
    GENERATE(ENUM,&&OPCODE_DIVF,OPCODE_DIVF_ARG())
    GENERATE(ENUM,&&OPCODE_INCF,OPCODE_INCF_ARG())
    GENERATE(ENUM,&&OPCODE_DECF,OPCODE_DECF_ARG())
    
    GENERATE(ENUM,&&OPCODE_EQ,OPCODE_EQ_ARG())
    GENERATE(ENUM,&&OPCODE_NE,OPCODE_NE_ARG())
    GENERATE(ENUM,&&OPCODE_GT,OPCODE_GT_ARG())
    GENERATE(ENUM,&&OPCODE_LT,OPCODE_LT_ARG())
    GENERATE(ENUM,&&OPCODE_EQF,OPCODE_EQF_ARG())
    GENERATE(ENUM,&&OPCODE_NEF,OPCODE_NEF_ARG())
    GENERATE(ENUM,&&OPCODE_GTF,OPCODE_GTF_ARG())
    GENERATE(ENUM,&&OPCODE_LTF,OPCODE_LTF_ARG())

    GENERATE(ENUM,&&OPCODE_AND,OPCODE_AND_ARG())
    GENERATE(ENUM,&&OPCODE_OR,OPCODE_OR_ARG())
    GENERATE(ENUM,&&OPCODE_NOT,OPCODE_NOT_ARG())
    
    GENERATE(ENUM,&&OPCODE_JMP,OPCODE_JMP_ARG())
    GENERATE(ENUM,&&OPCODE_JC,OPCODE_JC_ARG())
    GENERATE(ENUM,&&OPCODE_LBL,OPCODE_LBL_ARG())
    GENERATE(ENUM,&&OPCODE_CALL,OPCODE_CALL_ARG())
    GENERATE(ENUM,&&OPCODE_RET,OPCODE_RET_ARG())
    
    GENERATE(ENUM,&&OPCODE_SYS,OPCODE_SYS_ARG())
    
    GENERATE(ENUM,&&OPCODE_SRC,OPCODE_SRC_ARG())
    GENERATE(ENUM,&&OPCODE_PRINT_NUM,OPCODE_PRINT_NUM_ARG())
    GENERATE(ENUM,&&OPCODE_HALT,OPCODE_HALT_ARG())
};
#undef ENUM