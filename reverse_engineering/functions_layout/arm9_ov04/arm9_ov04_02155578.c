
void FUN_02155578(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="JQuizMainQuestionMask.cpp" */
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(iVar1 + 0x8bc) =
       *(uint *)(iVar1 + 0x8bc) & ~(1 << (param_2 & 0xff)) | param_3 << (param_2 & 0xff);
  *(undefined1 *)(iVar1 + 0x901) = 1;
  return;
}

