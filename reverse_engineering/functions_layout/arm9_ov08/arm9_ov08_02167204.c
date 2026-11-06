
void FUN_02167204(uint *param_1)

{
  *param_1 = *param_1 & 0xc1fffcff | 0x200;
  FUN_021660d0(*(undefined4 *)
                (DAT_0216e870 + (uint)((uint *)(DAT_0216e870 + 0x400U) <= param_1) * 4 + 0x800));
  return;
}

