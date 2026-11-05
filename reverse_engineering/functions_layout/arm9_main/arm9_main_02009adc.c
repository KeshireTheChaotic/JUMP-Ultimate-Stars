
undefined8 FUN_02009adc(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_10;
  uint local_c;
  
  uVar3 = CONCAT44(param_2,param_1);
  iVar1 = FUN_0200aa6c(param_1,param_2,param_3,param_4,param_4);
  if (2 < iVar1) {
    cVar2 = '\x01';
    FUN_0200c390(0,0,param_1,param_2);
    if (cVar2 == '\0') {
      iVar1 = (int)(param_2 & 0x7ff00000) >> 0x14;
      if (iVar1 == 0) {
        if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
          return CONCAT44(param_2,param_1);
        }
        uVar3 = FUN_0200b8cc(param_1,param_2,0,0x43500000);
        iVar1 = ((int)((uint)((ulonglong)uVar3 >> 0x20) & 0x7ff00000) >> 0x14) + -0x36;
        if (param_3 < -50000) {
          uVar3 = FUN_0200b8cc(0xc2f8f359,0x1a56e1f);
          return uVar3;
        }
      }
      local_c = (uint)((ulonglong)uVar3 >> 0x20);
      local_10 = (undefined4)uVar3;
      if (iVar1 == 0x7ff) {
        uVar3 = FUN_0200b3a0(local_10,local_c,local_10,local_c);
        return uVar3;
      }
      iVar1 = iVar1 + param_3;
      if (0x7fe < iVar1) {
        uVar3 = FUN_02009818(0x8800759c,0x7e37e43c,local_10,local_c);
        uVar3 = FUN_0200b8cc(0x8800759c,0x7e37e43c,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
        return uVar3;
      }
      if (0 < iVar1) {
        return CONCAT44(local_c & 0x800fffff | iVar1 * 0x100000,local_10);
      }
      if (-0x36 < iVar1) {
        uVar3 = FUN_0200b8cc(0,0x3c900000,local_10);
        return uVar3;
      }
      if (param_3 < 0xc351) {
        uVar3 = FUN_02009818(0xc2f8f359,0x1a56e1f,local_10,local_c);
        uVar3 = FUN_0200b8cc(0xc2f8f359,0x1a56e1f,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
        return uVar3;
      }
      uVar3 = FUN_02009818(0x8800759c,0x7e37e43c,local_10,local_c);
      uVar3 = FUN_0200b8cc(0x8800759c,0x7e37e43c,(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      return uVar3;
    }
  }
  return CONCAT44(param_2,param_1);
}

