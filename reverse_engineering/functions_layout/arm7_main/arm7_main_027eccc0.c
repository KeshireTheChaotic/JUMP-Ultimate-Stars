
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eccc0(undefined4 param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = FUN_037f8910(_DAT_0380fff4 + 0x188,0x3a);
  if (iVar2 == 0) {
    FUN_027e904c(1);
    uVar3 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0xc) = 0x87;
    *(undefined2 *)(iVar2 + 0xe) = 0x15;
    FUN_027ea0c8(iVar2 + 0x10,param_1);
    *(undefined2 *)(iVar2 + 0x16) = param_2;
    uVar1 = FUN_027e93b0(param_3 + 1);
    *(undefined2 *)(iVar2 + 0x18) = uVar1;
    for (uVar4 = 0; (uVar4 < *(ushort *)(iVar2 + 0x18) && (uVar4 < 0x20)); uVar4 = uVar4 + 1) {
      uVar3 = FUN_027e93b0(param_3 + 2 + uVar4);
      FUN_027e93d0(iVar2 + 0x1a + uVar4,uVar3);
    }
    for (; uVar4 < 0x20; uVar4 = uVar4 + 1) {
      FUN_027e93d0(iVar2 + 0x1a + uVar4,0);
    }
    FUN_037f8e64(_DAT_0380fff4 + 0x188,iVar2);
    uVar3 = 1;
  }
  return uVar3;
}

