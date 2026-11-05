
int FUN_0218e7d4(undefined2 *param_1,undefined1 param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  FUN_020517fc(param_1,0,0xec);
  *param_1 = 0x101;
  *(undefined1 *)(param_1 + 1) = 6;
  lVar3 = FUN_0200d10c(DAT_021a8560,DAT_021a8564,DAT_021a8558,DAT_021a855c);
  lVar3 = lVar3 + CONCAT44(DAT_021a856c,DAT_021a8568);
  DAT_021a8558 = (undefined4)lVar3;
  uVar2 = (uint)((ulonglong)lVar3 >> 0x20);
  lVar1 = lVar3;
  if (param_3 != (uint *)0x0) {
    DAT_021a855c = uVar2;
    *param_3 = uVar2;
    lVar1 = CONCAT44(DAT_021a855c,DAT_021a8558);
  }
  DAT_021a855c = (uint)((ulonglong)lVar1 >> 0x20);
  DAT_021a8558 = (undefined4)lVar1;
  param_1[2] = (ushort)(byte)((ulonglong)lVar3 >> 0x38) | (ushort)((uVar2 >> 0x10) << 8);
  param_1[3] = (ushort)((uVar2 & 0xffff) >> 8) | (ushort)((uVar2 & 0xffff) << 8);
  param_1[6] = (ushort)(byte)(DAT_021a8538 >> 0x18) | (ushort)((DAT_021a8538 >> 0x10) << 8);
  param_1[7] = (ushort)((DAT_021a8538 & 0xffff) >> 8) | (ushort)((DAT_021a8538 & 0xffff) << 8);
  FUN_02051890(&DAT_021a8548,param_1 + 0xe,6);
  param_1[0x76] = 0x8263;
  param_1[0x77] = 0x6353;
  param_1[0x78] = 0x135;
  *(undefined1 *)(param_1 + 0x79) = param_2;
  *(undefined1 *)((int)param_1 + 0xf3) = 0x3d;
  *(undefined1 *)(param_1 + 0x7a) = 7;
  *(undefined1 *)((int)param_1 + 0xf5) = 1;
  FUN_02051890(&DAT_021a8548,param_1 + 0x7b,6);
  *(undefined1 *)(param_1 + 0x7e) = 0xc;
  *(undefined1 *)((int)param_1 + 0xfd) = 10;
  FUN_02051890(s_NintendoDS_021a6ea4,param_1 + 0x7f);
  *(undefined1 *)(param_1 + 0x84) = 0x37;
  *(undefined1 *)((int)param_1 + 0x109) = 3;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(undefined1 *)((int)param_1 + 0x10b) = 3;
  *(undefined1 *)(param_1 + 0x86) = 6;
  return (int)param_1 + 0x10d;
}

