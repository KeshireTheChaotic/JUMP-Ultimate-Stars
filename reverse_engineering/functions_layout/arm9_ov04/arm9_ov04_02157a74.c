
void FUN_02157a74(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_02157ac8(*(undefined4 *)(param_1 + 0x10),1,param_3,param_4,param_4);
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined2 *)(iVar1 + 0x16) = 0x7fff;
  *(undefined1 *)(iVar1 + 0x18) = 6;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined1 *)(iVar1 + 0x1b) = param_2;
  *(undefined1 *)(iVar1 + 0x1a) = 0;
  FUN_02157aec(*(undefined4 *)(param_1 + 0xc));
  return;
}

