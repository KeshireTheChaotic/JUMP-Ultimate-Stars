
void FUN_021bba0c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_021bcad4(iVar1);
  if (*(char *)(iVar1 + 0xa6) != '\0') {
    iVar2 = 0;
    do {
      local_2c = 0;
      local_30 = 0;
      FUN_021bb970(*(undefined4 *)(iVar1 + iVar2 * 4 + 0x48),&local_30,&local_2c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    local_24 = 0;
    local_28 = 0;
    FUN_021bb970(*(undefined4 *)(iVar1 + 0x44),&local_28,&local_24);
    local_1c = 0;
    local_20 = 0x100000;
    FUN_021bb970(*(undefined4 *)(iVar1 + 0x40),&local_20,&local_1c);
    FUN_021b65d8(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4));
    FUN_021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4),0);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 4),FUN_021bbccc);
  }
  if (*(char *)(iVar1 + 0xa5) != '\0') {
    FUN_02073840();
  }
  return;
}

