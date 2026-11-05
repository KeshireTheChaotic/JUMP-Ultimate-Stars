
void FUN_02067178(void)

{
  int iVar1;
  
  DAT_020afbd8 = FUN_020652c8();
  iVar1 = DAT_020afbd8 * 6;
  DAT_020afbcc = (uint)*(ushort *)(&DAT_02092258 + iVar1) << 0xc;
  DAT_020afbdc = (uint)*(ushort *)(&DAT_0209225a + iVar1) << 0xc;
  DAT_020afbe0 = (uint)*(ushort *)(&DAT_0209225c + iVar1) << 0xc;
  return;
}

