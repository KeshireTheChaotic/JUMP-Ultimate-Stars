
void FUN_021541c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(char *)(param_1 + 0x542) * 0x13 + param_1 + 0x4a8;
  iVar3 = 0;
  do {
    iVar1 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar1 + 0x46e) = 0;
  } while (iVar3 < 4);
  *(undefined1 *)(param_1 + 0x46e) = *(undefined1 *)(param_1 + 0x541);
  if (*(char *)(iVar4 + 0x10) < '\v') {
    *(char *)(param_1 + 0x46f) = *(char *)(iVar4 + 0x10);
  }
  else {
    *(undefined1 *)(param_1 + 0x46f) = 10;
    *(char *)(param_1 + 0x470) = *(char *)(iVar4 + 0x10) + -10;
  }
  for (iVar3 = (int)*(char *)(iVar4 + 0x12);
      iVar3 < (int)*(char *)(iVar4 + 0x12) + (int)*(char *)(iVar4 + 0x10); iVar3 = iVar3 + 1) {
    piVar2 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0x298) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  }
  if (*(char *)(param_1 + 0x470) == '\0') {
    FUN_0214d4bc(*(undefined4 *)(param_1 + 0x194),9);
  }
  else {
    FUN_0214d4bc(*(undefined4 *)(param_1 + 0x194),10);
    *(char *)(param_1 + 0x46d) = *(char *)(param_1 + 0x46d) + '\x10';
  }
  iVar4 = param_1 + 0x4a8;
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 0x541); iVar3 = iVar3 + 1) {
    iVar1 = param_1 + iVar3 * 4;
    if (iVar3 == *(char *)(param_1 + 0x542)) {
      iVar1 = *(int *)(iVar1 + 0x398);
      FUN_02023894(*(undefined4 *)(iVar1 + 4),*(char *)(iVar4 + 0x11) + 0x800027,0,iVar1,param_4);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x398);
      FUN_02023894(*(undefined4 *)(iVar1 + 4),*(char *)(iVar4 + 0x11) + 0x80001f,0,iVar1,param_4);
    }
    iVar4 = iVar4 + 0x13;
  }
  return;
}

