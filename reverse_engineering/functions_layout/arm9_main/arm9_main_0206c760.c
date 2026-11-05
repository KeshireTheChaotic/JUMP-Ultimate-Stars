
void FUN_0206c760(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  while( true ) {
    if (8 < uVar4) {
      return;
    }
    iVar1 = FUN_0206c6f0(param_1,(uVar4 + 0x31) * 0x1000000 | 0x304e47);
    if (iVar1 == 0) break;
    uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0xac))();
    for (uVar5 = 1; uVar5 < uVar2; uVar5 = uVar5 + 1) {
      piVar3 = (int *)FUN_0206c718(iVar1,uVar5);
      if (-1 < *(char *)(piVar3[1] + 0x29)) {
        (**(code **)(*piVar3 + 8))();
        return;
      }
    }
    uVar4 = uVar4 + 1;
  }
  return;
}

