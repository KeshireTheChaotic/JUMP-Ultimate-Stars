
void FUN_021bbb48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_20 = param_4;
  if (*(char *)(iVar1 + 0xa6) != '\0') {
    iVar2 = 0;
    do {
      local_34 = 0;
      local_38 = 0;
      FUN_021bb970(*(undefined4 *)(iVar1 + iVar2 * 4 + 0x48),&local_38,&local_34);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    local_2c = 0;
    local_30 = 0;
    FUN_021bb970(*(undefined4 *)(iVar1 + 0x44),&local_30,&local_2c);
    local_24 = 0;
    local_28 = 0x100000;
    FUN_021bb970(*(undefined4 *)(iVar1 + 0x40),&local_28,&local_24);
    FUN_021b65d8(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4));
    FUN_021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x40) + 4),0);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021bbccc);
  }
  if (*(char *)(iVar1 + 0xa5) != '\0') {
    FUN_02073840();
  }
  return;
}

