
void FUN_02027b50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0x1ff) >> 8 == 0) {
    return;
  }
  uVar1 = FUN_0201b45c();
  pcVar2 = *(code **)(**(int **)(param_1 + 0x30) + 0x38);
  (*pcVar2)(*(int **)(param_1 + 0x30),uVar1,param_2,pcVar2,param_4);
  return;
}

