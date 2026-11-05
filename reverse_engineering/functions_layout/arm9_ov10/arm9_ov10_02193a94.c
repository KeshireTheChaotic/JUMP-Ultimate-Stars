
int FUN_02193a94(void)

{
  int iVar1;
  int in_stack_00000000;
  ushort local_20;
  uint local_1c;
  
  iVar1 = FUN_02192700();
  if ((-1 < iVar1) && (in_stack_00000000 != 0)) {
    *(ushort *)(in_stack_00000000 + 2) = local_20 >> 8 | local_20 << 8;
    *(uint *)(in_stack_00000000 + 4) =
         local_1c << 0x18 | (local_1c & 0xff00) << 8 | local_1c >> 0x18 | local_1c >> 8 & 0xff00;
  }
  return iVar1;
}

