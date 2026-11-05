
undefined4 FUN_0203184c(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_1 + 0x200);
  bVar4 = iVar2 != 0x40;
  if (bVar4) {
    iVar2 = *(int *)(param_1 + 0x204);
  }
  if (bVar4 && iVar2 != 0x40) {
    for (uVar3 = 0; uVar3 < 2; uVar3 = uVar3 + 1) {
      for (iVar2 = 0; iVar2 < *(int *)(param_1 + uVar3 * 4 + 0x200); iVar2 = iVar2 + 1) {
        if (*(undefined4 **)(param_1 + uVar3 * 0x100 + iVar2 * 4) == param_3) {
          return 1;
        }
      }
    }
  }
  else {
    for (puVar1 = *(undefined4 **)(param_2 + 0x23c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      if (puVar1 + -8 == param_3) {
        return 1;
      }
    }
  }
  return 0;
}

