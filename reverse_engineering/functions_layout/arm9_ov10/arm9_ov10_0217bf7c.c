
void FUN_0217bf7c(undefined1 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined1 local_a0;
  byte local_9f;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_94 [128];
  
  if ((param_4 == 0) || (param_5 == 0)) {
    param_5 = 0;
  }
  else {
    MIi_CpuCopy32(param_4,auStack_94,param_5 << 2);
  }
  local_a8 = DAT_021a4b30;
  local_a7 = DAT_021a4b31;
  local_a6 = DAT_021a4b32;
  local_a5 = DAT_021a4b33;
  local_a4 = 3;
  local_9f = (byte)(param_5 << 2);
  local_a0 = param_1;
  iVar1 = FUN_02178448();
  local_9e = *(undefined2 *)(iVar1 + 0x1a);
  iVar1 = FUN_02178448();
  local_9c = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = FUN_02178448();
  local_98 = *(undefined4 *)(iVar1 + 0x1f8);
  iVar1 = 0;
  while( true ) {
    iVar2 = FUN_02178448();
    uVar3 = FUN_0218c40c(param_2,0,0);
    iVar2 = FUN_0217fca0(*(undefined4 *)(iVar2 + 0xe4),uVar3,param_3,&local_a8,local_9f + 0x14);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 != 2) break;
    iVar1 = iVar1 + 1;
    if (4 < iVar1) {
      return;
    }
  }
  return;
}

