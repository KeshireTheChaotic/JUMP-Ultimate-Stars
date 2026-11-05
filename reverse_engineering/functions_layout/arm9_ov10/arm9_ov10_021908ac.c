
void FUN_021908ac(int param_1,uint param_2,int param_3,uint param_4,uint param_5,undefined1 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + -0x14) = 0x45;
  uVar2 = 0;
  *(undefined1 *)(param_1 + -0x13) = 0;
  DAT_021a84ec = DAT_021a84ec + 1;
  *(ushort *)(param_1 + -0x10) = DAT_021a84ec >> 8 | DAT_021a84ec * 0x100;
  *(undefined1 *)(param_1 + -0xc) = 0x80;
  *(undefined1 *)(param_1 + -0xb) = param_6;
  *(ushort *)(param_1 + -8) =
       (ushort)(byte)(DAT_021a8538 >> 0x18) | (ushort)((DAT_021a8538 >> 0x10) << 8);
  *(ushort *)(param_1 + -6) =
       (ushort)((DAT_021a8538 & 0xffff) >> 8) | (ushort)((DAT_021a8538 & 0xffff) << 8);
  *(ushort *)(param_1 + -4) = (ushort)(byte)(param_5 >> 0x18) | (ushort)((param_5 >> 0x10) << 8);
  *(ushort *)(param_1 + -2) = (ushort)((param_5 & 0xffff) >> 8) | (ushort)((param_5 & 0xffff) << 8);
  iVar3 = param_1;
  uVar1 = param_2;
  if (0x5c8 < param_2) {
    for (; 0x5c8 < uVar1; uVar1 = uVar1 - 0x5c8) {
      FUN_02190a24(param_1,0,iVar3,0x5c8,param_5,uVar2 | 0x2000);
      uVar2 = uVar2 + 0xb9 & 0xffff;
      iVar3 = iVar3 + 0x5c8;
    }
    param_2 = 0;
    if (uVar1 != 0) {
      if (param_4 == 0) {
        FUN_02190a24(param_1,0,iVar3,uVar1,param_5,uVar2);
      }
      else {
        FUN_02190a24(param_1,0,iVar3,uVar1,param_5,uVar2 | 0x2000);
      }
      uVar2 = uVar2 + (uVar1 >> 3) & 0xffff;
      param_2 = 0;
    }
  }
  uVar1 = param_2 + param_4;
  while (0x5c8 < uVar1) {
    iVar3 = 0x5c8 - param_2;
    FUN_02190a24(param_1,param_2,param_3,iVar3,param_5,uVar2 | 0x2000);
    param_3 = param_3 + iVar3;
    uVar2 = uVar2 + 0xb9 & 0xffff;
    param_2 = 0;
    param_4 = param_4 - iVar3;
    uVar1 = param_4;
  }
  if (param_2 + param_4 != 0) {
    FUN_02190a24(param_1,param_2,param_3,param_4,param_5,uVar2);
  }
  return;
}

