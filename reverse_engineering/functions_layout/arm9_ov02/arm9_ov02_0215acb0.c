
void FUN_0215acb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = *(int *)(iVar2 + 0x58) + 1;
  *(uint *)(iVar2 + 0x58) = uVar1;
  local_10 = (uVar1 >> 2) * -0x1000;
  local_c = (*(uint *)(iVar2 + 0x58) >> 2) << 0xc;
  uStack_8 = param_4;
  FUN_0214d4c0(*(undefined4 *)(iVar2 + 0x28),&local_c,&local_10);
  FUN_0207382c();
  return;
}

