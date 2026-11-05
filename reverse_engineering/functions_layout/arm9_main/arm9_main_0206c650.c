
void FUN_0206c650(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  while( true ) {
    if (8 < uVar4) {
      return;
    }
    iVar1 = FUN_0206c6f0(param_1,uRam0206c6ec | (uVar4 + 0x31) * 0x1000000);
    if (iVar1 == 0) break;
    (**(code **)(**(int **)(iVar1 + 4) + 0xac))();
    iVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0xac))();
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      piVar3 = (int *)FUN_0206c718(iVar1,iVar2);
      if (-1 < *(char *)(piVar3[1] + 0x29)) {
        (**(code **)(*piVar3 + 8))();
      }
    }
    uVar4 = uVar4 + 1;
  }
  return;
}

