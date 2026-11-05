
bool FUN_021a0aa8(int param_1,undefined1 param_2,int param_3,int param_4,char param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = FUN_02199e24(param_2);
  *(undefined1 *)(param_1 + 0xb30) = 0x70;
  uVar6 = param_4 * 4 + 0xc;
  iVar7 = param_1 + 0xb30;
  bVar1 = thunk_FUN_021766fc();
  *(byte *)(param_1 + 0xb31) = bVar1 | (byte)(param_4 << 2);
  *(undefined2 *)(param_1 + 0xb36) = *(undefined2 *)(param_1 + 0x8d0);
  sVar2 = FUN_021a1a60(iVar3 * 0x20c + param_1 + 0x40);
  *(ushort *)(param_1 + 0xb34) = sVar2 + 1U & 0x7fff;
  *(short *)(param_1 + 0xb32) = (short)param_3;
  *(ushort *)(param_1 + 0xb38) = (ushort)*(undefined4 *)(param_1 + 0x18) & 0x7fff;
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    iVar4 = FUN_021a1bf8(*(undefined4 *)(param_1 + 0x3c),param_3 - iVar3 & 0x7fff);
    if (iVar4 == 0) {
      *(undefined4 *)(iVar7 + iVar3 * 4 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + iVar3 * 4 + 0xc) = *(undefined4 *)(iVar4 + 4);
    }
  }
  if (param_5 == '\0') {
    iVar3 = FUN_0217ed34(param_2,iVar7,uVar6);
  }
  else {
    iVar3 = FUN_0217ee90(param_2);
  }
  *(char *)(param_1 + 0x8cd) = (char)*(undefined4 *)(param_1 + 0xc);
  *(undefined2 *)(param_1 + 0x8d2) = *(undefined2 *)(param_1 + 0x8d0);
  *(undefined2 *)(param_1 + 0x8d4) = *(undefined2 *)(param_1 + 0xb32);
  *(ushort *)(param_1 + 0x8d6) = *(short *)(param_1 + 0xb32) - ((short)param_4 + -1) & 0x7fff;
  *(char *)(param_1 + 0x8ce) = (char)uVar6;
  uVar5 = *(uint *)(param_1 + 0x8e0);
  *(uint *)(param_1 + 0x8e0) = uVar5 + uVar6;
  *(uint *)(param_1 + 0x8e4) =
       *(int *)(param_1 + 0x8e4) + ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar5,uVar6);
  *(int *)(param_1 + 0x8d8) = *(int *)(param_1 + 0x8d8) + 1;
  return iVar3 != 0;
}

