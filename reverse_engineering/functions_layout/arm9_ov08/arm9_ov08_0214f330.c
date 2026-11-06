
/* WARNING: Removing unreachable block (ram,0x0214f4d4) */

undefined4 FUN_0214f330(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_48;
  undefined1 auStack_44 [48];
  
  FUN_020517fc(&DAT_0216cfcc,0,0x60);
  iVar1 = param_1[10];
  if (iVar1 == 5) {
    DAT_0216cfcc = 1;
  }
  else if (iVar1 == 0xd) {
    DAT_0216cfcc = 2;
  }
  else {
    if (iVar1 != 0x10) {
      return 0xffffffff;
    }
    DAT_0216cfcc = 3;
  }
  DAT_0216cfcd = 0;
  FUN_02051890(param_1 + 0xb,&DAT_0216cfce,param_1[10]);
  func_0x02199964();
  iVar1 = FUN_0214fc2c(0,param_1 + 1,*param_1,0x30bffe);
  if (iVar1 != 0) {
    FUN_020550a0(auStack_44);
    FUN_02054ee8(auStack_44,0x3fec42,0,0x214f88d,0x12);
    FUN_02053bd8(&DAT_0216cfac,&local_48,1);
    if (local_48 < 0x14) {
      uVar2 = (*(code *)((int)&switchD_0214f3fe::switchdataD_0214f400 +
                        (int)(short)(&switchD_0214f3fe::switchdataD_0214f400)[local_48]))();
      return uVar2;
    }
    FUN_02054e50(auStack_44);
    do {
      iVar1 = FUN_02053bd8(&DAT_0216cfac,&local_48,0);
    } while (iVar1 == 1);
  }
  FUN_0214f8b4(param_2,&DAT_0216d040,0);
  return 0xffffffff;
}

