
uint FUN_02191234(ushort *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (((uint)param_1 & 1) == 0) {
    uVar1 = (int)(param_3 & 0xffff) >> 8 | (param_3 & 0xff) << 8;
    for (; 1 < param_2; param_2 = param_2 - 2) {
      uVar1 = uVar1 + *param_1;
      param_1 = param_1 + 1;
    }
    uVar1 = uVar1 >> 8 & 0xff00ff | (uVar1 & 0xff00ff) << 8;
    param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
  }
  else {
    for (; 1 < param_2; param_2 = param_2 - 2) {
      param_3 = param_3 + CONCAT11((byte)*param_1,*(byte *)((int)param_1 + 1));
      param_1 = param_1 + 1;
    }
  }
  if (param_2 != 0) {
    param_3 = param_3 + (uint)(byte)*param_1 * 0x100;
  }
  uVar1 = (param_3 & 0xffff) + (param_3 >> 0x10);
  return uVar1 + (uVar1 >> 0x10) & 0xffff;
}

