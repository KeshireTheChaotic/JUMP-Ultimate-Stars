
void FUN_02193804(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort local_20 [2];
  uint local_1c [2];
  
  iVar1 = FUN_02191e4c(param_1,local_20,local_1c);
  if (-1 < iVar1) {
    *(ushort *)(param_2 + 2) = local_20[0] >> 8 | local_20[0] << 8;
    *(uint *)(param_2 + 4) =
         local_1c[0] << 0x18 |
         (local_1c[0] & 0xff00) << 8 | local_1c[0] >> 0x18 | local_1c[0] >> 8 & 0xff00;
  }
  return;
}

