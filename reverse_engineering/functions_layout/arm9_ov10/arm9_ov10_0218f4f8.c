
void FUN_0218f4f8(byte *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int local_18 [2];
  
  uVar4 = ((int)(uint)*(ushort *)(param_1 + 0x10) >> 8 | (*(ushort *)(param_1 + 0x10) & 0xff) << 8)
          << 0x10 | (int)(uint)*(ushort *)(param_1 + 0x12) >> 8 |
                    (*(ushort *)(param_1 + 0x12) & 0xff) << 8;
  if (uVar4 != (((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
               (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 | (*(ushort *)(param_1 + 0xe) & 0xff) << 8
               )) {
    iVar2 = FUN_021910bc(uVar4);
    if (iVar2 == 0) {
      return;
    }
    if (param_2 < ((int)(uint)*(ushort *)(param_1 + 2) >> 8 | (*(ushort *)(param_1 + 2) & 0xff) << 8
                  )) {
      return;
    }
    iVar2 = FUN_02191208(param_1,(*param_1 & 0xf) << 2);
    if (iVar2 != 0xffff) {
      return;
    }
    if (DAT_021a8538 ==
        (((int)(uint)*(ushort *)(param_1 + 0x10) >> 8 | (*(ushort *)(param_1 + 0x10) & 0xff) << 8)
         << 0x10 |
        (int)(uint)*(ushort *)(param_1 + 0x12) >> 8 | (*(ushort *)(param_1 + 0x12) & 0xff) << 8)) {
      FUN_02190bac(param_1 + -8,
                   ((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                   (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                   (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                   (*(ushort *)(param_1 + 0xe) & 0xff) << 8,1);
    }
  }
  pbVar3 = (byte *)FUN_0218f624(param_1,local_18);
  if (pbVar3 != (byte *)0x0) {
    bVar1 = pbVar3[9];
    if (bVar1 == 0x11) {
      FUN_0218f82c();
    }
    else if (DAT_021a8538 != 0) {
      if (bVar1 == 1) {
        FUN_02190254();
      }
      else if (bVar1 == 6) {
        FUN_0218f980(pbVar3,pbVar3 + (*pbVar3 & 0xf) * 4,
                     ((int)(uint)*(ushort *)(pbVar3 + 2) >> 8 |
                     (*(ushort *)(pbVar3 + 2) & 0xff) << 8) + (*pbVar3 & 0xf) * -4);
      }
    }
    if (local_18[0] != 0) {
      (*DAT_021a8528)(pbVar3 + -0xe);
    }
  }
  return;
}

