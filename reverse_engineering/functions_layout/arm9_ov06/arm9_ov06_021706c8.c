
undefined4 FUN_021706c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar2 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(ushort *)(param_1 + 0x26) & 1) == 0) {
    uVar5 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar5 = FUN_02170828();
    }
    if ((uVar5 & 1) != 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x40;
    }
    if ((uVar5 & 2) != 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x40;
    }
    if ((uVar5 & 8) != 0) {
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + -0x40;
    }
    if ((uVar5 & 4) != 0) {
      *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 0x40;
    }
    sVar1 = *(short *)(param_1 + 0x32);
    uVar3 = FUN_0200c954((int)*(short *)(param_1 + 0x30) * (int)*(short *)(param_1 + 0x30));
    uVar4 = FUN_0200c954((int)sVar1 * (int)sVar1);
    FUN_0200bfb4(uVar3,uVar4);
    uVar3 = FUN_0200cb80();
    FUN_0200c9e4(0x45800000,uVar3);
    local_18 = FUN_0200c8e0();
    FUN_0216c2fc(&local_1c,(int)*(short *)(param_1 + 0x30),&local_18);
    *(short *)(param_1 + 0x30) =
         (short)((int)(local_1c * 0x100 + ((uint)(local_1c * 0x100 >> 0xb) >> 0x14)) >> 0xc);
    FUN_0216c2fc(&local_20,(int)*(short *)(param_1 + 0x32),&local_18);
    *(short *)(param_1 + 0x32) =
         (short)((int)(local_20 * 0x100 + ((uint)(local_20 * 0x100 >> 0xb) >> 0x14)) >> 0xc);
    FUN_0217083c(*(undefined4 *)(param_1 + 0x2c),
                 (int)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x30) * 0x100)
                 >> 0x10,(int)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x32) *
                              0x100) >> 0x10);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

