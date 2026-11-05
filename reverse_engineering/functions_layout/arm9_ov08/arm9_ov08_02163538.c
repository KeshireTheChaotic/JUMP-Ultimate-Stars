
void FUN_02163538(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  int local_c;
  
  FUN_02165b60(*DAT_0216e804,0,auStack_10,&local_c);
  local_c = local_c + -0xc;
  if ((int)(uint)*(ushort *)(&DAT_0216ae8e + (uint)*(byte *)(DAT_0216e804 + 7) * 4) < local_c) {
    FUN_02163300();
    return;
  }
  FUN_02163300((uint)*(ushort *)(&DAT_0216ae8e + (uint)*(byte *)(DAT_0216e804 + 7) * 4));
  if (*(char *)(DAT_0216e804 + 7) == '\x05') {
    uVar1 = FUN_02167814(0,0x2163425,0,0x78);
    DAT_0216e804[5] = uVar1;
  }
  else {
    uVar1 = FUN_02167814(0,0x2163465,0,0x78);
    DAT_0216e804[5] = uVar1;
  }
  FUN_021677a0(1,param_1);
  return;
}

