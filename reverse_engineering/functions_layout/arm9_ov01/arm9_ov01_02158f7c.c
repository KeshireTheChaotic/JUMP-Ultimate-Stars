
void FUN_02158f7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  iVar1 = *(int *)(param_1 + 4);
  uStack_10 = param_4;
  if (*(int *)(iVar1 + 0x94) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214d37c();
  }
  FUN_0215ab48(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x10));
  iStack_18 = (int)*(short *)(iVar1 + 0xa2) << 0xc;
  iStack_14 = (int)*(short *)(iVar1 + 0xa0) << 0xc;
  FUN_021511c8(param_1,&iStack_14,&iStack_18);
  return;
}

