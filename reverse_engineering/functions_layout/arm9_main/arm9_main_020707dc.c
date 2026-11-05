
void FUN_020707dc(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(iRam0207086c + 0xcc);
  iVar1 = FUN_0200d12c(uVar4,0x3c);
  uVar4 = FUN_0200c954(uVar4);
  uVar4 = FUN_0200c5ac(uVar4,uRam02070870);
  FUN_0200c9e4(uRam02070874,uVar4);
  iVar2 = FUN_0200c8e0();
  iVar3 = FUN_0200d12c(iVar1,0x3c);
  *param_1 = iVar3;
  *param_2 = iVar1 + iVar3 * -0x3c;
  iVar1 = (iVar2 + iVar1 * -0x1000 + 0x14) * 100;
  *param_3 = (int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc;
  return;
}

