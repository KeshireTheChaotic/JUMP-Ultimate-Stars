
void FUN_0218f980(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = FUN_021911b8(param_2,param_3,param_1,6);
  if (iVar2 == 0) {
    iVar2 = FUN_0200d12c(*(byte *)(param_2 + 0xc) & 0xf0,4);
    param_3 = param_3 - iVar2;
    bVar1 = *(byte *)(param_2 + 0xd);
    bVar3 = bVar1 & 0x17;
    if (bVar3 < 0x11) {
      if (0xf < bVar3) {
LAB_0218fa0a:
        FUN_0218fb10(param_1,param_2,param_3);
        return;
      }
      if ((bVar3 < 3) && ((bVar1 & 0x17) != 0)) {
        if (bVar3 == 1) {
          FUN_0218fa80(param_1,param_2,param_3);
          return;
        }
        if (bVar3 == 2) {
          if ((bVar1 & 0x28) == 0) {
            FUN_0218fdbc(param_1,param_2,param_3);
            return;
          }
          return;
        }
      }
    }
    else if ((bVar3 < 0x13) && (0x10 < bVar3)) {
      if (bVar3 == 0x11) goto LAB_0218fa0a;
      if (bVar3 == 0x12) {
        if ((bVar1 & 0x28) == 0) {
          FUN_0218fd14(param_1,param_2,param_3);
          return;
        }
        return;
      }
    }
    if ((bVar1 & 4) != 0) {
      FUN_0218fa54(param_1,param_2);
      return;
    }
    FUN_0218ff48(param_1,param_2,param_3,0);
  }
  return;
}

