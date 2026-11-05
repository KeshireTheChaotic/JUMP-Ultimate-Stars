
undefined4 FUN_0201224c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (DAT_020a157c <= uVar4) {
      return 0;
    }
    if (param_1 == *(int *)(DAT_020a1578 + uVar4 * 0xc)) break;
    uVar4 = uVar4 + 1;
  }
  iVar3 = DAT_020a1578 + uVar4 * 0xc;
  piVar1 = *(int **)(iVar3 + 4);
  if (piVar1 == (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(iVar3 + 8) + 0x60))();
    return uVar2;
  }
  iVar3 = (**(code **)(*piVar1 + 0x30))();
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0x28) =
       *(undefined1 *)(*(int *)(uVar4 * 0xc + DAT_020a1578 + 8) + 0x28);
  return *(undefined4 *)(iVar3 + 4);
}

