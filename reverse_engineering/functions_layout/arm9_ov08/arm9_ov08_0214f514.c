
undefined4 FUN_0214f514(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_44;
  undefined1 auStack_40 [44];
  
  uVar3 = 0xffffffff;
  uVar4 = 1;
  if ((DAT_0216cf8c == (code *)0x0) || (DAT_0216cf98 == (code *)0x0)) {
    return 0xffffffff;
  }
  iVar1 = (*DAT_0216cf8c)(0x3000);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_0214fc2c(0,0,0,0x30bffe);
  if (iVar2 != 0) {
    FUN_020550a0(auStack_40);
    FUN_02054ee8(auStack_40,0x3fec42,0,0x214f88d,0x13,param_1,uVar3,uVar4);
    FUN_02053bd8(&DAT_0216cfac,&local_44,1);
    if (local_44 < 0x14) {
      uVar3 = (*(code *)((int)&switchD_0214f5a0::switchdataD_0214f5a2 +
                        (int)(short)(&switchD_0214f5a0::switchdataD_0214f5a2)[local_44]))();
      return uVar3;
    }
    FUN_02054e50(auStack_40);
    do {
      iVar2 = FUN_02053bd8(&DAT_0216cfac,&local_44,0);
    } while (iVar2 == 1);
  }
  (*DAT_0216cf98)(iVar1);
  return uVar3;
}

