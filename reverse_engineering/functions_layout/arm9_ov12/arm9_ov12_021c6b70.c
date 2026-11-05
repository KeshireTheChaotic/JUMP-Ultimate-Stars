
void FUN_021c6b70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x5c); uVar1 = uVar1 + 1) {
    if (*(short *)(*(int *)(param_1 + 0x58) + uVar1 * 8) != -1) {
      (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
    }
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  FUN_0200f69c(auStack_18,1);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - iVar2;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 1;
  return;
}

