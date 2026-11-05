
void FUN_021c7664(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_1 + 0x5c); uVar1 = uVar1 + 1) {
      iVar2 = *(int *)(param_1 + 0x58);
      if (*(short *)(iVar2 + uVar1 * 8) != -1) {
        (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
        *(undefined2 *)(iVar2 + uVar1 * 8) = 0xffff;
      }
    }
  }
  return;
}

