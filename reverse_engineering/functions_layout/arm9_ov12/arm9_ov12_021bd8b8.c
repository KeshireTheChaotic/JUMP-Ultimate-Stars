
void FUN_021bd8b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar3 + 0x44) != *(int *)(iVar3 + 0x40)) {
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x40);
    local_14 = 0x18000;
    local_10 = 0xfff80000;
    FUN_021bb970(*(undefined4 *)(iVar3 + 0x38),&local_10,&local_14);
    FUN_02023894(*(undefined4 *)(*(int *)(iVar3 + 0x38) + 4),*(int *)(iVar3 + 0x40) + 0x700000,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar3 + 0x38) + 4) + 0x68) + 0x6c))();
    piVar1 = *(int **)(*(int *)(iVar3 + 0x38) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    FUN_02028330(*(undefined4 *)(*(int *)(iVar3 + 0x38) + 4));
    FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 0x38) + 4),0x21bda2d);
  }
  if (*(int *)(iVar3 + 0x4c) != *(int *)(iVar3 + 0x48)) {
    if (*(int *)(iVar3 + 0x58) == -1) {
      iVar4 = 0;
      *(undefined4 *)(iVar3 + 0x58) = 0;
      do {
        FUN_021bd794(*(undefined4 *)(iVar3 + iVar4 * 4 + 0x24));
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
    else {
      iVar2 = *(int *)(iVar3 + 0x14) + *(int *)(iVar3 + 0x48) * 0xc;
      iVar4 = *(int *)(iVar3 + 0x58) * 4;
      iVar4 = iVar2 + iVar4 + *(int *)(iVar2 + iVar4);
      if (*(char *)(iVar3 + 0xa0) != '\0') {
        FUN_02074080(iVar3 + 100,iVar4,iVar3 + 0x8e,&DAT_021d4090,0x14);
        iVar4 = iVar3 + 100;
      }
      piVar1 = *(int **)(*(int *)(*(int *)(iVar3 + *(int *)(iVar3 + 0x58) * 4 + 0x24) + 4) + 100);
      (**(code **)(*piVar1 + 0x68))(piVar1,iVar4);
      piVar1 = *(int **)(*(int *)(iVar3 + *(int *)(iVar3 + 0x58) * 4 + 0x24) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      iVar4 = *(int *)(iVar3 + 0x58) + 1;
      *(int *)(iVar3 + 0x58) = iVar4;
      if (2 < iVar4) {
        *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x48);
        *(undefined1 *)(iVar3 + 0xa0) = 0;
      }
    }
  }
  if (*(char *)(iVar3 + 0xa1) != '\0') {
    if (*(int *)(iVar3 + 0x58) == -1) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
    }
    else {
      piVar1 = *(int **)(*(int *)(iVar3 + *(int *)(iVar3 + 0x58) * 4 + 0x24) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      iVar4 = *(int *)(iVar3 + 0x58) + 1;
      *(int *)(iVar3 + 0x58) = iVar4;
      if (2 < iVar4) {
        *(undefined1 *)(iVar3 + 0xa1) = 0;
      }
    }
  }
  FUN_021bda04(iVar3);
  return;
}

