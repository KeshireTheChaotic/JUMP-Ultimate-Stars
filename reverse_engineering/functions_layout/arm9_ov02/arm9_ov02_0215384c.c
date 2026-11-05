
void FUN_0215384c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char local_14;
  byte local_13 [3];
  
  iVar4 = (uint)*(byte *)(param_1 + 0x35c) * 0x48 + *(int *)(*(int *)(param_1 + 0x330) + 0x34);
  iVar5 = 0;
  local_13[0] = 0;
  local_14 = '\0';
  bVar6 = true;
  while (iVar5 < (int)(uint)*(byte *)(iVar4 + 0x44)) {
    iVar3 = iVar4 + iVar5;
    iVar5 = iVar5 + 1;
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x330) + 0x38) + (uint)*(byte *)(iVar3 + 0x38) * 0x40
                 + 0x2f) != -1) {
      bVar6 = false;
    }
  }
  if (bVar6) {
    iVar4 = *(int *)(param_1 + 0x330);
    if (*(char *)(iVar4 + 0x56) == '\0') {
      FUN_0214dc3c(iVar4,(uint)*(byte *)(param_1 + 0x35c) * 0x48 + *(int *)(iVar4 + 0x34),local_13,
                   &local_14);
    }
    else {
      FUN_0214db0c(iVar4,*(int *)(iVar4 + 0x38) + (uint)*(byte *)(param_1 + 0x35e) * 0x40,local_13,
                   &local_14);
    }
    FUN_0214dcd8((int)(char)local_13[0],*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0x12001);
    FUN_0214dcd8((int)local_14,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined4 *)(param_1 + 0x40),0x12001);
    uVar2 = (uint)local_13[0];
    bVar6 = uVar2 == (int)local_14;
    if (bVar6) {
      uVar2 = 1;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 0x44) + 4);
    if (!bVar6) {
      uVar2 = 0;
    }
    (**(code **)(*piVar1 + 0xd8))(piVar1,uVar2);
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  else {
    iVar4 = 1;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar4 * 4 + 0x28) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  return;
}

