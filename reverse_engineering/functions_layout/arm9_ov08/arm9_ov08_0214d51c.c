
int FUN_0214d51c(undefined1 *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_18;
  
  *param_1 = DAT_0216c205;
  param_1[1] = 1;
  uVar4 = DAT_0216c1f0;
  sVar1 = (short)DAT_0216c1f0;
  FUN_0214cf10(param_1 + 6,DAT_0216c1ec,(int)sVar1);
  uVar2 = FUN_0214ce14(uVar4 & 0xffff);
  *(undefined2 *)(param_1 + 2) = uVar2;
  iVar3 = FUN_0200d12c(((sVar1 + 6) * 0x10000 >> 0x10) + 1,2);
  uVar4 = (iVar3 << 0x11) >> 0x10;
  uVar2 = FUN_0214ce14(uVar4 & 0xffff);
  *(undefined2 *)(param_1 + 4) = uVar2;
  param_1[uVar4] = 0x60;
  param_1[uVar4 + 1] = 0;
  uVar2 = FUN_0214ce14();
  *(undefined2 *)(param_1 + uVar4 + 4) = uVar2;
  local_18 = FUN_0214ce2c(0xe);
  FUN_0214cf10(param_1 + uVar4 + 6,&local_18,4);
  uVar2 = FUN_0214ce14(4);
  *(undefined2 *)(param_1 + uVar4 + 2) = uVar2;
  return ((short)((uint)(iVar3 << 0x11) >> 0x10) + 10) * 0x10000 >> 0x10;
}

