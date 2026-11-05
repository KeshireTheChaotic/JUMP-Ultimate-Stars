
void FUN_02190448(short *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if ((((0x1b < param_2) && (iVar1 = FUN_02191094(param_1 + 4,&DAT_021a8548), iVar1 != 0)) &&
      (DAT_021a8538 != 0)) &&
     (((*param_1 == 0x100 && (param_1[1] == 8)) &&
      ((param_1[2] == 0x406 &&
       ((uVar3 = (int)(uint)(ushort)param_1[3] >> 8 | ((ushort)param_1[3] & 0xff) << 8, uVar3 == 1
        || (uVar3 == 2)))))))) {
    uVar2 = ((int)(uint)(ushort)param_1[7] >> 8 | ((ushort)param_1[7] & 0xff) << 8) << 0x10 |
            (int)(uint)(ushort)param_1[8] >> 8 | ((ushort)param_1[8] & 0xff) << 8;
    bVar4 = uVar2 != DAT_021a8538;
    bVar5 = DAT_021a8538 ==
            (((int)(uint)(ushort)param_1[0xc] >> 8 | ((ushort)param_1[0xc] & 0xff) << 8) << 0x10 |
            (int)(uint)(ushort)param_1[0xd] >> 8 | ((ushort)param_1[0xd] & 0xff) << 8);
    if (bVar4) {
      FUN_02190bac(param_1 + 4,uVar2,bVar5);
    }
    if ((uVar3 == 1) && (bVar5)) {
      FUN_02190534(param_1);
      return;
    }
    if (((uVar3 == 2) && (bVar5)) && (!bVar4)) {
      DAT_021a84e0 = 1;
    }
  }
  return;
}

