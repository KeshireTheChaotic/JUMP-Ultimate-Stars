
void FUN_02193680(int param_1)

{
  uint uVar1;
  
  DAT_021a9dcc = (uint)(*(int *)(param_1 + 0xc) == 1);
  uVar1 = *(uint *)(param_1 + 0x10);
  DAT_021a9dd0 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 0x14);
  DAT_021a9dd4 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 0x18);
  DAT_021a9dd8 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 0x1c);
  DAT_021a9ddc = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  uVar1 = *(uint *)(param_1 + 0x20);
  DAT_021a9de0 = uVar1 << 0x18 | (uVar1 & 0xff00) << 8 | uVar1 >> 0x18 | uVar1 >> 8 & 0xff00;
  DAT_021a9de4 = 0x21937a5;
  DAT_021a9de8 = 0x2193785;
  DAT_021a9da0 = *(undefined4 *)(param_1 + 4);
  DAT_021a9d9c = *(undefined4 *)(param_1 + 8);
  DAT_021a9dec = 0x40;
  DAT_021a9dfc = *(undefined4 *)(param_1 + 0x2c);
  DAT_021a9e00 = *(undefined4 *)(param_1 + 0x30);
  FUN_021917e4(&DAT_021a9dcc);
  return;
}

