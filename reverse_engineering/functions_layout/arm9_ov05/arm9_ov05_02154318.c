
void FUN_02154318(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 + 0x4a8;
  FUN_021541c0();
  for (iVar4 = 0; iVar4 < *(char *)(param_1 + 0x541); iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + iVar4 * 4 + 0x398) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    iVar2 = param_1 + iVar4 * 4;
    if (iVar4 == *(char *)(param_1 + 0x542)) {
      iVar2 = *(int *)(iVar2 + 0x398);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),*(char *)(iVar3 + 0x11) + 0x800027,0,iVar2,param_4);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x398);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),*(char *)(iVar3 + 0x11) + 0x80001f,0,iVar2,param_4);
    }
    iVar2 = param_1 + iVar4 * 4;
    iVar3 = iVar3 + 0x13;
    *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0xd0) + 4) + 0xaa) = 1;
    *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0xd0) + 4) + 0xab) = 0;
  }
  iVar3 = 0;
  do {
    iVar4 = *(int *)(param_1 + iVar3 * 4 + 0x3b8);
    if (iVar4 != 0) {
      piVar1 = *(int **)(iVar4 + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

