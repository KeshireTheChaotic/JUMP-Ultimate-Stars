
void FUN_0218ff48(int param_1,ushort *param_2,int param_3,undefined4 param_4)

{
  FUN_020517fc(&DAT_021a8670,0,100);
  DAT_021a867a = param_2[1] >> 8 | param_2[1] << 8;
  DAT_021a8688 = *param_2 >> 8 | *param_2 << 8;
  DAT_021a868c = ((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                 (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                 (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                 (*(ushort *)(param_1 + 0xe) & 0xff) << 8;
  if ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0) {
    DAT_021a8698 = ((int)(uint)param_2[4] >> 8 | (param_2[4] & 0xff) << 8) << 0x10 |
                   (int)(uint)param_2[5] >> 8 | (param_2[5] & 0xff) << 8;
    FUN_02190030(&DAT_021a8670,4,param_4);
    return;
  }
  DAT_021a8698 = 0;
  DAT_021a8694 = param_3 + (((int)(uint)param_2[2] >> 8 | (param_2[2] & 0xff) << 8) << 0x10 |
                           (int)(uint)param_2[3] >> 8 | (param_2[3] & 0xff) << 8);
  if ((*(byte *)((int)param_2 + 0xd) & 3) != 0) {
    DAT_021a8694 = DAT_021a8694 + 1;
  }
  FUN_02190030(&DAT_021a8670,0x14,param_4);
  return;
}

