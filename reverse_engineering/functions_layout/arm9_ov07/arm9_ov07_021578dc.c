
void FUN_021578dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar4 + 0x6d) == '\0') {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x70) + 0xc);
    if (iVar1 < 0) {
      FUN_021579ac(iVar4,*(undefined4 *)(iVar4 + 0x58),param_3,param_4,param_4);
    }
    else {
      *(int *)(iVar4 + 0x78) = iVar1;
      *(undefined4 *)(*(int *)(iVar4 + 0x70) + 0xc) = 0xffffffff;
      FUN_021579ac(iVar4,*(undefined4 *)(iVar4 + 0x78));
      for (uVar2 = *(uint *)(iVar4 + 0x78);
          ((int)uVar2 < *(int *)(iVar4 + 0x50) &&
          (*(char *)(*(int *)(*(int *)(iVar4 + 0x70) + 8) + uVar2 * 0x1c) != '\0'));
          uVar2 = uVar2 + 1) {
        FUN_02157a3c(iVar4,uVar2);
      }
      FUN_021579d8(iVar4,uVar2,1,0x7ff0,1);
      *(uint *)(iVar4 + 0x58) = uVar2;
      while (uVar2 = uVar2 + 1, (int)uVar2 < *(int *)(iVar4 + 0x54)) {
        FUN_021579d8(iVar4,uVar2,2,uVar2 | 0x8000,(int)uVar2 < 6);
      }
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x2157855);
    }
  }
  piVar3 = *(int **)(param_1 + 4);
  (**(code **)(*piVar3 + 400))();
  (**(code **)(*piVar3 + 0x178))();
  *(undefined1 *)(piVar3[0x19] + 0x40) = 1;
  return;
}

