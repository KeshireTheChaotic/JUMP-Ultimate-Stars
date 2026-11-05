
void FUN_02161080(void)

{
  undefined1 auStack_70 [22];
  undefined1 auStack_5a [4];
  undefined1 auStack_56 [20];
  ushort local_42;
  
  DAT_0216e7d8 = 0;
  FUN_02161000();
  FUN_02154978(8);
  FUN_02154724(2);
  FUN_0205542c(auStack_5a);
  MIi_CpuClear16(0,auStack_70,0x16);
  MIi_CpuCopy16(auStack_56,auStack_70,(uint)local_42 << 1);
  FUN_02154638(auStack_70,0x28);
  FUN_02154070(0);
  FUN_02162ff4(0x2160d51);
  FUN_02162378(0xb);
  FUN_02157088(0x2160fd9);
  return;
}

