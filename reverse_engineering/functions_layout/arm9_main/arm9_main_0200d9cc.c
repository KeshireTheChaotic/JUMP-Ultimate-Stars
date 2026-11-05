
byte * FUN_0200d9cc(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    *param_2 = (uint)(bVar1 >> 1);
    return param_1 + 1;
  }
  bVar2 = param_1[1];
  if ((bVar1 & 2) == 0) {
    *param_2 = (uint)CONCAT11(bVar1 >> 2,bVar2);
    return param_1 + 2;
  }
  if ((bVar1 & 4) == 0) {
    *param_2 = (uint)param_1[2] | (uint)bVar2 << 8 | (uint)(bVar1 >> 3) << 0x10;
    return param_1 + 3;
  }
  *param_2 = (uint)param_1[3] |
             (uint)bVar2 << 0x10 | (uint)(bVar1 >> 3) << 0x18 | (uint)param_1[2] << 8;
  return param_1 + 4;
}

