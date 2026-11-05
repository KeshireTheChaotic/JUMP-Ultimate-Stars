
void FUN_021a2f90(int param_1,undefined4 param_2,int param_3,undefined4 param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  iVar2 = FUN_02199e10();
  local_20 = param_4;
  bVar1 = FUN_0217668c();
  uVar3 = thunk_FUN_021766fc();
  *(byte *)(param_1 + 0x35) = param_5 & bVar1 & ~(byte)(1 << (uVar3 & 0xff));
  *(int *)(param_1 + 0x38) = param_3 + 8;
  FUN_02051890(s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 0xc,iVar2,4);
  FUN_02051890(&local_20,iVar2 + 4,4);
  FUN_02051890(param_2,iVar2 + 8,param_3);
  FUN_021a3024(param_1);
  return;
}

